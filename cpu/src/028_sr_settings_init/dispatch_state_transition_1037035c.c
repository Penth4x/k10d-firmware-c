/* @k10d dispatch_state_transition_1037035c @ 0x1037035c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 028_sr_settings_init (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_10557fec * dispatch_state_transition_1037035c(cls_10557fec *param_1,int *param_2)

{
  int iVar1;
  cls_10557fec *pcVar2;
  uint32_t uVar3;
  uint32_t uVar4;
  
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
  iVar1 = *(int *)&param_1->field_0x14;
  if (iVar1 == 0) {
    switch(param_2[1]) {
    case 5:
      if (param_1->field_0x75 != '\0') {
        set_flag_and_init_subobject((void *)(uint32_t)param_1);
        return param_1;
      }
      break;
    case 9:
    case 0xc:
    case 0x19:
      goto code_r0x10370400;
    case 0x11:
      param_1 = (cls_10557fec *)dispatch_state_transition_103707fc((void *)(uint32_t)param_1);
      break;
    case 0x18:
      uVar3 = get_or_create_singleton_object_1036c796();
      uVar4 = 0xd;
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
        init_object_with_three_helpers_10370a68((void *)(uint32_t)param_1);
        return param_1;
      case 0x11:
        pcVar2 = (cls_10557fec *)process_sensor_readout_cycle_103708ca((void *)(uint32_t)param_1);
        return pcVar2;
      case 0x18:
        uVar3 = get_or_create_singleton_object_1036c796();
        uVar4 = 0xd;
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
    uVar3 = get_or_create_singleton_object_1036c796();
    uVar4 = 2;
LAB_103703a8:
    param_1 = (cls_10557fec *)read_array_element_bounded(uVar3,uVar4);
  }
  return param_1;
}
