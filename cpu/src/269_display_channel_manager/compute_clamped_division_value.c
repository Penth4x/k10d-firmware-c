/* @k10d compute_clamped_division_value @ 0x10507960
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 269_display_channel_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint compute_clamped_division_value(uint param_1,int param_2,int param_3,uint32_t param_4,uint param_5,char param_6,
                 char param_7,uint param_8)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_2 < 2) {
    iVar1 = param_1 + 0x24 + param_2 * 0x34;
  }
  else {
    iVar1 = 0;
  }
  if ((*(char *)(iVar1 + 0x18) == '\0') || (param_6 != '\0')) {
    init_entry_and_dispatch(param_1,0);
  }
  call_kernel_with_short_id((uint32_t *)(param_1 + 0x308));
  if (param_2 < 2) {
    iVar1 = param_1 + 0x24 + param_2 * 0x34;
  }
  else {
    iVar1 = 0;
  }
  uVar2 = combine_two_helper_results((void *)(iVar1 + 4));
  if (param_2 < 2) {
    iVar1 = param_1 + 0x24 + param_2 * 0x34;
  }
  else {
    iVar1 = 0;
  }
  uVar3 = get_field_if_flag_set(iVar1 + 4);
  if (param_5 < uVar3) {
    uVar3 = uVar3 - param_5;
    if ((param_7 == '\0') || (param_8 == 0)) {
      if (uVar3 < uVar2) {
        uVar2 = uVar3;
      }
    }
    else {
      uVar2 = 0;
      if (param_8 <= uVar3) {
        uVar4 = call_helper_with_three_args_104ce518();
        uVar2 = uVar3 / param_8;
        if (uVar4 <= uVar3 / param_8) {
          uVar2 = uVar4;
        }
      }
    }
  }
  else {
    uVar2 = 0;
  }
  check_kernel_call_success_10459d88((uint32_t *)(param_1 + 0x308));
  return uVar2;
}
