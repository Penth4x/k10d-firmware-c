/* @k10d get_timeout_queue_entry @ 0x10010498
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Retrieves a timeout queue entry by index, returning its value and associated data.
 * summary:
 *   Validates the index param_1 against the bounds stored in DAT_10011d48. If valid, it
 *   reads a short value from an array at DAT_10011d14. If the value is -2, it returns an
 *   error code (0xffffffd6). If the value is -1, it is treated as 0. The function writes
 *   the value to *param_2 and a 16-bit data field to *(param_2 + 2), returning 0 on
 *   success. The module context suggests this is part of the RTOS kernel's timeout queue
 *   management.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"
#include "uitron.h"

uint32_t get_timeout_queue_entry(int param_1,short *param_2)

{
  int iVar1;
  short sVar2;
  uint32_t uVar3;
  
  if ((param_1 < 1) || (DAT_10011d48/*ROM*/ < param_1)) {
    uVar3 = E_ID;
  }
  else {
    iVar1 = (short)param_1 * 10;
    sVar2 = *(short *)(DAT_10011d14/*ROM*/ + iVar1 + -10);
    if (sVar2 == -2) {
      uVar3 = E_NOEXS;
    }
    else {
      if (sVar2 == -1) {
        sVar2 = 0;
      }
      *param_2 = sVar2;
      *(uint *)(param_2 + 2) = (uint)*(ushort *)(DAT_10011d14/*ROM*/ + iVar1 + -4);
      uVar3 = 0;
    }
  }
  return uVar3;
}
