/* @k10d schedule_task_event_10011714 @ 0x10011714
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Writes event parameters to a task control block and triggers a scheduler dispatch.
 * summary:
 *   The function stores four parameters (param_1 through param_4) into a memory block at
 *   offset 0x44 * index + 0x6a001c06, setting specific status bytes to 4 and 3. It then
 *   calls ready_list_unlink with the index, likely to wake or activate the task. Finally,
 *   it checks a flag in a linked list structure at DAT_10011d10 and calls either
 *   remove_node_from_timeout_queue_10011a20 or insert_into_priority_queue, suggesting a
 *   conditional dispatch or queue insertion.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void schedule_task_event_10011714(short param_1,uint32_t param_2,uint8_t param_3,void *param_4)

{
  short sVar1;
  int iVar2;
  short *psVar3;
  
  sVar1 = _DAT_6a003758;
  iVar2 = (int)_DAT_6a003758;
  *(uint8_t *)(_DAT_6a003758 * 0x44 + 0x6a001c06) = 4;
  *(uint8_t *)(iVar2 * 0x44 + 0x6a001c07) = 3;
  *(short *)(sVar1 * 0x44 + 0x6a001c08) = param_1;
  *(uint32_t *)(sVar1 * 0x44 + 0x6a001c0c) = param_2;
  *(uint8_t *)(sVar1 * 0x44 + 0x6a001c0b) = param_3;
  *(void **)(sVar1 * 0x44 + 0x6a001c10) = param_4;
  ready_list_unlink(sVar1);
  iVar2 = DAT_10011d10/*ROM*/ + param_1 * 0xc;
  psVar3 = (short *)(iVar2 + -0xc);
  if ((*(ushort *)(iVar2 + -8) & 1) == 0) {
    remove_node_from_timeout_queue_10011a20(psVar3);
  }
  else {
    insert_into_priority_queue(_DAT_6a003758,psVar3);
  }
  return;
}
