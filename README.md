# K10D firmware, in C

A C reconstruction of the Pentax K10D DSLR firmware (FWDC162B), recovered by
decompiling the camera's flash image with Ghidra (Fujitsu FR60Lite) and
reconciling the result until it type-checks.

Two processors:

- `cpu/` — the main CPU (@ 0x10000000). Files grouped by recovered module under
  `cpu/src/<module>/`, one file per function.
- `dsp/` — the self-booting DSP partition (@ 0xc0000): the sensor / AE /
  shake-reduction real-time controller. One file per function.

For study and type-checking, not for running on the build host.

## Build

    cpu/build.sh      # or dsp/build.sh

Each compiles every file independently and reports how many parse (L1) and how
many are strictly type-clean (L2).

## Firmware is not included

Derived analysis only; the original firmware binary is not distributed here.
Companion repos: the Ghidra FR module fix and the QEMU FRN machine target.
