/* @k10d dispatch_event_to_object_103a4926 @ 0x103a4926
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 045_settings_menu_init (unit names are model-proposed)
 * purpose:
 *   Routes an event ID to a virtual method on an object, with conditional pre-processing
 *   for specific event types.
 * summary:
 *   The function first calls dispatch_event_0x29_via_vtable. It then checks flags at
 *   offsets 0x65 and 0x19 in the object pointed to by param_1. Based on the event ID
 *   (param_2) and these flags, it either performs specific actions (calling helpers like
 *   adjust_exposure_value_counter, dispatch_event_with_timeout_103a5214, or toggling a flag
 *   at offset 0x14) or falls through to a virtual call. The final action is a virtual call
 *   to slot 14 (offset 0x74) of the vtable in *param_1, passing the event ID (or a modified
 *   value like 0x1120009) and 0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_event_to_object_103a4926(int *param_1,int param_2,uint32_t param_3)

{
  char cVar1;
  bool bVar2;
  uint32_t uVar3;
  int iVar4;
  
  dispatch_event_0x29_via_vtable(param_1,param_2,param_3);
  uVar3 = 0;
  if (*(char *)((int)param_1 + 0x65) != '\0') {
    if (param_2 == 0x11) {
      uVar3 = 0x1120009;
      bVar2 = false;
    }
    else {
      if (param_2 == 0xc) {
        uVar3 = 0x1120009;
        iVar4 = *param_1;
        goto LAB_103a4a2a;
      }
      bVar2 = true;
    }
    goto LAB_103a4a26;
  }
  if (*(char *)(param_1 + 0x19) == '\0') {
    switch(param_2) {
    default:
      goto LAB_103a4a24;
    case 9:
    case 0x18:
    case 0x19:
    case 0x1a:
    case 0x2c:
      uVar3 = 0x1120004;
      bVar2 = false;
      break;
    case 0xc:
      uVar3 = 0x1120009;
      bVar2 = false;
      break;
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x10:
      if (*(char *)(param_1 + 0x14) != '\x01') goto LAB_103a4a24;
      iVar4 = *(int *)param_1[0xb];
      (**(code **)(iVar4 + 0x14))(param_1[0xb] + (int)*(short *)(iVar4 + 0x10),0x1120065,0);
      adjust_exposure_value_counter(param_1,param_2);
      draw_viewfinder_crosshair(param_1);
      register_menu_item_on_state_match(param_1);
      bVar2 = true;
      break;
    case 0x11:
      dispatch_event_with_timeout_103a5214(param_1);
      bVar2 = true;
      break;
    case 0x27:
    case 0x28:
      iVar4 = *(int *)param_1[0xb];
      (**(code **)(iVar4 + 0x14))(param_1[0xb] + (int)*(short *)(iVar4 + 0x10),0x1120065,0);
      cVar1 = *(char *)(param_1 + 0x14);
      *(bool *)(param_1 + 0x14) = cVar1 != '\x01';
      set_setting_from_probe_result(param_1[10],cVar1 != '\x01');
      register_seven_menu_items(param_1);
      register_menu_items_and_update_view(param_1);
      bVar2 = true;
    }
  }
  else {
LAB_103a4a24:
    bVar2 = true;
  }
LAB_103a4a26:
  if (bVar2) {
    return;
  }
  iVar4 = *param_1;
LAB_103a4a2a:
  (**(code **)(iVar4 + 0x74))((int)*(short *)(iVar4 + 0x70) + (int)param_1,uVar3,0);
  return;
}
