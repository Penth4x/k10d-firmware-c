/* @k10d write_initial_config_values @ 0x100f0264
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 001_sram_param_manager (unit names are model-proposed)
 * purpose:
 *   Sets three bytes to 0xf and writes specific constants to memory addresses
 *   0x50000000-0x50000006.
 * summary:
 *   The function initializes a small block of memory at 0x488-0x48a with the value 0xf. It
 *   then writes the constants 0x3fc7, 0x50, and 0x71d to addresses 0x50000002, 0x50000004,
 *   and 0x50000006 respectively. Finally, it clears bits 4 and 5 of the 16-bit value at
 *   0x50000000 by ANDing it with 0xff7e. No callees are invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void write_initial_config_values(void)

{
  DAT_00000488 = 0xf;
  DAT_00000489 = 0xf;
  DAT_0000048a = 0xf;
  _DAT_50000002 = 0x3fc7;
  _DAT_50000004 = 0x50;
  _DAT_50000006 = 0x71d;
  _DAT_50000000 = _DAT_50000000 & 0xff7e;
  return;
}
