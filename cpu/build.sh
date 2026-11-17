#!/bin/bash
# Compile every src/*.c independently, in parallel. Writes compile-report.txt
# (total/ok/fail) and errors.txt (per-file compiler output for failures).
cd "$(dirname "$0")"
rm -rf .build && mkdir -p .build
find src -name '*.c' -print0 | xargs -0 -P "$(nproc)" -I{} sh -c '
  f="{}"; b=$(basename "$f" .c)
  if cc -c -w -std=gnu99 -Iinclude -fno-common "$f" -o /dev/null 2>".build/$b.err"; then
    rm -f ".build/$b.err"; : > ".build/$b.ok"
  fi
  # L1: parses and every symbol resolves (type disagreements downgraded)
  cc -c -w -fpermissive -std=gnu99 -Iinclude -fno-common "$f" -o /dev/null 2>/dev/null && : > ".build/$b.l1"'
l1=$(find .build -name '*.l1' | wc -l)
ok=$(find .build -name '*.ok' | wc -l); fail=$(find .build -name '*.err' | wc -l)
: > errors.txt
for e in .build/*.err; do [ -e "$e" ] || continue; b=$(basename "$e" .err); echo "=== src/$b.c ===" >> errors.txt; cat "$e" >> errors.txt; done
echo "total=$((ok+fail)) L1(permissive)=$l1 L2(strict)=$ok fail_strict=$fail" | tee compile-report.txt
