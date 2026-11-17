/* @k10d debug_flag_reader_0x0c @ 0x104358b0
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed check_magic_at_offset_8)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Returns true if the 32-bit value at offset 8 of the given pointer equals 0x5aa5a55a.
 * summary:
 *   The function dereferences param_1 + 8 and compares the loaded integer against the
 *   constant 0x5aa5a55a. It has no callees and performs no writes, acting as a simple
 *   magic-number or validity check on a structure field. The specific meaning of the
 *   0x5aa5a55a constant is not determinable from the code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool debug_flag_reader_0x0c(void *param_1)

{
  return *(int *)((int)param_1 + 8) == 0x5aa5a55a;
}
