/* @k10d get_entry_status_word @ 0x1000e924
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"
#include "uitron.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t get_entry_status_word(int param_1,uint16_t *param_2)

{
  int iVar1;
  uint32_t uVar2;
  
  if (param_1 == 0) {
    iVar1 = check_kernel_flag_bit5();
    if (iVar1 != 0) {
      return E_ID;
    }
    param_1 = (int)_DAT_6a003758;
  }
  else if ((param_1 < 0) || (DAT_10011d4a/*ROM*/ < param_1)) {
    return E_ID;
  }
  iVar1 = (short)param_1 * 0x44;
  if (*(short *)(iVar1 + 0x6a001be8) == -2) {
    uVar2 = E_NOEXS;
  }
  else if (*(char *)(iVar1 + 0x6a001c06) == '\x10') {
    uVar2 = E_OBJ;
  }
  else {
    *param_2 = *(uint16_t *)(iVar1 + 0x6a001c00);
    uVar2 = 0;
  }
  return uVar2;
}
