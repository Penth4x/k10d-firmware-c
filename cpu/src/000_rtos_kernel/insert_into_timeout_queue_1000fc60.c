/* @k10d insert_into_timeout_queue_1000fc60 @ 0x1000fc60
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void insert_into_timeout_queue_1000fc60(short param_1,short param_2)

{
  int iVar1;
  int iVar2;
  uint16_t uVar3;
  
  iVar1 = param_1 * 0x44;
  if (*(short *)(iVar1 + 0x6a001bf0) == -1) {
    *(short *)(iVar1 + 0x6a001bf0) = param_2;
    uVar3 = 0xffff;
    iVar2 = DAT_10011d04/*ROM*/ + param_2 * 0xe;
  }
  else {
    *(short *)(*(short *)(iVar1 + 0x6a001bf2) * 0xe + DAT_10011d04/*ROM*/ + -10) = param_2;
    uVar3 = *(uint16_t *)(iVar1 + 0x6a001bf2);
    iVar2 = param_2 * 0xe + DAT_10011d04/*ROM*/;
  }
  *(uint16_t *)(iVar2 + -8) = uVar3;
  *(uint16_t *)(DAT_10011d04/*ROM*/ + param_2 * 0xe + -10) = 0xffff;
  *(short *)(iVar1 + 0x6a001bf2) = param_2;
  return;
}
