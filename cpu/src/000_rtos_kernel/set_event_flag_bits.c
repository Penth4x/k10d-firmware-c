/* @k10d set_event_flag_bits @ 0x10010984
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Sets specific flag bits on a kernel event object and wakes waiting tasks.
 * summary:
 *   Validates the object ID against a limit in DAT_10011d46 and checks for a deleted state
 *   (-2). If valid and non-zero flags are provided, it ORs the flags into the object's
 *   state, iterates through a linked list of waiting tasks (stride 0x44), and calls
 *   check_bitmask_overlap to check for matches. It then calls
 *   remove_task_from_timeout_queue_1001166c to activate the task and updates the wait queue
 *   links. Finally, it calls ready_list_insert if a specific condition (bit 3 of a status
 *   byte) is not set, likely to reschedule or notify the scheduler.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"
#include "uitron.h"

uint32_t set_event_flag_bits(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint32_t uVar5;
  int iVar6;
  short *psVar7;
  
  if ((param_1 < 1) || (DAT_10011d46/*ROM*/ < param_1)) {
    uVar5 = E_ID;
  }
  else {
    iVar2 = (short)param_1 * 0xc;
    iVar4 = DAT_10011d10/*ROM*/ + iVar2;
    if (*(short *)(iVar4 + -0xc) == -2) {
      uVar5 = E_NOEXS;
    }
    else if (param_2 == 0) {
      uVar5 = 0;
    }
    else {
      *(uint *)(iVar4 + -4) = *(uint *)(iVar4 + -4) | param_2;
      iVar4 = (int)*(short *)(DAT_10011d10/*ROM*/ + iVar2 + -0xc);
      do {
        do {
          iVar3 = iVar4;
          if (iVar3 == -1) goto LAB_10010b02;
          iVar1 = iVar3 * 0x44;
          psVar7 = (short *)(iVar1 + 0x6a001be8);
          iVar4 = (int)*psVar7;
          iVar6 = check_bitmask_overlap(*(uint *)(DAT_10011d10/*ROM*/ + iVar2 + -4),*(uint *)(iVar1 + 0x6a001c0c),
                               (uint)*(byte *)(iVar1 + 0x6a001c0b));
        } while (iVar6 == 0);
        remove_task_from_timeout_queue_1001166c((short)iVar3);
        if (iVar4 == -1) {
          *(uint16_t *)(DAT_10011d10/*ROM*/ + iVar2 + -10) = *(uint16_t *)(iVar1 + 0x6a001bea);
        }
        else {
          *(uint16_t *)(iVar4 * 0x44 + 0x6a001bea) = *(uint16_t *)(iVar1 + 0x6a001bea);
        }
        if (*(short *)(iVar1 + 0x6a001bea) == -1) {
          *(short *)(DAT_10011d10/*ROM*/ + iVar2 + -0xc) = *psVar7;
        }
        else {
          *(short *)(*(short *)(iVar1 + 0x6a001bea) * 0x44 + 0x6a001be8) = *psVar7;
        }
        if ((*(byte *)(iVar1 + 0x6a001c06) & 8) == 0) {
          *(uint8_t *)(iVar1 + 0x6a001c06) = 2;
          ready_list_insert((short)iVar3);
        }
        else {
          *(uint8_t *)(iVar1 + 0x6a001c06) = 8;
        }
        **(uint32_t **)(iVar1 + 0x6a001c10) = *(uint32_t *)(DAT_10011d10/*ROM*/ + iVar2 + -4);
      } while ((*(ushort *)(DAT_10011d10/*ROM*/ + iVar2 + -8) & 4) == 0);
      *(uint32_t *)((short)param_1 * 0xc + DAT_10011d10/*ROM*/ + -4) = 0;
LAB_10010b02:
      uVar5 = 0;
    }
  }
  return uVar5;
}
