/* @k10d debug_flag_writer_0x18 @ 0x10435960
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed check_magic_at_offset_0x18)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Returns true if the 32-bit value at offset 0x18 of the given structure equals
 *   0x5aa5a55a.
 * summary:
 *   The function dereferences param_1, adds 0x18, and compares the resulting 32-bit integer
 *   to the constant 0x5aa5a55a. It returns a boolean indicating whether the magic value
 *   matches. No other side effects or callees are present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool debug_flag_writer_0x18(void *param_1)

{
  return *(int *)((int)param_1 + 0x18) == 0x5aa5a55a;
}
