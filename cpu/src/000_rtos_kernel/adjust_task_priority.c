/* @k10d adjust_task_priority @ 0x10010028
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void adjust_task_priority(int param_1, uint32_t param_x1)

{
  int iVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  
  sVar2 = *(short *)((short)param_1 * 0x44 + 0x6a001c08);
  while( true ) {
    iVar1 = DAT_10011d04/*ROM*/ + sVar2 * 0xe;
    if (*(short *)(iVar1 + -6) != 2) {
      return;
    }
    sVar2 = *(short *)(iVar1 + -2);
    iVar4 = (int)sVar2;
    iVar1 = iVar4 * 0x44;
    if ((*(byte *)(iVar1 + 0x6a001c06) & 2) != 0) {
      if (*(short *)(iVar1 + 0x6a001c00) <= *(short *)(param_1 * 0x44 + 0x6a001c00)) {
        return;
      }
      ready_list_unlink(sVar2);
      *(uint16_t *)(iVar1 + 0x6a001c00) = *(uint16_t *)(param_1 * 0x44 + 0x6a001c00);
      ready_list_insert(sVar2);
      return;
    }
    if ((*(byte *)(iVar1 + 0x6a001c06) & 4) == 0) {
      sVar2 = *(short *)(param_1 * 0x44 + 0x6a001c00);
      if (*(short *)(iVar4 * 0x44 + 0x6a001c00) <= sVar2) {
        return;
      }
      *(short *)(iVar4 * 0x44 + 0x6a001c00) = sVar2;
      return;
    }
    sVar2 = *(short *)(param_1 * 0x44 + 0x6a001c00);
    if (*(short *)(iVar1 + 0x6a001c00) <= sVar2) break;
    *(short *)(iVar1 + 0x6a001c00) = sVar2;
    iVar3 = test_task_state_bit((int)*(short *)(iVar1 + 0x6a001c08),*(uint8_t *)(iVar1 + 0x6a001c07));
    if (iVar3 == 1) {
      remove_node_from_queue((int)*(short *)(iVar1 + 0x6a001c08),iVar4,1);
    }
    if (*(char *)(iVar1 + 0x6a001c07) != '\a') {
      return;
    }
    sVar2 = *(short *)(iVar1 + 0x6a001c08);
  }
  return;
}
