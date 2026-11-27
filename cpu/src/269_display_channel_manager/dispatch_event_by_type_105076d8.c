/* @k10d dispatch_event_by_type_105076d8 @ 0x105076d8
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 269_display_channel_manager (unit names are model-proposed)
 * purpose:
 *   Dispatches an event based on its type ID (0x800001-0x800004) and invokes a virtual
 *   callback on the event object.
 * summary:
 *   The function checks two flag bytes at offsets 0x31c and 0x31d of the object. If both
 *   are zero, it performs type-specific actions (calling helpers like
 *   process_four_parameter_blocks or invoke_object_method_chain) before invoking a virtual
 *   method (slot 2) on the event object pointed to by param_2. If the flags are set, it
 *   skips the helper calls and directly invokes the virtual callback. The virtual call
 *   passes the event type and a status parameter derived from the event data.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x10507704) overlaps instruction at (ram,0x10507702)
    */

void dispatch_event_by_type_105076d8(cls_105d51fc *param_1,int *param_2)

{
  bool bVar1;
  bool bVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  
  if ((param_1->field_0x31c == '\0') && (param_1->field_0x31d == '\0')) {
    if (param_2[2] == 0x800001) {
      iVar5 = param_2[1];
      if (iVar5 != 0) {
        process_four_parameter_blocks((int)(param_1),(int *)(iVar5));
        if ((*(char *)(iVar5 + 8) == '\0') && (*(char *)(iVar5 + 9) == '\0')) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if ((*(char *)(iVar5 + 0x14) == '\0') && (*(char *)(iVar5 + 0x15) == '\0')) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar1) {
          init_entry_and_dispatch((int)(param_1),(int)(0));
        }
        if (bVar2) {
          init_entry_and_dispatch((int)(param_1),(int)(1));
        }
      }
      iVar5 = *(int *)*param_2;
      (((vtbl_entry*)(iVar5))[2].fn)(*param_2 + (int)((vtbl_entry*)(iVar5))[2].adj,0x800001,param_2[3]);
    }
    else {
      if (param_2[2] == 0x800002) {
        if (param_2[1] != 0) {
          invoke_object_method_chain((int)(param_1),(uint32_t *)(uint32_t)param_2);
        }
        iVar5 = *(int *)*param_2;
        (((vtbl_entry*)(iVar5))[2].fn)(*param_2 + (int)((vtbl_entry*)(iVar5))[2].adj,0x800002,param_2[3]);
        return;
      }
      if (param_2[2] != 0x800003) {
        if (param_2[2] != 0x800004) {
          return;
        }
        iVar4 = update_subobject_state((int)(param_1),(int)(param_2[1]));
        init_entry_and_dispatch((int)(param_1),(int)(param_2[1]));
        iVar5 = *(int *)*param_2;
        (((vtbl_entry*)(iVar5))[2].fn)(*param_2 + (int)((vtbl_entry*)(iVar5))[2].adj,0x800004,iVar4 != 0);
        return;
      }
      pvVar3 = (void *)get_or_init_singleton_object_1051d40e();
      update_camera_state_flags(pvVar3,0xf,3);
      init_entry_and_dispatch((int)(param_1),(int)(param_2[1]));
      iVar5 = *(int *)*param_2;
      (((vtbl_entry*)(iVar5))[2].fn)(*param_2 + (int)((vtbl_entry*)(iVar5))[2].adj,0x800003,0);
    }
    pvVar3 = (void *)get_or_init_singleton_object_1051d40e();
    update_camera_state_flags(pvVar3,0xf,0);
    return;
  }
  if (param_2[2] == 0x800001) {
    iVar5 = *(int *)*param_2;
    (((vtbl_entry*)(iVar5))[2].fn)(*param_2 + (int)((vtbl_entry*)(iVar5))[2].adj,0x800001,param_2[3]);
    return;
  }
  if (param_2[2] == 0x800002) {
    iVar5 = *(int *)*param_2;
    (((vtbl_entry*)(iVar5))[2].fn)(*param_2 + (int)((vtbl_entry*)(iVar5))[2].adj,0x800002,param_2[3]);
    return;
  }
  if (param_2[2] == 0x800003) {
    iVar5 = *(int *)*param_2;
    (((vtbl_entry*)(iVar5))[2].fn)(*param_2 + (int)((vtbl_entry*)(iVar5))[2].adj,0x800003,0);
    return;
  }
  if (param_2[2] != 0x800004) {
    return;
  }
  iVar5 = *(int *)*param_2;
  (((vtbl_entry*)(iVar5))[2].fn)(*param_2 + (int)((vtbl_entry*)(iVar5))[2].adj,0x800004,0);
  return;
}
