/* @k10d dispatch_on_mode_field_104bba12 @ 0x104bba12
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 224_ae_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint dispatch_on_mode_field_104bba12(void *param_1)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  
  iVar2 = *(int *)((int)param_1 + 0x2c);
  uVar1 = 0;
  if (iVar2 == 0) {
    uVar1 = check_index_less_than_count((uint32_t *)__frv_reg_unset(4));
  }
  else if (iVar2 == 1) {
    bVar3 = compare_offset_to_helper_result(param_1);
    uVar1 = (uint)bVar3;
  }
  else if (iVar2 == 2) {
    bVar3 = check_field_at_offset_0x40_positive((int)param_1);
    uVar1 = (uint)bVar3;
  }
  else if (iVar2 == 3) {
    bVar3 = check_field_at_offset_0x44_positive(param_1);
    uVar1 = (uint)bVar3;
  }
  return uVar1;
}
