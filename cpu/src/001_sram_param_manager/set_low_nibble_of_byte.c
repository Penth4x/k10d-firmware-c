/* @k10d set_low_nibble_of_byte @ 0x100f1dea
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 001_sram_param_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void set_low_nibble_of_byte(byte param_1)

{
  *(byte *)(_DAT_800482d4/*SDRAM*/ + 0x2e) = *(byte *)(_DAT_800482d4/*SDRAM*/ + 0x2e) & 0xf0 | param_1 & 0xf;
  return;
}
