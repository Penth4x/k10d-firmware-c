/* @k10d test_task_state_bit @ 0x1000ff54
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"
#include "uitron.h"

bool test_task_state_bit(int param_1,uint32_t param_2)

{
  int iVar1;
  ushort uVar2;
  short sVar3;
  char cVar4;
  
  sVar3 = (short)param_1;
  switch(param_2) {
  case 2:
    iVar1 = DAT_10011d14/*ROM*/ + sVar3 * 10;
    cVar4 = -6;
    break;
  case 3:
    iVar1 = DAT_10011d10/*ROM*/ + sVar3 * 0xc;
    cVar4 = -8;
    break;
  case 4:
    iVar1 = DAT_10011d0c/*ROM*/ + sVar3 * 0x1c;
    cVar4 = -0x14;
    break;
  default:
    return false;
  case 6:
    uVar2 = *(ushort *)(DAT_10011d08/*ROM*/ + param_1 * 0x10 + -0xc);
    goto test_bit_in_r12;
  case 7:
    uVar2 = *(ushort *)(DAT_10011d04/*ROM*/ + sVar3 * 0xe + -6);
    if (uVar2 == 2) {
      return true;
    }
    goto test_bit_in_r12;
  case 8:
    iVar1 = DAT_10011d00/*ROM*/ + sVar3 * 0x24;
    cVar4 = E_ILUSE;
    break;
  case 0xd:
    iVar1 = DAT_10011cfc/*ROM*/ + sVar3 * 0x18;
    cVar4 = -0x10;
    break;
  case 0xe:
    uVar2 = *(ushort *)(DAT_10011cf8/*ROM*/ + param_1 * 0x20 + -0x14);
    goto test_bit_in_r12;
  }
  uVar2 = *(ushort *)(cVar4 + iVar1);
test_bit_in_r12:
  return (uVar2 & 1) != 0;
}
