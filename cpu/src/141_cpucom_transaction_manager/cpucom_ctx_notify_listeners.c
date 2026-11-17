/* @k10d cpucom_ctx_notify_listeners @ 0x104645e4
 * name: verified (structural evidence: decomp + emulator trace of the Cmd:01 poll)
 * unit: 141_cpucom_transaction_manager (unit names are model-proposed)
 * purpose:
 *   CPUCOM transaction vtable+0x8c: walks the listener slots at ctx+0x50 (16 bytes each)
 *   and calls the callbacks of active slots.
 * summary:
 *   VERIFIED: decomp + emulator trace of the Cmd:01 poll
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cpucom_ctx_notify_listeners(int *param_1,int param_2,uint32_t param_3)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iStack_10;
  
  bVar1 = false;
  iStack_10 = 1;
  iVar4 = param_2 << 4;
  do {
    piVar2 = *(int **)((int)param_1 + iVar4 + 0x50);
    if ((piVar2 != (int *)0x0) &&
       (iVar3 = (**(code **)(*piVar2 + 0x14))((int)*(short *)(*piVar2 + 0x10) + (int)piVar2),
       iVar3 != 0)) {
      piVar2 = *(int **)((int)param_1 + iVar4 + 0x50);
      iVar3 = *piVar2;
      (**(code **)(iVar3 + 0x1c))((int)piVar2 + (int)*(short *)(iVar3 + 0x18),0xc0001,param_3);
      bVar1 = true;
    }
    piVar2 = *(int **)((int)param_1 + iVar4 + 0x54);
    if ((piVar2 != (int *)0x0) &&
       (iVar3 = (**(code **)(*piVar2 + 0x14))((int)*(short *)(*piVar2 + 0x10) + (int)piVar2),
       iVar3 != 0)) {
      piVar2 = *(int **)((int)param_1 + iVar4 + 0x54);
      iVar3 = *piVar2;
      (**(code **)(iVar3 + 0x1c))((int)piVar2 + (int)*(short *)(iVar3 + 0x18),0xc0001,param_3);
      bVar1 = true;
    }
    iVar4 = iVar4 + 8;
    iStack_10 = iStack_10 + -1;
  } while (-1 < iStack_10);
  if (!bVar1) {
    cpucom_ctx_resubmit(param_1,param_1 + 1);
  }
  return;
}
