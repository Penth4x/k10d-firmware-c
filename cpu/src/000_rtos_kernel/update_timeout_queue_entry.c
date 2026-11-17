/* @k10d update_timeout_queue_entry @ 0x10011b88
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Updates a timeout queue entry by writing a new timeout value and clearing the
 *   corresponding slot in a parallel array.
 * summary:
 *   The function takes an index (param_1) and a new timeout value (param_2). It reads the
 *   current timeout and associated ID from a queue structure at 0x6a001bf0. Depending on
 *   whether the current timeout or ID is -1 (invalid), it updates the timeout array and
 *   clears the ID array at the appropriate index (param_2 or the old ID). This is
 *   consistent with managing a timeout queue in an RTOS kernel, where entries are added,
 *   removed, or updated.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_timeout_queue_entry(short param_1,short param_2)

{
  short sVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  int iVar5;
  int iVar6;
  
  iVar3 = DAT_10011d04/*ROM*/;
  psVar4 = (short *)(param_1 * 0x44 + 0x6a001bf0);
  iVar6 = param_2 * 0xe + DAT_10011d04/*ROM*/;
  sVar1 = *(short *)(iVar6 + -10);
  sVar2 = *(short *)(iVar6 + -8);
  iVar5 = (int)sVar1;
  iVar6 = (int)sVar2;
  if (iVar5 == -1) {
    if (iVar6 == -1) {
      *psVar4 = -1;
    }
    else {
      *(short *)(param_1 * 0x44 + 0x6a001bf2) = sVar2;
      *(uint16_t *)(iVar6 * 0xe + iVar3 + -10) = 0xffff;
    }
  }
  else if (iVar6 == -1) {
    *psVar4 = sVar1;
    *(uint16_t *)(iVar5 * 0xe + iVar3 + -8) = 0xffff;
  }
  else {
    *(short *)(iVar6 * 0xe + DAT_10011d04/*ROM*/ + -10) = sVar1;
    *(short *)(iVar5 * 0xe + DAT_10011d04/*ROM*/ + -8) = sVar2;
  }
  return;
}
