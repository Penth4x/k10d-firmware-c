/* @k10d test_bit_1_of_dat_800482d4_2c @ 0x100f1e44
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 001_sram_param_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool test_bit_1_of_dat_800482d4_2c(void)

{
  return (int)((uint)*(ushort *)(_DAT_800482d4/*SDRAM*/ + 0x2c) << 0x1e) < 0;
}
