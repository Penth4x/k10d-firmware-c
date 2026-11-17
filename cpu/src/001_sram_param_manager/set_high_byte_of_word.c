/* @k10d set_high_byte_of_word @ 0x100f1db6
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 001_sram_param_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void set_high_byte_of_word(short param_1)

{
  *(ushort *)(_DAT_800482d4/*SDRAM*/ + 0x2c) = *(ushort *)(_DAT_800482d4/*SDRAM*/ + 0x2c) & 0xff | param_1 << 8;
  return;
}
