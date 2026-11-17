/* @k10d dispatch_event_by_type_104f4e0c @ 0x104f4e0c
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 259_settings_buffer_manager (unit names are model-proposed)
 * purpose:
 *   Dispatches an event to a type-specific handler based on a switch statement, then
 *   invokes a virtual callback.
 * summary:
 *   The function checks if the event type (param_2[2]) is 0x1100001. If so, it acquires a
 *   lock (update_camera_state_flags with 1), switches on the event subtype (param_2[1][0])
 *   to call one of 12 different handler functions, and then calls a virtual method (slot 2)
 *   on the object pointed to by param_2[0]. Finally, it releases the lock
 *   (update_camera_state_flags with 0).
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x104f4e1e) overlaps instruction at (ram,0x104f4e1c)
    */

void dispatch_event_by_type_104f4e0c(int param_1,int *param_2)

{
  uint32_t *puVar1;
  void *pvVar2;
  int *piVar3;
  
  if (param_2 == (int *)0x0) {
    return;
  }
  if (param_2[2] != 0x1100001) goto code_r0x104f4f7e;
  pvVar2 = (void *)get_or_init_singleton_object_1051d40e();
  update_camera_state_flags(pvVar2,0x16,1);
  puVar1 = (uint32_t *)param_2[1];
  switch(*puVar1) {
  case 0:
    if (puVar1[1] == 0) {
      call_helper_with_128_128(param_1,(int *)puVar1[2]);
      piVar3 = (int *)*param_2;
    }
    else {
      allocate_and_dispatch_three_blocks(__frv_reg_unset(4), __frv_reg_unset(5), __frv_reg_unset(6));
      piVar3 = (int *)*param_2;
    }
    break;
  case 1:
    select_pair_by_two_flags(param_1,(int *)puVar1[2],puVar1[1]);
    piVar3 = (int *)*param_2;
    break;
  case 2:
    compute_scaled_pair_and_call(param_1,puVar1[2],puVar1[1]);
    piVar3 = (int *)*param_2;
    break;
  case 3:
    allocate_and_configure_three_buffers_104f7774(param_1,puVar1[2],puVar1[1]);
    piVar3 = (int *)*param_2;
    break;
  case 4:
    configure_image_pipeline_buffers(param_1,(int *)puVar1[2],puVar1[1]);
    piVar3 = (int *)*param_2;
    break;
  case 5:
    allocate_and_configure_buffer_104f6c38(param_1,(int *)puVar1[2]);
    piVar3 = (int *)*param_2;
    break;
  case 6:
    allocate_and_dispatch_three_blocks(param_1,puVar1[2],puVar1[1]);
    piVar3 = (int *)*param_2;
    break;
  case 7:
    mark_invalid_pixel_pairs(param_1,(int *)puVar1[2]);
    piVar3 = (int *)*param_2;
    break;
  case 8:
    process_sensor_buffer_blocks(param_1,puVar1[2],puVar1[1]);
    goto code_r0x104f4f60;
  case 9:
    allocate_and_configure_buffer_regions(param_1,puVar1[2],puVar1[1]);
    piVar3 = (int *)*param_2;
    break;
  case 10:
    median_smooth_image_rows(param_1,puVar1[2],puVar1[1]);
    piVar3 = (int *)*param_2;
    break;
  case 0xb:
    allocate_and_init_buffer_struct_104f711e(param_1,puVar1[2],puVar1[1]);
    piVar3 = (int *)*param_2;
    break;
  default:
code_r0x104f4f60:
    piVar3 = (int *)*param_2;
  }
  (**(code **)(*piVar3 + 0x14))((int)piVar3 + (int)*(short *)(*piVar3 + 0x10),0x1100001,param_2[3]);
code_r0x104f4f7e:
  pvVar2 = (void *)get_or_init_singleton_object_1051d40e();
  update_camera_state_flags(pvVar2,0x16,0);
  return;
}
