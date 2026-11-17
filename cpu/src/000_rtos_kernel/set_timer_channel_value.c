/* @k10d set_timer_channel_value @ 0x1000dfc8
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Validates and updates the value of a timer channel, handling priority conflicts and
 *   triggering associated callbacks.
 * summary:
 *   The function takes a channel index (param_1) and a new value (param_2). It validates
 *   the index against a limit (DAT_10011d4a) and checks the channel's state (byte at offset
 *   0x1c06). If the channel is active and the new value conflicts with a higher-priority
 *   timer (checked via a linked list at offset 0x1bf0), it returns an error. Otherwise, it
 *   updates the channel's value fields (offsets 0x1c00, 0x1c04) and calls helper functions
 *   (ready_list_unlink, ready_list_insert, test_task_state_bit) to apply the change or
 *   trigger events. The source module is identified as rtos_kernel, suggesting this is a
 *   kernel-level timer management routine.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"
#include "uitron.h"

/* WARNING: Instruction at (ram,0x1000e104) overlaps instruction at (ram,0x1000e102)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t set_timer_channel_value(int param_1,int param_2)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint32_t uVar5;
  uint16_t uVar6;
  short sVar7;
  
  if (param_1 == 0) {
    iVar4 = check_kernel_flag_bit5();
    if (iVar4 != 0) {
      return E_ID;
    }
    param_1 = (int)_DAT_6a003758;
  }
  else if ((param_1 < 0) || (DAT_10011d4a/*ROM*/ < param_1)) {
    return E_ID;
  }
  sVar7 = (short)param_1;
  iVar4 = sVar7 * 0x44;
  if (*(short *)(iVar4 + 0x6a001be8) == -2) {
    uVar5 = E_NOEXS;
  }
  else {
    if (param_2 == 0) {
      param_2 = (int)*(short *)(iVar4 + 0x6a001c02);
    }
    else if ((param_2 < 1) || (DAT_10011d4c/*ROM*/ < param_2)) {
      return E_PAR;
    }
    bVar1 = *(byte *)(iVar4 + 0x6a001c06);
    if (((((bVar1 & 4) == 0) || (*(char *)(iVar4 + 0x6a001c07) != '\a')) ||
        (iVar3 = DAT_10011d04/*ROM*/ + *(short *)(iVar4 + 0x6a001c08) * 0xe, *(short *)(iVar3 + -6) != 3))
       || (*(short *)(iVar3 + -4) <= param_2)) {
      iVar3 = (int)*(short *)(iVar4 + 0x6a001bf0);
      bVar2 = false;
      if (iVar3 != -1) {
        bVar2 = true;
        do {
          iVar3 = DAT_10011d04/*ROM*/ + iVar3 * 0xe;
          if ((*(short *)(iVar3 + -6) == 3) && (param_2 < *(short *)(iVar3 + -4))) {
            return E_ILUSE;
          }
          iVar3 = (int)*(short *)(iVar3 + -10);
        } while (iVar3 != -1);
      }
      if (bVar1 == 0x10) {
        uVar5 = E_OBJ;
      }
      else {
        uVar6 = (uint16_t)param_2;
        if (bVar1 == 2) {
          *(uint16_t *)(iVar4 + 0x6a001c04) = uVar6;
          if ((!bVar2) || (param_2 < *(short *)(iVar4 + 0x6a001c00))) {
            ready_list_unlink(sVar7);
            *(uint16_t *)(iVar4 + 0x6a001c00) = uVar6;
            ready_list_insert(sVar7);
          }
        }
        else if (bVar1 == 8) {
          *(uint16_t *)(iVar4 + 0x6a001c04) = uVar6;
          if (bVar2) {
            if (param_2 < *(short *)(iVar4 + 0x6a001c00)) {
              *(uint16_t *)(iVar4 + 0x6a001c00) = uVar6;
            }
          }
          else {
            *(uint16_t *)(iVar4 + 0x6a001c00) = uVar6;
          }
        }
        else if ((bVar1 == 4) || (bVar1 == 0xc)) {
          *(uint16_t *)(iVar4 + 0x6a001c04) = uVar6;
          if (bVar2) {
            if (param_2 < *(short *)(iVar4 + 0x6a001c00)) {
              *(uint16_t *)(iVar4 + 0x6a001c00) = uVar6;
            }
          }
          else {
            *(uint16_t *)(iVar4 + 0x6a001c00) = uVar6;
          }
          iVar3 = test_task_state_bit((int)*(short *)(iVar4 + 0x6a001c08),
                               *(uint8_t *)(iVar4 + 0x6a001c07));
          if (iVar3 == 1) {
            remove_node_from_queue((int)*(short *)(iVar4 + 0x6a001c08),param_1,1);
          }
          if (*(char *)(iVar4 + 0x6a001c07) == '\a') {
            (*(code *)PTR_FUN_10011c78)(param_1,param_2);
          }
        }
        uVar5 = 0;
      }
    }
    else {
      uVar5 = E_ILUSE;
    }
  }
  return uVar5;
}
