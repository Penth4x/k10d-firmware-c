/* @k10d allocate_kernel_object_10010fe0 @ 0x10010fe0
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Allocates or releases a kernel object from a fixed-size pool based on the requested
 *   type and index.
 * summary:
 *   The function validates the object index against a global limit and checks the state of
 *   the object slot in a table at DAT_10011d04. It manages a global pointer _DAT_6a003758
 *   which appears to track the current active object or context. Depending on the state
 *   (free, in-use, or reserved), it calls helper functions to initialize, update, or
 *   finalize the object. The source module is identified as rtos_kernel, and the logic
 *   resembles a standard kernel object allocator or manager.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"
#include "uitron.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t allocate_kernel_object_10010fe0(int param_1,int param_2)

{
  short sVar1;
  uint32_t uVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  
  iVar4 = rtos_can_dispatch();
  if (iVar4 == 0) {
    if ((param_1 < 1) || (DAT_10011d40/*ROM*/ < param_1)) {
      uVar2 = E_ID;
    }
    else if (param_2 < -1) {
      uVar2 = E_PAR;
    }
    else {
      sVar5 = (short)param_1;
      iVar4 = sVar5 * 0xe;
      iVar3 = DAT_10011d04/*ROM*/ + iVar4;
      if (*(short *)(iVar3 + -0xe) == -2) {
        uVar2 = E_NOEXS;
      }
      else if ((*(short *)(iVar3 + -6) == 3) &&
              (*(short *)(_DAT_6a003758 * 0x44 + 0x6a001c04) < *(short *)(iVar3 + -4))) {
        uVar2 = E_ILUSE;
      }
      else if (*(short *)(iVar3 + -2) == _DAT_6a003758) {
        uVar2 = E_ILUSE;
      }
      else if (*(short *)(iVar3 + -2) == 0) {
        if ((*(short *)(iVar3 + -6) == 3) &&
           (*(short *)(iVar3 + -4) < *(short *)(_DAT_6a003758 * 0x44 + 0x6a001c00))) {
          ready_list_unlink(_DAT_6a003758);
          sVar1 = _DAT_6a003758;
          *(uint16_t *)(_DAT_6a003758 * 0x44 + 0x6a001c00) =
               *(uint16_t *)(DAT_10011d04/*ROM*/ + iVar4 + -4);
          ready_list_insert(sVar1);
        }
        *(short *)(DAT_10011d04/*ROM*/ + iVar4 + -2) = _DAT_6a003758;
        insert_into_timeout_queue_1000fc60(_DAT_6a003758,sVar5);
        uVar2 = 0;
      }
      else {
        if (param_2 == -1) {
          *(uint32_t *)(_DAT_6a003758 * 0x44 + 0x6a001c1c) = 0xffffffff;
        }
        else {
          if (param_2 == 0) {
            return E_TMOUT;
          }
          subtract_timeout_from_queue(param_2);
        }
        enqueue_timeout_event_10011a74(sVar5);
        adjust_task_priority((int)_DAT_6a003758,(int)*(short *)(_DAT_6a003758 * 0x44 + 0x6a001c00));
        uVar2 = 0;
      }
    }
  }
  else {
    uVar2 = E_CTX;
  }
  return uVar2;
}
