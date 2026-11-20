/* @k10d poll_and_process_queue_items @ 0x104b36ce
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 214_settings_manager (unit names are model-proposed)
 * purpose:
 *   Loops polling a queue at param_1+0x44, processing each item until the queue is empty.
 * summary:
 *   The function enters a loop that calls eventflag_wai_flg with the pointer at
 *   param_1+0x44, a -1 timeout, an output index (iStack_c), and a global DAT_105a2af0. If
 *   an item is found (iStack_c != 0) and eventflag_clr_flg returns 0, the loop breaks. If
 *   the poll returns true, dispatch_flagged_subtasks is called with param_1 and the item
 *   index. After the loop exits, return_one is called with param_1 as a finalization step.
 *   The pattern suggests a message queue or event list consumer.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void poll_and_process_queue_items(cls_105b7f68 *param_1)

{
  bool bVar2;
  int iVar1;
  uintptr_t sp;
  int iStack_c;
  
  iVar1 = _DAT_105a2af0/*ROM*/;
  while( true ) {
    iStack_c = 0;
    bVar2 = eventflag_wai_flg((uint32_t *)(param_1->field_0x44),(uint32_t)(0xffffffff),(uint32_t *)(&iStack_c),(int)(iVar1));
    if ((iStack_c != 0) && (iVar1 = eventflag_clr_flg((uint32_t *)(param_1->field_0x44), (uint)(__frv_reg_unset(5))), iVar1 == 0)) break;
    iVar1 = _DAT_105a2af0/*ROM*/;
    if (bVar2) {
      iVar1 = dispatch_flagged_subtasks((uint32_t)(param_1),(uint)(iStack_c));
    }
  }
  return_one((uint32_t)(param_1));
  return;
}
