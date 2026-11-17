/* @k10d remove_node_from_timeout_queue_10011a20 @ 0x10011a20
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Unlinks a node from a doubly-linked timeout queue by updating the previous node's next
 *   pointer and the current node's previous pointer.
 * summary:
 *   The function manipulates a linked list structure where nodes are 0x44 bytes apart in
 *   memory starting at 0x6a001be8. It uses the global pointer _DAT_6a003758 as the head or
 *   current node reference. The logic updates the 'next' pointer of the previous node
 *   (param_1[1]) to point to the current node, and the 'previous' pointer of the current
 *   node to point to the previous node, effectively removing the node referenced by param_1
 *   from the chain. This is consistent with timeout queue management in a µITRON/REALOS
 *   kernel scheduler.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void remove_node_from_timeout_queue_10011a20(short *param_1)

{
  int iVar1;
  short sVar2;
  short sVar3;
  
  sVar3 = _DAT_6a003758;
  sVar2 = param_1[1];
  if (sVar2 == -1) {
    *param_1 = _DAT_6a003758;
    sVar3 = _DAT_6a003758;
  }
  else {
    *(short *)(sVar2 * 0x44 + 0x6a001be8) = _DAT_6a003758;
  }
  param_1[1] = sVar3;
  iVar1 = (int)_DAT_6a003758;
  *(uint16_t *)(_DAT_6a003758 * 0x44 + 0x6a001be8) = 0xffff;
  *(short *)(iVar1 * 0x44 + 0x6a001bea) = sVar2;
  return;
}
