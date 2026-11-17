/* @k10d remove_node_from_queue @ 0x1000dcf4
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Unlinks a node from a doubly-linked list and updates the head pointer if necessary.
 * summary:
 *   The function retrieves a node pointer via compute_tcb_array_offset and manipulates the
 *   'next' and 'prev' pointers (offsets 0x0 and 0x2) to remove it from the list. It updates
 *   the list head (DAT_10011c80) if the removed node was the first element. It calls
 *   ready_list_insert or insert_into_priority_queue depending on a status flag, likely to
 *   handle task termination or state changes after removal.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void remove_node_from_queue(int param_1,uint32_t param_2,int param_3)

{
  int iVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short *psVar5;
  
  iVar1 = ((uint16_t)((uint64_t)(param_2) >> 16)) * 0x44;
  psVar5 = (short *)compute_tcb_array_offset(param_1,(uint)*(byte *)(iVar1 + 0x6a001c07));
  if (psVar5 != (short *)0x0) {
    sVar2 = *psVar5;
    sVar3 = *(short *)(iVar1 + 0x6a001bea);
    sVar4 = *(short *)(iVar1 + 0x6a001be8);
    if (sVar4 == -1) {
      psVar5[1] = sVar3;
    }
    else {
      *(short *)(sVar4 * 0x44 + 0x6a001bea) = sVar3;
    }
    if (sVar3 == -1) {
      *psVar5 = sVar4;
    }
    else {
      *(short *)(sVar3 * 0x44 + 0x6a001be8) = sVar4;
    }
    if (*(char *)(iVar1 + 0x6a001c06) == '\x02') {
      ready_list_insert(((uint16_t)((uint64_t)(param_2) >> 16)));
      sVar4 = *psVar5;
    }
    else {
      if (param_3 == 1) {
        insert_into_priority_queue(((uint16_t)((uint64_t)(param_2) >> 16)),psVar5);
      }
      sVar4 = *psVar5;
    }
    if ((sVar4 != sVar2) && (sVar4 != -1)) {
      if (*(char *)(iVar1 + 0x6a001c07) == '\x0e') {
        (*(code *)PTR_FUN_10011c84)(param_1);
      }
      else if (*(char *)(iVar1 + 0x6a001c07) == '\b') {
        (*DAT_10011c80/*ROM*/)(param_1);
      }
    }
  }
  return;
}
