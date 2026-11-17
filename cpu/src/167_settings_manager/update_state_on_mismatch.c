/* @k10d update_state_on_mismatch @ 0x10476e0c
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Compares a stored 16-bit field against a computed value and triggers a state transition
 *   sequence if they differ.
 * summary:
 *   The function reads a 16-bit value from offset 0x2c of the object in param_1 and
 *   compares it to the result of a helper call on param_2. If they do not match, it calls
 *   iterate_and_invoke_slot_two, updates the field, initializes a local object, and enters
 *   a loop calling allocate_and_link_event_object and call_helper_with_lock_guard until a
 *   success condition is met. It then finalizes with call_three_helpers_on_param and
 *   iterate_and_process_range_items. The specific camera subsystem is not identifiable from
 *   the provided callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t update_state_on_mismatch(int param_1,uint32_t param_2)

{
  ushort uVar1;
  uint uVar2;
  uint16_t uVar5;
  void *pvVar3;
  int iVar4;
  uintptr_t sp;
  uint32_t *puVar6;
  uint8_t auStack_5c [4];
  uint32_t uStack_40;
  uint32_t uStack_3c;
  uint8_t uStack_38;
  uint8_t auStack_28 [32];
  
  puVar6 = (uint32_t *)auStack_5c;
  uVar1 = *(ushort *)(param_1 + 0x2c);
  uVar2 = (*(code *)0x10477a34/*ROM*/)(param_2);
  if (uVar1 != uVar2) {
    iterate_and_invoke_slot_two(param_1);
    uVar5 = (*(code *)0x10477a34/*ROM*/)(param_2);
    *(uint16_t *)(param_1 + 0x2c) = uVar5;
    uStack_40 = 0;
    uStack_3c = 0;
    cls_105ab468_new(auStack_28);
    uStack_38 = 0;
    pvVar3 = (void *)(*(code *)0x104779aa/*ROM*/)(param_2);
    iVar4 = *(int *)(param_1 + 4);
    *puVar6 = (uint32_t)&uStack_40;
    iVar4 = call_inner_with_lock_pair(iVar4,pvVar3,(void *)uRam8000ff2c,0,*puVar6);
    if (iVar4 != 0) {
      do {
        allocate_and_link_event_object(param_1,auStack_28);
        iVar4 = call_helper_with_lock_guard(*(int *)(param_1 + 4),&uStack_40);
      } while (iVar4 != 0);
    }
    call_three_helpers_on_param(*(int *)(param_1 + 4),&uStack_40);
    iterate_and_process_range_items(param_1);
    cls_105ab468_delete(auStack_28,2);
  }
  return 1;
}
