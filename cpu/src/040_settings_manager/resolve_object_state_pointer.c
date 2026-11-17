/* @k10d resolve_object_state_pointer @ 0x10393e46
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Checks an object's state field and returns a pointer based on state value and helper
 *   results.
 * summary:
 *   The function first calls dispatch_state_transition_10394958 with param_1, param_2, and
 *   0. If the result differs from param_1, it returns that result. If *param_2 is not 6, it
 *   returns param_1. It then calls map_status_code_to_output to retrieve a state code into
 *   a local variable. Depending on whether this call succeeds (returns 0) or fails, and the
 *   specific state code (9 or 10), it either calls forward_param_to_helper_10394ad8 or
 *   proceeds to compare the value at offset 0x74 of param_1 against the return values of
 *   get_or_init_sram_object_103973c4 and get_or_create_singleton_object_10396af8. If a
 *   match is found, it returns the pointer stored at offset 0x74. Otherwise, it returns the
 *   result of calling dispatch_on_mode_value with the value from
 *   get_or_init_sram_object_103973c4.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void * resolve_object_state_pointer(void *param_1,int *param_2)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  uintptr_t sp;
  int iStack_c;
  
  pvVar1 = (void *)dispatch_state_transition_10394958(param_1,param_2,0);
  if (pvVar1 != param_1) {
    return pvVar1;
  }
  if (*param_2 != 6) {
    return param_1;
  }
  iStack_c = -1;
  iVar2 = map_status_code_to_output(param_1,&iStack_c);
  if (iVar2 == 0) {
    iVar2 = check_and_process_event_103947cc(param_1);
    if (iVar2 != 0) {
      pvVar1 = (void *)get_or_create_singleton_object_103957d8(0);
      return pvVar1;
    }
    iVar3 = *(int *)((int)param_1 + 0x74);
    iVar2 = get_or_init_sram_object_103973c4();
    if ((iVar3 == iVar2) ||
       (iVar3 = *(int *)((int)param_1 + 0x74), iVar2 = get_or_create_singleton_object_10396af8(), iVar3 == iVar2)) {
      return *(void **)((int)param_1 + 0x74);
    }
  }
  else {
    if ((iStack_c == 10) || (iStack_c == 9)) {
      forward_param_to_helper_10394ad8(param_1,*(uint32_t *)((int)param_1 + 0x80));
      return param_1;
    }
    iVar2 = check_and_process_event_103947cc(param_1);
    if (iVar2 != 0) {
      return param_1;
    }
    iVar3 = *(int *)((int)param_1 + 0x74);
    iVar2 = get_or_init_sram_object_103973c4();
    if ((iVar3 == iVar2) ||
       (iVar3 = *(int *)((int)param_1 + 0x74), iVar2 = get_or_create_singleton_object_10396af8(), iVar3 == iVar2)) {
      return *(void **)((int)param_1 + 0x74);
    }
  }
  iVar2 = get_or_init_sram_object_103973c4();
  pvVar1 = (void *)dispatch_on_mode_value(iVar2);
  return pvVar1;
}
