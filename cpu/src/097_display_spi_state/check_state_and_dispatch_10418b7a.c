/* @k10d check_state_and_dispatch_10418b7a @ 0x10418b7a
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 097_display_spi_state (unit names are model-proposed)
 * purpose:
 *   Checks a state flag at offset 0x14f4 and dispatches to one of three branches based on
 *   object fields.
 * summary:
 *   The function reads a byte at param_1+0x14f4. If zero, it calls
 *   set_setting_and_notify_object and performs memory operations via
 *   get_or_init_singleton_object_1051d40e/update_camera_state_flags. If non-zero, it checks
 *   four fields (0x92, 0x93, 0x88, 0x8c); if all zero, it calls either
 *   reset_state_and_copy_buffer or wait_for_event_and_update_setting based on param_2.
 *   Returns 1 on success paths, 0 otherwise.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_state_and_dispatch_10418b7a(int param_1,int param_2)

{
  void *pvVar1;
  void *pvVar2;
  uint uVar3;
  uint32_t uVar4;
  
  uVar4 = 1;
  if (*(char *)(param_1 + 0x14f4) == '\0') {
    set_setting_and_notify_object(*(uint32_t *)(param_1 + 0x5c),0);
    pvVar1 = (void *)get_or_init_singleton_object_1051d40e();
    pvVar2 = (void *)get_or_init_singleton_object_1051d40e();
    uVar3 = read_bounded_array_element_1051d696(pvVar2,0x18);
    update_camera_state_flags(pvVar1,0x18,uVar3 & 0xfffffff7);
  }
  else if ((((*(char *)(param_1 + 0x92) == '\0') && (*(char *)(param_1 + 0x93) == '\0')) &&
           (*(int *)(param_1 + 0x88) == 0)) && (*(int *)(param_1 + 0x8c) == 0)) {
    if (param_2 == 0) {
      reset_state_and_copy_buffer(__frv_reg_unset(4));
      uVar4 = 1;
    }
    else {
      wait_for_event_and_update_setting(__frv_reg_unset(4));
      uVar4 = 1;
    }
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}
