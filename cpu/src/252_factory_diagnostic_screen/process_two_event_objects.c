/* @k10d process_two_event_objects @ 0x104e5488
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 252_factory_diagnostic_screen (unit names are model-proposed)
 * purpose:
 *   Processes two sequential event objects by constructing them, dispatching virtual calls,
 *   and updating counters.
 * summary:
 *   The function constructs two temporary objects (auStack_48 and auStack_28) and uses
 *   call_with_offset_lock_1048101c to process data from param_1. It performs virtual
 *   dispatches on objects retrieved via insert_node_into_array and stored in param_1+0x48.
 *   It increments counters in param_2 and param_3 and calls cleanup functions like
 *   invoke_virtual_slot_14_104e6148 and invoke_virtual_slot_14_104e612e. The specific
 *   camera subsystem is not identifiable from the provided callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Restarted to delay deadcode elimination for space: ram */

bool process_two_event_objects(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  void *pvVar3;
  uint uVar4;
  uint32_t uVar5;
  uintptr_t sp;
  bool bVar6;
  char acStack_88 [64];
  uint8_t auStack_48 [32];
  uint8_t auStack_28 [32];
  
  cls_105ab468_new(auStack_48);
  bVar6 = false;
  copy_null_terminated_string(acStack_88,pvRam80010bb8);
  copy_string_to_buffer(acStack_88,pvRam80010bc4);
  copy_string_to_buffer(acStack_88,pvRam80010bbc);
  iVar1 = call_with_offset_lock_1048101c(*(void **)(param_1 + 0x4c),acStack_88,auStack_48);
  if (iVar1 != 0) {
    uVar2 = allocate_queue_slot(param_1);
    pvVar3 = (void *)insert_node_into_array(param_1,100, __frv_reg_unset(6));
    *param_2 = *param_2 + 1;
    (**(code **)(*(int *)((int)pvVar3 + 0x18) + 0x44))
              ((int)*(short *)(*(int *)((int)pvVar3 + 0x18) + 0x40) + (int)pvVar3,pvRam80010bbc);
    copy_string_to_buffer(acStack_88,pvRam80010bc8);
    copy_string_to_buffer(acStack_88,pvRam80010bc0);
    invoke_virtual_slot_14_104e6148((void *)param_1,pvVar3);
    cls_105ab468_new(auStack_28);
    iVar1 = call_with_offset_lock_1048101c(*(void **)(param_1 + 0x4c),acStack_88,auStack_28);
    bVar6 = iVar1 != 0;
    if (bVar6) {
      uVar4 = allocate_queue_slot(param_1);
      iRam80010b74 = uVar4 + 100;
      uVar5 = allocate_and_link_entry(param_1,uVar2 + 100, __frv_reg_unset(6));
      *(uint32_t *)(param_1 + 0x48) = uVar5;
      *param_3 = *param_3 + 1;
      increment_field_at_offset_0x18(param_1);
      iVar1 = *(int *)(*(int *)(param_1 + 0x48) + 0x18);
      (**(code **)(iVar1 + 0x44))
                (*(int *)(param_1 + 0x48) + (int)*(short *)(iVar1 + 0x40),pvRam80010bc0);
      invoke_virtual_slot_14_104e612e((void *)param_1,*(int *)(param_1 + 0x48));
      (*(code *)0x104e62b2/*ROM*/)(pvVar3,*(uint32_t *)(param_1 + 0x48));
    }
    (*(code *)0x104e62b2/*ROM*/)(**(uint32_t **)(param_1 + 0x40),pvVar3);
    cls_105ab468_delete(auStack_28,2);
  }
  cls_105ab468_delete(auStack_48,2);
  return bVar6;
}
