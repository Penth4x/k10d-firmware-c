/* @k10d dispatch_mode_transition_event_1036772a @ 0x1036772a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 008_mode_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int dispatch_mode_transition_event_1036772a(cls_105579a8 *param_1,int *param_2)

{
  int iVar1;
  uint32_t uVar2;
  cls_105579a8 *pcVar3;
  uint32_t uVar4;
  
  if ((*param_2 == 4) || (*param_2 == 5)) {
    call_two_helpers_with_timeout_10367b84(param_1);
  }
  if (*param_2 != 4) {
    if (*param_2 != 6) {
      return (int)param_1;
    }
    goto LAB_10367832;
  }
  if (*(int *)&param_1->field_0x14 != 0) {
    if (*(int *)&param_1->field_0x14 != 3) {
      return (int)param_1;
    }
    if (param_2[1] != 0x11) {
      return (int)param_1;
    }
    goto LAB_10367832;
  }
  pcVar3 = param_1;
  if (param_1->field_0x9c == 0) {
    iVar1 = param_2[1];
    if (iVar1 == 0xc) {
      uVar2 = get_or_create_singleton_object_1036c796();
      uVar4 = 0xd;
LAB_103677dc:
      pcVar3 = (cls_105579a8 *)read_array_element_bounded(uVar2,uVar4);
    }
    else if (iVar1 == 0x18) {
      param_1->field_0x9c = 1;
      call_virtual_slot_8_after_init(param_1);
    }
    else if (iVar1 == 0x11) {
      dispatch_mode_transition_10367f40(param_1);
      uVar2 = get_or_create_singleton_object_1036c796();
      uVar4 = 2;
      goto LAB_103677dc;
    }
  }
  else if (param_1->field_0x9c == 1) {
    iVar1 = param_2[1];
    if (iVar1 != 0xc) {
      if (iVar1 == 0x18) {
        uVar2 = get_or_create_singleton_object_1036c796();
        uVar4 = 0xd;
      }
      else {
        if (iVar1 != 0x11) goto LAB_103677e8;
        run_exposure_sequence_10367ff4(param_1);
        uVar2 = get_or_create_singleton_object_1036c796();
        uVar4 = 2;
      }
      goto LAB_103677dc;
    }
    param_1->field_0x9c = 0;
    call_virtual_slot_8_after_init(param_1);
  }
LAB_103677e8:
  iVar1 = param_2[1];
  if ((iVar1 == 0x28) || (iVar1 == 0xe)) {
    adjust_and_notify_counter((int)param_1,0);
    return (int)pcVar3;
  }
  if ((iVar1 == 0x27) || (iVar1 == 0xd)) {
    adjust_and_notify_counter((int)param_1,1);
    return (int)pcVar3;
  }
  if ((iVar1 != 0x19) && (iVar1 != 9)) {
    return (int)pcVar3;
  }
LAB_10367832:
  uVar2 = get_or_create_singleton_object_1036c796();
  iVar1 = read_array_element_bounded(uVar2,2);
  return iVar1;
}
