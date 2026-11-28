#!/bin/bash
# build.sh — build the recompiled K10D MAIN-CPU firmware entirely from the C in this repo.
# SELF-CONTAINED: needs only (1) the SOFTUNE FR toolchain and (2) a copy of the original 1.31
# firmware (FWDC162B.BIN) to harvest the non-code data (rodata / data / jump tables) from. The
# recompiled CODE is packed at 0x10622400; code/vtables/crt0 are overlaid onto a copy of the
# original, which supplies every non-code byte. No catalog or build database required.
#
#   SOFTUNE=/path/to/softune  FW131=/path/to/FWDC162B.BIN  bash cpu/build.sh
#   -> out/firmware.abs (linked) and out/candidate_FWDC162B.BIN (flashable image)
set -u
HERE="$(cd "$(dirname "$0")" && pwd)"; ROOT="$(dirname "$HERE")"
: "${SOFTUNE:?set SOFTUNE to the dir containing BIN/fcc911s.exe (FR toolchain)}"
: "${FW131:?set FW131 to a copy of the original FWDC162B.BIN (1.31) to harvest non-code data}"
CPU=MB91F128; COPT=${COPT:--O1 -KSIZE -B}; J=${J:-$(nproc)}; CODEBASE=0x10622400
OUT="$HERE/out"; OBJ="$OUT/obj"; mkdir -p "$OBJ"; : > "$OUT/warnings.txt"
INC="-I Z:${HERE//\//\\}\\include"
w(){ echo "Z:${1//\//\\}"; }
export SOFTUNE CPU COPT INC OBJ HERE
one(){ f="$1"; b=$(basename "$f" .c)
  asm="$OBJ/$b.asm"; obj="$OBJ/$b.obj"
  [ -s "$obj" ] && [ "$obj" -nt "$f" ] && return
  # fcc emits W1450B "long long nonstandard" on every 64-bit typedef, and funcs.h declares 60
  # uint64_t-returning functions so EVERY file pulls the type in — W1450B is therefore unavoidable
  # (fcc911s: no __int64, no per-message -w, no pragma) and pure noise. (The old USES_64_BIT gate was
  # removed: it only "worked" because cached .objs predated it; the 64-bit types are now unconditional.)
  # Strip ONLY W1450B; log every OTHER diagnostic to out/warnings.txt, surfaced prominently after the pass.
  cerr=$( (cd "$SOFTUNE" && wine BIN/fcc911s.exe -S $COPT -cpu $CPU $INC -o "$(echo "Z:${asm//\//\\}")" "$(echo "Z:${f//\//\\}")") 2>&1 ); rc=$?
  echo "$cerr" | grep -v 'W1450B' | grep -F '***' | sed "s|^|[$b] |" >> "$(dirname "$OBJ")/warnings.txt"
  [ $rc -ne 0 ] && { echo "CC FAIL $b"; return; }
  # Strip fcc's gratuitous (never-used) R14 frame pointer ONLY where the original Pentax compiler
  # also omitted it (decided per-function from the source's @k10d origVA vs the reference binary;
  # see scripts/strip_frameptr.py). Set NO_FPSTRIP=1 to disable.
  [ -n "$NO_FPSTRIP" ] || python3 "$HERE/../scripts/strip_frameptr.py" "$asm" --src "$f" >/dev/null 2>&1
  (cd "$SOFTUNE" && wine BIN/FASM911S.EXE -cpu $CPU -o "$(echo "Z:${obj//\//\\}")" "$(echo "Z:${asm//\//\\}")") >/dev/null 2>&1 || echo "ASM FAIL $b"; }
export -f one w
echo "[1] compile+assemble C (J=$J)"
find "$HERE/src" -name '*.c' | xargs -P"$J" -I{} bash -c 'one "$@"' _ {} 2>&1 | grep -c FAIL | sed 's/^/   failures: /'
# Under heavy parallel wine, ~some compiles exit 0 but write no .obj (wineserver contention),
# not a real fcc error. Retry anything still missing an .obj at LOW parallelism to absorb that
# flakiness, so the object set is complete for the link.
for pass in 1 2 3; do
  # A silently-failed parallel-wine compile can leave a STALE .obj (exits 0, writes nothing),
  # which "-s" alone treats as present -> old code links, masking an edited source. Count an obj
  # that is NOT newer than its .c as missing too, so it gets retried / aborted on.
  miss=$(find "$HERE/src" -name '*.c' | while read f; do b=$(basename "$f" .c); { [ -s "$OBJ/$b.obj" ] && [ "$OBJ/$b.obj" -nt "$f" ]; } || echo "$f"; done)
  [ -z "$miss" ] && break
  n=$(echo "$miss" | wc -l); echo "   [1b pass $pass] retry $n missing at J=4"
  echo "$miss" | xargs -P4 -I{} bash -c 'one "$@"' _ {}
done
# Gate the link on a COMPLETE object set — a partial link only floods unresolved-symbol errors.
STILL=$(find "$HERE/src" -name '*.c' | while read f; do b=$(basename "$f" .c); { [ -s "$OBJ/$b.obj" ] && [ "$OBJ/$b.obj" -nt "$f" ]; } || echo "$b"; done)
if [ -n "$STILL" ]; then echo "   ABORT: $(echo "$STILL"|wc -l) functions still fail to compile:"; echo "$STILL"|sed 's/^/     /'|head; exit 1; fi
# Surface every non-W1450B compiler diagnostic PROMINENTLY (W1450B "long long" is suppressed as noise).
# Empty after a relink (nothing recompiled). A real warning/error here must not be ignored.
if [ -s "$OUT/warnings.txt" ]; then
  echo ""; echo "!!!!!!!!!!!!!!!!!!!!!! COMPILER WARNINGS / ERRORS (W1450B suppressed) !!!!!!!!!!!!!!!!!!!!!!"
  sort -u "$OUT/warnings.txt"
  echo "!!!!! $(sort -u "$OUT/warnings.txt" | wc -l) distinct line(s) above — full log: $OUT/warnings.txt"
  echo "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"; echo ""
fi
# Regenerate the rodata function-pointer relocation table from scripts/confirmed_fnptrs.txt BEFORE
# assembling cpu/gen/*.asm — otherwise an edit to confirmed_fnptrs.txt silently has no effect (the
# stale rodata_fnptrs.asm is assembled instead, so added fnptr redirects never land). Found d329.
python3 "$HERE/../scripts/gen_rodata_fnptrs.py" 2>/dev/null || echo "   (gen_rodata_fnptrs.py failed — rodata_fnptrs.asm may be stale)"
echo "[2] assemble hand-written / harvested asm (crt0, vtables, syms, syscall_traps, + every cpu/gen/*.asm: hand-asm'd fcc-can't-recompile functions from scripts/harvest_asm.py)"
for g in "$HERE"/gen/*.asm; do a=$(basename "$g" .asm); (cd "$SOFTUNE" && wine BIN/FASM911S.EXE -cpu $CPU -o "$(w "$OBJ/$a.obj")" "$(w "$g")") >/dev/null 2>&1 || echo "   ASM FAIL $a"; done
echo "[3] link (pack code at $CODEBASE)"
OPT="$OUT/link.opt"; { echo "-cpu $CPU"; echo "-a"; echo "-e _reset_entry"; echo "-sc CODE=$CODEBASE";
  # -dt + wide -pw: emit FULL (non-abbreviated) symbol names in the map. Long recompiled-function
  # names are otherwise truncated at the column width, which drops their origVA suffix and breaks
  # the packed->origVA mapping used by the trace reducer (harness2/fnseq.py) -> silent undercount.
  echo "-dt"; echo "-pw 1023"
  echo "-m $(w $OUT/firmware.map)"; echo "-o $(w $OUT/firmware.abs)"
  for o in "$OBJ"/*.obj; do echo "$(w "$o")"; done; } > "$OPT"
(cd "$SOFTUNE" && wine BIN/FLNK911S.EXE -f "$(w $OPT)") > "$OUT/link.log" 2>&1
[ -s "$OUT/firmware.abs" ] || { echo "   LINK FAILED (see out/link.log)"; grep -iE 'unresolved|E[0-9]+L' "$OUT/link.log" | head; exit 1; }
echo "   LINKED: $(stat -c%s $OUT/firmware.abs) bytes"
echo "[4] S-records + overlay onto a copy of the 1.31 firmware (harvest non-code data)"
(cd "$SOFTUNE" && wine BIN/F2MS.EXE -o "$(w $OUT/firmware.mhx)" "$(w $OUT/firmware.abs)") >/dev/null 2>&1
python3 "$ROOT/scripts/overlay_fr.py" "$OUT/firmware.mhx" "$FW131" 0x100f0000 0x100f0000 "$OUT/candidate_FWDC162B.BIN"
echo "   -> $OUT/candidate_FWDC162B.BIN"
