/* @k10d insert_into_timeout_queue_1000fc34 @ 0x1000fc34
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Inserts a node into a priority-based timeout queue at the position determined by its
 *   priority value.
 * summary:
 *   Calculates the queue index by finding the highest set bit in param_2 (priority). Uses
 *   the index to access a linked list head at 0x6a000000 + index*8. Performs a standard
 *   intrusive linked-list insertion by updating the head pointer, the new node's next/prev
 *   pointers, and the previous node's next pointer. Fits the rtos_kernel module's timeout-
 *   queue management role.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void insert_into_timeout_queue_1000fc34(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = 0;
  iVar1 = 0;
  do {
    if (param_2 < (uint)(0x20 << ((byte)iVar1 & 0xf))) break;
    iVar1 = iVar1 + 3;
    iVar2 = iVar2 + 1;
  } while (iVar1 < 0xf);
  piVar3 = (int *)(iVar2 * 8 + 0x6a000000);
  iVar1 = *piVar3;
  *param_1 = iVar1;
  *piVar3 = (int)param_1;
  *(int **)(iVar1 + 4) = param_1;
  param_1[1] = (int)piVar3;
  return;
}
