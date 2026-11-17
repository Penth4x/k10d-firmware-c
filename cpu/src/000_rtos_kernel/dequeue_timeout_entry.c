/* @k10d dequeue_timeout_entry @ 0x1000deec
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Removes a timeout entry from the kernel's timeout queue and updates the linked list
 *   pointers.
 * summary:
 *   The function takes an index into a timeout queue array (DAT_10011d04) and retrieves the
 *   entry ID. It calls insert_into_timeout_queue_1000fc60 and
 *   remove_task_from_timeout_queue_1001166c, likely for internal bookkeeping or
 *   notification. It then manipulates a linked list of timeout objects (size 0x44) located
 *   in SDRAM (0x6a001c00), updating the 'next' pointer (offset 0x1be8) to bypass the
 *   removed entry. It also updates a status byte at offset 0x1c06, toggling between values
 *   2 and 8, and calls ready_list_insert if the status was not 8. This behavior is
 *   consistent with removing a node from a timeout queue in a µITRON/REALOS kernel.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"
#include "uitron.h"

void dequeue_timeout_entry(short param_1)

{
  int iVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = param_1 * 0xe;
  sVar3 = *(short *)(DAT_10011d04/*ROM*/ + iVar1 + -0xe);
  iVar5 = (int)sVar3;
  if (iVar5 != -1) {
    *(short *)(DAT_10011d04/*ROM*/ + iVar1 + -2) = sVar3;
    insert_into_timeout_queue_1000fc60(sVar3,param_1);
    iVar4 = DAT_10011d04/*ROM*/ + iVar1;
    if ((*(short *)(iVar4 + -6) == 3) &&
       (*(short *)(iVar4 + -4) < *(short *)(iVar5 * 0x44 + 0x6a001c00))) {
      *(uint16_t *)(iVar5 * 0x44 + 0x6a001c00) = *(uint16_t *)(iVar4 + -4);
    }
    remove_task_from_timeout_queue_1001166c(sVar3);
    iVar5 = iVar5 * 0x44;
    sVar2 = *(short *)(iVar5 + 0x6a001be8);
    if (sVar2 == -1) {
      iVar4 = DAT_10011d04/*ROM*/ + iVar1;
      iVar6 = -0xc;
    }
    else {
      iVar4 = sVar2 * 0x44 + 0x6a001be8;
      iVar6 = 2;
    }
    *(uint16_t *)(iVar6 + iVar4) = 0xffff;
    *(short *)(DAT_10011d04/*ROM*/ + iVar1 + -0xe) = sVar2;
    if ((*(byte *)(iVar5 + 0x6a001c06) & 8) == 0) {
      *(uint8_t *)(iVar5 + 0x6a001c06) = 2;
      ready_list_insert(sVar3);
    }
    else {
      *(uint8_t *)(iVar5 + 0x6a001c06) = 8;
    }
  }
  return;
}
