/* @k10d check_and_init_mode_state @ 0x10417c36
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 097_display_spi_state (unit names are model-proposed)
 * purpose:
 *   Validates object state flags and initializes a 24-byte structure if conditions are met.
 * summary:
 *   Checks specific byte and integer fields at offsets 0x92, 0x93, 0x1500, 0x14f4, 0x88,
 *   and 0x8c of the input object. If the initial conditions are met and
 *   check_flag_and_call_helper_10418b5a returns non-zero, it calls
 *   reset_state_and_copy_buffer if offset 0x14f4 is non-zero and offsets 0x88/0x8c are
 *   zero. It then calls set_setting_and_notify_object with the pointer at offset 0x5c and
 *   0, allocates/copies 0x18 bytes using get_or_init_singleton_object_1051d40e and
 *   read_bounded_array_element_1051d696, and returns 1. Returns 0 otherwise.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_and_init_mode_state(int param_1)

{
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  uint uVar4;
  
  if ((((*(char *)(param_1 + 0x92) == '\0') && (*(char *)(param_1 + 0x93) == '\0')) &&
      (*(int *)(param_1 + 0x1500) == 0)) && (iVar1 = check_flag_and_call_helper_10418b5a(param_1), iVar1 != 0)) {
    if (((*(char *)(param_1 + 0x14f4) != '\0') && (*(int *)(param_1 + 0x88) == 0)) &&
       (*(int *)(param_1 + 0x8c) == 0)) {
      reset_state_and_copy_buffer(param_1);
    }
    if ((*(int *)(param_1 + 0x88) == 0) && (*(int *)(param_1 + 0x8c) == 0)) {
      set_setting_and_notify_object(*(uint32_t *)(param_1 + 0x5c),0);
      pvVar2 = (void *)get_or_init_singleton_object_1051d40e();
      pvVar3 = (void *)get_or_init_singleton_object_1051d40e();
      uVar4 = read_bounded_array_element_1051d696(pvVar3,0x18);
      update_camera_state_flags(pvVar2,0x18,uVar4 & 0xfffffff7);
      return 1;
    }
  }
  return 0;
}
