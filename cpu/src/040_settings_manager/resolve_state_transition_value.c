/* @k10d resolve_state_transition_value @ 0x10392778
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Compares a state field at offset 0x38 against several status queries and writes the
 *   resolved value to offset 0x34.
 * summary:
 *   The function reads an integer from param_1+0x38 and compares it against the return
 *   values of get_or_init_sram_object_103973c4, get_or_create_singleton_object_103957d8(1),
 *   get_or_create_singleton_object_10391da4, and get_or_init_singleton_object_10396dd4.
 *   Depending on which comparison succeeds and the result of
 *   check_and_process_event_103947cc(param_1), it either copies the 0x38 value to 0x34 or
 *   stores the result of get_or_init_singleton_object_103938e2,
 *   get_or_create_singleton_object_103957d8(0), or dispatch_on_mode_value into 0x34. The
 *   specific subsystem is not identifiable from the available callee names.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void resolve_state_transition_value(void *param_1)

{
  int iVar1;
  uint32_t uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)param_1 + 0x38);
  iVar1 = get_or_init_sram_object_103973c4();
  if (iVar3 == iVar1) goto LAB_103927f8;
  iVar3 = *(int *)((int)param_1 + 0x38);
  iVar1 = get_or_create_singleton_object_103957d8(1);
  if (iVar3 == iVar1) {
    iVar1 = check_and_process_event_103947cc(param_1);
    if (iVar1 == 0) {
      uVar2 = get_or_init_singleton_object_103938e2();
      goto LAB_10392822;
    }
  }
  else {
    iVar3 = *(int *)((int)param_1 + 0x38);
    iVar1 = get_or_create_singleton_object_10391da4();
    if (iVar3 == iVar1) {
      iVar1 = check_and_process_event_103947cc(param_1);
      if (iVar1 == 0) {
        return;
      }
LAB_103927f8:
      *(uint32_t *)((int)param_1 + 0x34) = *(uint32_t *)((int)param_1 + 0x38);
      return;
    }
    iVar3 = *(int *)((int)param_1 + 0x38);
    iVar1 = get_or_init_singleton_object_10396dd4();
    if (iVar3 == iVar1) goto LAB_103927f8;
    iVar1 = check_and_process_event_103947cc(param_1);
    if (iVar1 == 0) {
      iVar1 = get_or_init_sram_object_103973c4();
      uVar2 = dispatch_on_mode_value(iVar1);
      goto LAB_10392822;
    }
  }
  uVar2 = get_or_create_singleton_object_103957d8(0);
LAB_10392822:
  *(uint32_t *)((int)param_1 + 0x34) = uVar2;
  return;
}
