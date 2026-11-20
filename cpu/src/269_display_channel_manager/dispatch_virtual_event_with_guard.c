/* @k10d dispatch_virtual_event_with_guard @ 0x1050aa70
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 269_display_channel_manager (unit names are model-proposed)
 * purpose:
 *   Invokes a virtual method on an object if a specific tag matches, wrapping the call with
 *   helper functions.
 * summary:
 *   Checks if param_2 is non-null and if param_2[2] equals 0x1130001. If so, it calls
 *   get_or_init_singleton_object_1051d40e and update_camera_state_flags (with args 0x13,
 *   1), then process_exposure_parameter_update, and finally performs a virtual call via the
 *   vtable at offset 0x14. It always calls get_or_init_singleton_object_1051d40e and
 *   update_camera_state_flags (with args 0x13, 0) at the end if param_2 is non-null. The
 *   specific tag 0x1130001 and the virtual call pattern suggest an event or message
 *   dispatch mechanism, but the specific subsystem is not identifiable from the provided
 *   callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_virtual_event_with_guard(cls_105d5470 *param_1,int *param_2)

{
  void *pvVar1;
  int iVar2;
  
  if (param_2 != (int *)0x0) {
    if (param_2[2] == 0x1130001) {
      pvVar1 = (void *)get_or_init_singleton_object_1051d40e();
      update_camera_state_flags(pvVar1,0x13,1);
      process_exposure_parameter_update((int)(param_1),(int *)(param_2[1]));
      iVar2 = *(int *)*param_2;
      (((vtbl_entry*)(iVar2))[2].fn)(*param_2 + (int)((vtbl_entry*)(iVar2))[2].adj,0x1130001,param_2[3]);
    }
    pvVar1 = (void *)get_or_init_singleton_object_1051d40e();
    update_camera_state_flags(pvVar1,0x13,0);
  }
  return;
}
