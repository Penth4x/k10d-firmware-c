/* @k10d get_task_status_info @ 0x10010504
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"
#include "uitron.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t get_task_status_info(int param_1,ushort *param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint32_t uVar5;
  ushort uVar6;
  
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
  iVar4 = (short)param_1 * 0x44;
  if (*(short *)(iVar4 + 0x6a001be8) == -2) {
    uVar5 = E_NOEXS;
  }
  else {
    if (param_1 == _DAT_6a003758) {
      uVar6 = 1;
    }
    else {
      uVar6 = (ushort)*(byte *)(iVar4 + 0x6a001c06);
    }
    *param_2 = uVar6;
    param_2[1] = *(ushort *)(iVar4 + 0x6a001c00);
    param_2[2] = *(ushort *)(iVar4 + 0x6a001c04);
    uVar6 = (*(code *)0x100119d4/*ROM*/)(*(uint8_t *)(iVar4 + 0x6a001c07));
    param_2[3] = uVar6;
    param_2[4] = *(ushort *)(iVar4 + 0x6a001c08);
    if ((*param_2 & 4) != 0) {
      if (*(int *)(iVar4 + 0x6a001c1c) == -1) {
        param_2[6] = 0xffff;
        param_2[7] = 0xffff;
      }
      else {
        iVar3 = 0;
        sVar1 = _DAT_6a0036c4;
        while (iVar2 = (int)sVar1, iVar2 != param_1) {
          iVar3 = *(int *)(iVar2 * 0x44 + 0x6a001c1c) + iVar3;
          sVar1 = *(short *)(iVar2 * 0x44 + 0x6a001bec);
        }
        *(int *)(param_2 + 6) = *(int *)(iVar2 * 0x44 + 0x6a001c1c) + iVar3;
      }
    }
    *(int *)(param_2 + 8) = (int)*(short *)(iVar4 + 0x6a001c14);
    iVar3 = (int)*(short *)(iVar4 + 0x6a001c16);
    if (iVar3 < 0) {
      iVar3 = 0;
    }
    *(int *)(param_2 + 10) = iVar3;
    *(int *)(param_2 + 0xc) = (int)*(short *)(iVar4 + 0x6a001c18);
    get_task_state_or_current(param_1,(uint32_t *)(param_2 + 0xe));
    *(uint32_t *)(param_2 + 0x10) = *(uint32_t *)(iVar4 + 0x6a001bf8);
    uVar5 = 0;
  }
  return uVar5;
}
