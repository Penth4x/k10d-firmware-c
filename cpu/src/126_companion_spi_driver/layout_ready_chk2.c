/* @k10d layout_ready_chk2 @ 0x1044ac84
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed check_bit_16_of_nested_ptr)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Tests bit 16 of a 32-bit value located at offset 0x24 in a structure pointed to by the
 *   second pointer of param_1.
 * summary:
 *   The function dereferences param_1 to get a pointer at offset 8, then reads a 32-bit
 *   integer at offset 0x24 of that structure. It checks if bit 16 (0x10000) is set and
 *   returns the boolean result. It also clears the global variable DAT_00000300 to 0 before
 *   returning. No camera-specific subsystem is identifiable from the code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool layout_ready_chk2(void *param_1)

{
  _DAT_00000300 = 0;
  return (*(uint *)(*(int *)((int)param_1 + 8) + 0x24) & 0x10000) != 0;
}
