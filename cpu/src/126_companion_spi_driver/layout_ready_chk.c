/* @k10d layout_ready_chk @ 0x1044ac48
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed check_bit17_of_mmio_word)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Reads a 32-bit word from an MMIO address derived from param_1 and returns whether bit
 *   17 is set.
 * summary:
 *   The function dereferences param_1+8 to obtain a base address, adds 0x24 to it, and
 *   reads the 32-bit value at that location. It tests bit 17 (0x20000) of the read value
 *   and returns true if set. It also writes 0 to the global DAT_00000300 before returning.
 *   No callees are present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool layout_ready_chk(void *param_1)

{
  _DAT_00000300 = 0;
  return (*(uint *)(*(int *)((int)param_1 + 8) + 0x24) & 0x20000) != 0;
}
