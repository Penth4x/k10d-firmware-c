/* @k10d check_range_overlap @ 0x104af696
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 213_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_range_overlap(void *param_1,uint param_2,int param_3)

{
  uint32_t uVar1;
  uint uVar2;
  
  uVar2 = get_or_init_vtable_slot2((int *)__frv_reg_unset(4));
  uVar1 = 0;
  if (uVar2 < param_2) {
    uVar1 = 8;
  }
  else if (uVar2 < param_3 + param_2) {
    uVar1 = 8;
  }
  return uVar1;
}
