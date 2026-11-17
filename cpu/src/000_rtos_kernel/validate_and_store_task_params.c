/* @k10d validate_and_store_task_params @ 0x1000d100
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Validates a parameter structure and stores it into a global state block or task slot.
 * summary:
 *   Checks param_1 against a global ID or index range. If valid, it verifies fields in
 *   param_2 (including alignment and range checks) and calls allocate_kernel_memory_block
 *   for potential transformation. It then writes the validated data to either a global
 *   block (DAT_6a00375c+) or a per-task slot at 0x6a001be8, setting status flags in
 *   DAT_6a003aa5.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"
#include "uitron.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t validate_and_store_task_params(uint param_1,ushort *param_2)

{
  int iVar1;
  uint32_t uVar2;
  int iVar3;
  int caller_r14;
  uintptr_t sp;
  uint32_t *puVar4;
  uint uStack_c;
  
  if (param_1 == 0) {
    return E_ID;
  }
  if ((_DAT_6a003758 == param_1) && ((*(byte *)(caller_r14 + 0x4f) & 0x20) == 0)) {
    if (((DAT_6a003aa5 & 0x10) == 0) && ((DAT_6a003aa4 & 0x10) != 0)) {
      if ((((param_2[6] != 0) && ((int)(uint)param_2[6] <= _DAT_10011d4c/*ROM*/)) &&
          ((*(uint *)(param_2 + 10) & 3) == 0)) &&
         ((0x5f < *(uint *)(param_2 + 8) && ((*(uint *)(param_2 + 8) & 3) == 0)))) {
        if (*(int *)(param_2 + 10) == 0) {
          puVar4 = (uint32_t *)&stack0xfffffff8;
          iVar1 = allocate_kernel_memory_block(0,(uint32_t *)param_2);
          param_2 = (ushort *)*puVar4;
          if (iVar1 != 1) {
            return E_NOMEM;
          }
        }
        if (*param_2 == 2) {
          DAT_6a003aa5 = DAT_6a003aa5 | 0x40;
        }
        DAT_6a003aa5 = DAT_6a003aa5 | 0x10;
        _DAT_6a00375c = *param_2;
        _DAT_6a003760 = *(uint32_t *)(param_2 + 2);
        _DAT_6a003764 = *(uint32_t *)(param_2 + 4);
        _DAT_6a003768 = param_2[6];
        _DAT_6a00376c = *(uint32_t *)(param_2 + 8);
        _DAT_6a003770 = *(uint32_t *)(param_2 + 10);
        return 0;
      }
      return E_PAR;
    }
    return E_OBJ;
  }
  if (((int)param_1 < 1) || ((int)DAT_10011d4a/*ROM*/ < (int)param_1)) {
    uVar2 = E_ID;
  }
  else if ((*param_2 & 0xfffd) == 0) {
    if (((((short)param_2[6] < 1) || (DAT_10011d4c/*ROM*/ < (short)param_2[6])) ||
        (uStack_c = *(uint *)(param_2 + 10), (uStack_c & 3) != 0)) ||
       ((*(uint *)(param_2 + 8) < 0x60 || ((*(uint *)(param_2 + 8) & 3) != 0)))) {
      uVar2 = E_PAR;
    }
    else {
      iVar1 = (short)param_1 * 0x44;
      if (*(short *)(iVar1 + 0x6a001be8) == -2) {
        if ((uStack_c == 0) && (iVar3 = allocate_kernel_memory_block(*(uint *)(param_2 + 8),&uStack_c), iVar3 != 1))
        {
          uVar2 = E_NOMEM;
        }
        else {
          initialize_task_control_block((short)param_1,param_2,uStack_c);
          if ((*param_2 & 2) == 0) {
            *(uint8_t *)(iVar1 + 0x6a001c06) = 0x10;
            uVar2 = 0;
          }
          else {
            cre_tsk_insert_setup();
            uVar2 = 0;
          }
        }
      }
      else {
        uVar2 = E_OBJ;
      }
    }
  }
  else {
    uVar2 = E_RSATR;
  }
  return uVar2;
}
