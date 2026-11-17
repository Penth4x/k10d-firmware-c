/* @k10d clear_two_bitmasks @ 0x100f19da
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 001_sram_param_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_two_bitmasks(ushort param_1,ushort param_2)

{
  ushort uVar1;
  
  uVar1 = read_word_at_dat_offset_100f1f90();
  store_word_at_dat_offset_100f1f82(uVar1 & (param_1 ^ 0xffff));
  uVar1 = read_word_at_dat_offset_100f1fc8();
  store_word_at_dat_offset_100f1fba(uVar1 & (param_2 ^ 0xffff));
  return;
}
