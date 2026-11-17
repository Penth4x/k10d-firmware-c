/* @k10d dispatch_three_event_types @ 0x104f8d78
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 261_ae_ev_offset_control (unit names are model-proposed)
 * purpose:
 *   Dispatches one of three event types (0x10f0001-3) to a specific handler and a virtual
 *   object method.
 * summary:
 *   Checks the event type in param_2[2] and branches to one of three handlers
 *   (copy_struct_and_dispatch, copy_struct_and_dispatch_event, build_and_send_param_block)
 *   based on the value. In each branch, it calls get_or_init_singleton_object_1051d40e and
 *   update_camera_state_flags with a specific index (1, 2, or 3), then invokes a virtual
 *   method (slot 2) on the object pointed to by *param_2, passing the event type and
 *   param_2[3]. Finally, it calls update_camera_state_flags with index 0 to signal
 *   completion or reset state.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_three_event_types(uint32_t param_1,int *param_2)

{
  int iVar1;
  void *pvVar2;
  
  if (param_2 != (int *)0x0) {
    iVar1 = param_2[2];
    if (iVar1 == 0x10f0001) {
      pvVar2 = (void *)get_or_init_singleton_object_1051d40e();
      update_camera_state_flags(pvVar2,0x12,1);
      copy_struct_and_dispatch(param_1,(void *)param_2[1]);
      iVar1 = *(int *)*param_2;
      (**(code **)(iVar1 + 0x14))(*param_2 + (int)*(short *)(iVar1 + 0x10),0x10f0001,param_2[3]);
    }
    else if (iVar1 == 0x10f0002) {
      pvVar2 = (void *)get_or_init_singleton_object_1051d40e();
      update_camera_state_flags(pvVar2,0x12,2);
      copy_struct_and_dispatch_event(param_1,(void *)param_2[1]);
      iVar1 = *(int *)*param_2;
      (**(code **)(iVar1 + 0x14))(*param_2 + (int)*(short *)(iVar1 + 0x10),0x10f0002,param_2[3]);
    }
    else if (iVar1 == 0x10f0003) {
      pvVar2 = (void *)get_or_init_singleton_object_1051d40e();
      update_camera_state_flags(pvVar2,0x12,3);
      build_and_send_param_block(param_1,(void *)param_2[1]);
      iVar1 = *(int *)*param_2;
      (**(code **)(iVar1 + 0x14))(*param_2 + (int)*(short *)(iVar1 + 0x10),0x10f0003,param_2[3]);
    }
    pvVar2 = (void *)get_or_init_singleton_object_1051d40e();
    update_camera_state_flags(pvVar2,0x12,0);
  }
  return;
}
