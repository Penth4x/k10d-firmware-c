/* @k10d test_bit_10_of_dat_800482d4 @ 0x100f1e14
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 001_sram_param_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool test_bit_10_of_dat_800482d4(void)

{
  return (int)((uint)*(ushort *)(_DAT_800482d4/*SDRAM*/ + 0x42) << 0x15) < 0;
}
