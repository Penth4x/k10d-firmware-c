/* @k10d iterate_list_until_error @ 0x104749c0
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Iterates through a linked list starting from a node, calling a handler on each until
 *   one fails or the list ends.
 * summary:
 *   The function first calls invoke_virtual_slot_two_and_store_result with fields from the
 *   object at param_1. If successful, it retrieves the head of a list via
 *   call_vtable_slot_at_offset_c and iterates through nodes using
 *   call_with_offset_c_field_1047668a. For each node, it calls
 *   process_event_with_retry_10474a2e with the object and param_3. The loop terminates if
 *   process_event_with_retry_10474a2e returns non-zero (error) or if the next node equals
 *   the head (end of list). Returns 1 on success, 0 on failure.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t iterate_list_until_error(int param_1,uint32_t param_2,uint32_t param_3)

{
  int iVar1;
  int iVar2;
  uint32_t uVar3;
  int iVar4;
  bool bVar5;
  
  iVar1 = invoke_virtual_slot_two_and_store_result(*(uint32_t *)(param_1 + 8),param_2,*(uint32_t *)(param_1 + 0x10));
  uVar3 = 0;
  if (iVar1 != 0) {
    iVar2 = call_vtable_slot_at_offset_c(*(int *)(param_1 + 8));
    iVar4 = 0;
    iVar1 = iVar2;
    if (iVar2 != 0) {
      do {
        iVar4 = process_event_with_retry_10474a2e(param_1,iVar1,param_3);
        iVar1 = call_with_offset_c_field_1047668a(*(int *)(param_1 + 8));
        bVar5 = iVar4 == 0;
        if (iVar1 == iVar2) goto LAB_10474a1a;
      } while (bVar5);
    }
    bVar5 = iVar4 == 0;
LAB_10474a1a:
    uVar3 = 1;
    if (!bVar5) {
      uVar3 = 0;
    }
  }
  return uVar3;
}
