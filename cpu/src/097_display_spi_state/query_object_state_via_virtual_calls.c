/* @k10d query_object_state_via_virtual_calls @ 0x1041bbf8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 097_display_spi_state (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void query_object_state_via_virtual_calls(int param_1,uint *param_2,uint32_t *param_3,uint32_t *param_4)

{
  uint32_t uVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0x2c) + 4);
  (**(code **)(iVar2 + 0x104))(*(int *)(param_1 + 0x2c) + (int)*(short *)(iVar2 + 0x100),1);
  iVar2 = *(int *)(*(int *)(param_1 + 0x2c) + 4);
  (**(code **)(iVar2 + 0xfc))(*(int *)(param_1 + 0x2c) + (int)*(short *)(iVar2 + 0xf8));
  iVar2 = *(int *)(*(int *)(param_1 + 0x2c) + 4);
  uVar1 = (**(code **)(iVar2 + 0x114))(*(int *)(param_1 + 0x2c) + (int)*(short *)(iVar2 + 0x110),1);
  *param_3 = uVar1;
  iVar2 = *(int *)(*(int *)(param_1 + 0x2c) + 4);
  uVar1 = (**(code **)(iVar2 + 0x114))(*(int *)(param_1 + 0x2c) + (int)*(short *)(iVar2 + 0x110),0);
  *param_4 = uVar1;
  iVar2 = *(int *)(*(int *)(param_1 + 0x2c) + 4);
  iVar2 = (**(code **)(iVar2 + 0x10c))(*(int *)(param_1 + 0x2c) + (int)*(short *)(iVar2 + 0x108));
  *param_2 = (uint)(iVar2 != 0);
  iVar2 = *(int *)(*(int *)(param_1 + 0x2c) + 4);
  (**(code **)(iVar2 + 0x104))(*(int *)(param_1 + 0x2c) + (int)*(short *)(iVar2 + 0x100),0);
  return;
}
