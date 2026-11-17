/* @k10d process_task_timeout_queue @ 0x1000ddbc
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Walks a per-task timeout/ready list and invokes a handler for each entry, updating
 *   linked-list pointers and status flags.
 * summary:
 *   The function iterates over a doubly-linked list of entries associated with param_1
 *   (likely a task ID or queue index). For each entry, it calls
 *   allocate_heap_block_1000e82c to process the item; if successful, it calls
 *   remove_task_from_timeout_queue_1001166c and ready_list_insert, and updates the next-
 *   pointer in the list structure at 0x6a001be8. It manipulates a status byte at
 *   0x6a001c06, toggling between values 2 and 8. The source module is identified as
 *   rtos_kernel, and the structure resembles a timeout queue or ready list management
 *   routine.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"
#include "uitron.h"

void process_task_timeout_queue(int param_1)

{
  int iVar1;
  short sVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint32_t *puVar9;
  int iVar10;
  int *piStack_10;
  
  iVar4 = param_1 * 0x20;
  iVar8 = DAT_10011cf8/*ROM*/ + iVar4;
  if (*(int **)(iVar8 + -0x1c) != (int *)(iVar8 + -0x1c)) {
    sVar2 = *(short *)(iVar8 + -0x20);
    piVar3 = *(int **)(iVar8 + -0x1c);
    while (sVar2 != -1) {
      piStack_10 = (int *)*piVar3;
      iVar8 = (int)sVar2;
      do {
        if (iVar8 == -1) goto LAB_1000deb8;
        iVar1 = iVar8 * 0x44;
        puVar9 = *(uint32_t **)(iVar1 + 0x6a001c10);
        sVar2 = *(short *)(iVar1 + 0x6a001be8);
        iVar5 = (int)sVar2;
        iVar7 = allocate_heap_block_1000e82c(puVar9,piVar3,*(uint *)(iVar1 + 0x6a001c0c),param_1);
        if (iVar7 != 1) goto LAB_1000deb8;
        remove_task_from_timeout_queue_1001166c((short)iVar8);
        if (iVar5 == -1) {
          iVar10 = -0x1e;
          iVar6 = iVar4;
          iVar7 = DAT_10011cf8/*ROM*/;
        }
        else {
          iVar10 = 2;
          iVar7 = iVar5 * 0x44;
          iVar6 = 0x6a001be8;
        }
        *(uint16_t *)(iVar10 + iVar7 + iVar6) = 0xffff;
        *(short *)(DAT_10011cf8/*ROM*/ + iVar4 + -0x20) = sVar2;
        if ((*(byte *)(iVar1 + 0x6a001c06) & 8) == 0) {
          *(uint8_t *)(iVar1 + 0x6a001c06) = 2;
          ready_list_insert((short)iVar8);
        }
        else {
          *(uint8_t *)(iVar1 + 0x6a001c06) = 8;
        }
        iVar8 = iVar5;
      } while ((int *)*puVar9 != piVar3);
      piStack_10 = *(int **)(DAT_10011cf8/*ROM*/ + iVar4 + -0x1c);
LAB_1000deb8:
      if (piStack_10 == (int *)(DAT_10011cf8/*ROM*/ + iVar4 + -0x1c)) {
        return;
      }
      piVar3 = piStack_10;
      sVar2 = *(short *)(DAT_10011cf8/*ROM*/ + iVar4 + -0x20);
    }
  }
  return;
}
