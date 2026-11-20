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

void dispatch_event_to_object_103a4926(cls_10564c80 *param_1,int param_2,uint32_t param_3)

{
  uint32_t uVar1;
  int iVar2;
  void *puVar3;
  bool bVar4;
  
  dispatch_event_0x29_via_vtable((cls_105643d0 *)param_1,param_2,param_3);
  uVar1 = 0;
  if (param_1->field_0x65 != '\0') {
    if (param_2 == 0x11) {
      uVar1 = 0x1120009;
      bVar4 = false;
    }
    else {
      if (param_2 == 0xc) {
        uVar1 = 0x1120009;
        puVar3 = (void *)param_1->field_0x0;
        goto LAB_103a4a2a;
      }
      bVar4 = true;
    }
    goto LAB_103a4a26;
  }
  if (param_1->field_0x64 == '\0') {
    switch(param_2) {
    default:
      goto LAB_103a4a24;
    case 9:
    case 0x18:
    case 0x19:
    case 0x1a:
    case 0x2c:
      uVar1 = 0x1120004;
      bVar4 = false;
      break;
    case 0xc:
      uVar1 = 0x1120009;
      bVar4 = false;
      break;
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x10:
      if (*(char *)&param_1->field_0x50 != '\x01') goto LAB_103a4a24;
      iVar2 = *(int *)&param_1->field_0x2c;
      (((vtbl_entry*)(iVar2))[2].fn)
                ((int)param_1->field_0x2c + (int)((vtbl_entry*)(iVar2))[2].adj,0x1120065,0);
      adjust_exposure_value_counter(param_1,param_2);
      draw_viewfinder_crosshair(param_1);
      register_menu_item_on_state_match(param_1);
      bVar4 = true;
      break;
    case 0x11:
      dispatch_event_with_timeout_103a5214(param_1);
      bVar4 = true;
      break;
    case 0x27:
    case 0x28:
      iVar2 = *(int *)&param_1->field_0x2c;
      (((vtbl_entry*)(iVar2))[2].fn)
                ((int)param_1->field_0x2c + (int)((vtbl_entry*)(iVar2))[2].adj,0x1120065,0);
      bVar4 = *(char *)&param_1->field_0x50 != '\x01';
      *(bool *)&param_1->field_0x50 = bVar4;
      set_setting_from_probe_result(param_1->field_0x28,bVar4);
      register_seven_menu_items(param_1);
      register_menu_items_and_update_view(param_1);
      bVar4 = true;
    }
  }
  else {
LAB_103a4a24:
    bVar4 = true;
  }
LAB_103a4a26:
  if (bVar4) {
    return;
  }
  puVar3 = (void *)param_1->field_0x0;
LAB_103a4a2a:
  (((vtbl_entry*)(puVar3))[14].fn)((int)&param_1->field_0x0 + (int)((vtbl_entry*)(puVar3))[14].adj,uVar1,0);
  return;
}
