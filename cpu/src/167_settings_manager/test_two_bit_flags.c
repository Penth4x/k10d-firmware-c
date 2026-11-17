/* @k10d test_two_bit_flags @ 0x10476f96
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 167_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t test_two_bit_flags(void *param_1,int param_2)

{
  ushort uVar1;
  uint uVar2;
  
  if (param_2 != -1) {
    uVar1 = *(ushort *)((int)param_1 + 4);
    uVar2 = make_bit_mask_from_index(param_1,(byte)param_2);
    if (((uVar1 & uVar2) != 0) &&
       (uVar1 = *(ushort *)((int)param_1 + 6), uVar2 = make_bit_mask_from_index(param_1,(byte)param_2),
       (uVar1 & uVar2) != 0)) {
      return 1;
    }
  }
  return 0;
}
