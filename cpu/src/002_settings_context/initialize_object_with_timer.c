/* @k10d initialize_object_with_timer @ 0x10363770
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 002_settings_context (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Type propagation algorithm not settling */

int * initialize_object_with_timer(int *param_1)

{
  int iVar1;
  uint32_t uVar2;
  int *piVar3;
  uintptr_t sp;
  int aiStack_10 [2];
  
  param_1[0x1c] = 0;
  *(uint8_t *)(param_1 + 5) = 0;
  *(uint8_t *)((int)param_1 + 0x15) = 0;
  param_1[0x81] = 0;
  param_1[0x83] = 0;
  aiStack_10[0] = 5;
  iVar1 = query_state_and_flag_range(param_1,aiStack_10);
  if (iVar1 == 0) {
    if (aiStack_10[0] == 1) {
      init_object_field_and_call_helpers_103650b8((void *)__frv_reg_unset(4));
      return param_1;
    }
    aiStack_10[1] = 0;
    iVar1 = dispatch_event_and_return_offset(param_1,aiStack_10 + 1,0xffffffff);
    if (iVar1 == 1) {
      iVar1 = allocate_dual_buffers_for_object(param_1 + 0x89,0,10000);
      if (iVar1 != 0) {
        check_and_zero_two_buffers(param_1 + 0x89);
        dispatch_event_with_buffer_lock(param_1,0,param_1 + 7);
        *(uint16_t *)(param_1 + 0x87) = 0;
        *(uint16_t *)((int)param_1 + 0x21e) = 0;
        uVar2 = get_setting_0x71_with_refresh((int *)0x800158d4/*SDRAM*/);
        *(char *)(param_1 + 0x1b) = (char)uVar2;
        iVar1 = check_field_mismatch_or_empty(param_1);
        if (iVar1 == 0) {
          iterate_and_dispatch_buffer_entries(param_1);
        }
        else {
          iVar1 = query_object_state_at_offset_28((void *)__frv_reg_unset(4));
          if (iVar1 == 0) {
            uVar2 = get_or_create_singleton_object_1036c796();
            iVar1 = read_array_element_bounded(uVar2,1);
            param_1[6] = iVar1;
            (**(code **)(*param_1 + 0x54))((int)*(short *)(*param_1 + 0x50) + (int)param_1);
            return (int *)param_1[6];
          }
        }
        if (param_1[0x81] == 0) {
          if (*(char *)((int)param_1 + 0x15) == '\0') {
            return param_1;
          }
          uVar2 = get_or_create_singleton_object_1036c796();
          iVar1 = read_array_element_bounded(uVar2,3);
          param_1[6] = iVar1;
          (**(code **)(*param_1 + 0x54))((int)*(short *)(*param_1 + 0x50) + (int)param_1);
          return (int *)param_1[6];
        }
        *(uint8_t *)(param_1 + 5) = 0;
        *(uint8_t *)((int)param_1 + 0x15) = 0;
        return param_1;
      }
    }
  }
  uVar2 = get_or_create_singleton_object_1036c796();
  piVar3 = (int *)read_array_element_bounded(uVar2,1);
  return piVar3;
}
