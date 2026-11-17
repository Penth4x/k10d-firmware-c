/* @k10d initialize_task_control_block @ 0x1000f994
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void initialize_task_control_block(short param_1,uint16_t *param_2,uint32_t param_3)

{
  int iVar1;
  
  iVar1 = param_1 * 0x44;
  *(uint16_t *)(iVar1 + 0x6a001be8) = 0xffff;
  *(uint16_t *)(iVar1 + 0x6a001bea) = 0xffff;
  *(uint16_t *)(iVar1 + 0x6a001bf0) = 0xffff;
  *(uint32_t *)(iVar1 + 0x6a001bf4) = *(uint32_t *)(param_2 + 4);
  *(uint16_t *)(iVar1 + 0x6a001c1a) = *param_2;
  if (*(int *)(param_2 + 10) == 0) {
    *(ushort *)(iVar1 + 0x6a001c1a) = *(ushort *)(iVar1 + 0x6a001c1a) | 0x8000;
  }
  *(uint32_t *)(iVar1 + 0x6a001bf8) = param_3;
  *(uint32_t *)(iVar1 + 0x6a001bfc) = *(uint32_t *)(param_2 + 8);
  *(uint16_t *)(iVar1 + 0x6a001c02) = param_2[6];
  *(uint32_t *)(&DAT_6a001c28 + iVar1) = *(uint32_t *)(param_2 + 2);
  *(uint16_t *)(iVar1 + 0x6a001c14) = 0;
  kernel_stub_noop();
  return;
}
