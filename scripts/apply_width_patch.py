#!/usr/bin/env python3
"""Apply scripts/global_width_patch.txt to globals.h: retype each flagged address-global to the
narrower type stock actually uses, then print the .c files to touch (users of the changed globals).
Only edits the exact declaration line for the named global (keeps DAT_/_DAT_ aliases independent)."""
import re, os
ROOT = "/home/memorai/k10d-firmware-c"
GL = f"{ROOT}/cpu/include/globals.h"
patch = {}
for ln in open(f"{ROOT}/scripts/global_width_patch.txt"):
    p = ln.split()
    if len(p) >= 3: patch[p[2]] = p[1]      # name -> newtype
lines = open(GL).read().splitlines(keepends=True)
changed = 0; names = set()
out = []
for line in lines:
    m = re.match(r'(\s*extern\s+)(uint32_t|undefined4|int)(\s+\*?\s*)([A-Za-z_][A-Za-z0-9_]*?[0-9a-fA-F]{8})(\s*;.*)', line)
    if m and m.group(4) in patch:
        nt = patch[m.group(4)]
        out.append(f"{m.group(1)}{nt}{m.group(3)}{m.group(4)}{m.group(5)}\n")
        changed += 1; names.add(m.group(4))
    else:
        out.append(line)
open(GL, "w").write("".join(out))
print(f"retyped {changed}/{len(patch)} declarations in globals.h")
# find user .c files (build.sh ignores header mtime -> must touch them)
import subprocess
users = set()
for nm in names:
    r = subprocess.run(["grep","-rl",nm,f"{ROOT}/cpu/src"], capture_output=True, text=True)
    for f in r.stdout.split():
        if f.endswith(".c"): users.add(f)
print(f"user .c files to touch: {len(users)}")
open("/tmp/claude-1002/width_users.txt","w").write("\n".join(sorted(users)))
