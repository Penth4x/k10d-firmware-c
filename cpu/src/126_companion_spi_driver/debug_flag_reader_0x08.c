/* @k10d debug_flag_reader_0x08 @ 0x10435884
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed check_magic_at_offset_0x1c)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Returns true if the 32-bit value at offset 0x1c of the given structure equals
 *   0x5aa5a55a.
 * summary:
 *   The function dereferences the pointer in param_1, adds 0x1c, and compares the resulting
 *   32-bit integer to the constant 0x5aa5a55a. It returns a boolean indicating whether the
 *   magic number matches. No other side effects or callees are involved.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool debug_flag_reader_0x08(void *param_1)

{
  return *(int *)((int)param_1 + 0x1c) == 0x5aa5a55a;
}
