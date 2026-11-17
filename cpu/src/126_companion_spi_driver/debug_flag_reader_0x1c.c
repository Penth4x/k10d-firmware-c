/* @k10d debug_flag_reader_0x1c @ 0x10435858
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed check_magic_at_offset_0x1c)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Returns true if the 32-bit value at offset 0x1c of the given pointer equals 0x5aa5a55a.
 * summary:
 *   The function performs a single memory read from param_1 + 0x1c and compares it to the
 *   constant 0x5aa5a55a. It returns a boolean result indicating whether the magic value is
 *   present. No other side effects or callees are involved.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* DEBUG_MODE reader (settings field). PATCHED in Image A: file 0x435869 04->14 forces return 1. */

bool debug_flag_reader_0x1c(int param_1)

{
  return *(int *)(param_1 + 0x1c) == 0x5aa5a55a;
}
