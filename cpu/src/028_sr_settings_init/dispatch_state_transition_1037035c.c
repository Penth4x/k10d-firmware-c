/* @k10d dispatch_state_transition_1037035c @ 0x1037035c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 028_sr_settings_init (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int dispatch_state_transition_1037035c(int param_1,int *param_2)

{
  int iVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  
  iVar1 = *param_2;
  if (iVar1 == 1) {
    return param_1;
  }
  if (iVar1 == 2) {
    return param_1;
  }
  if (iVar1 != 4) {
    return param_1;
  }
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 == 0) {
    switch(param_2[1]) {
    case 5:
      if (*(char *)(param_1 + 0x75) != '\0') {
        set_flag_and_init_subobject((void *)__frv_reg_unset(4));
        return param_1;
      }
      break;
    case 9:
    case 0xc:
    case 0x19:
      goto code_r0x10370400;
    case 0x11:
      param_1 = dispatch_state_transition_103707fc((void *)__frv_reg_unset(4));
      break;
    case 0x18:
      uVar2 = get_or_create_singleton_object_1036c796();
      uVar3 = 0xd;
      goto LAB_103703a8;
    }
  }
  else {
    if (iVar1 == 1) {
      switch(param_2[1]) {
      case 5:
      case 9:
      case 0x19:
        goto code_r0x10370400;
      default:
        return param_1;
      case 0xc:
        init_object_with_three_helpers_10370a68((void *)__frv_reg_unset(4));
        return param_1;
      case 0x11:
        iVar1 = process_sensor_readout_cycle_103708ca((void *)__frv_reg_unset(4));
        return iVar1;
      case 0x18:
        uVar2 = get_or_create_singleton_object_1036c796();
        uVar3 = 0xd;
        goto LAB_103703a8;
      }
    }
    if (iVar1 == 2) {
      return param_1;
    }
    if (iVar1 != 3) {
      return param_1;
    }
    if (param_2[1] != 0x11) {
      return param_1;
    }
code_r0x10370400:
    uVar2 = get_or_create_singleton_object_1036c796();
    uVar3 = 2;
LAB_103703a8:
    param_1 = read_array_element_bounded(uVar2,uVar3);
  }
  return param_1;
}
