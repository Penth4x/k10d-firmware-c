/* @k10d dispatch_state_event_by_id_1036544c @ 0x1036544c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 003_ae_mode_state_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105576e0 * dispatch_state_event_by_id_1036544c(cls_105576e0 *param_1,int *param_2)

{
  int iVar1;
  cls_105576e0 *pcVar2;
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
    case 9:
    case 0xc:
      goto code_r0x103654f6;
    case 0x11:
      param_1 = (cls_105576e0 *)process_event_and_return_status(param_1);
      break;
    case 0x18:
      uVar3 = get_or_create_singleton_object_1036c796();
      uVar4 = 0xd;
      goto LAB_1036549e;
    case 0x19:
      if (param_1->field_0x81 != '\0') {
        init_object_with_flag_and_callbacks((void *)(uint32_t)param_1);
        return param_1;
      }
    }
  }
  else {
    if (iVar1 == 1) {
      switch(param_2[1]) {
      case 5:
      case 9:
      case 0x19:
        goto code_r0x103654f6;
      default:
        return param_1;
      case 0xc:
        init_object_substructure((void *)(uint32_t)param_1);
        return param_1;
      case 0x11:
        pcVar2 = (cls_105576e0 *)process_state_0x3030009((void *)(uint32_t)param_1);
        return pcVar2;
      case 0x18:
        uVar3 = get_or_create_singleton_object_1036c796();
        uVar4 = 0xd;
        goto LAB_1036549e;
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
code_r0x103654f6:
    uVar3 = get_or_create_singleton_object_1036c796();
    uVar4 = 2;
LAB_1036549e:
    param_1 = (cls_105576e0 *)read_array_element_bounded(uVar3,uVar4);
  }
  return param_1;
}
