/* @k10d init_struct_with_offset_table @ 0x104a45f8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 206_settings_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t init_struct_with_offset_table(uint32_t *param_1)

{
  int iVar1;
  uint32_t uVar2;
  
  param_1[0x16] = *(uint32_t *)((int)*param_1 + 4);
  uVar2 = read_struct_field_by_index_104a2a78((void *)*param_1,1);
  param_1[2] = uVar2;
  iVar1 = *(int *)(*(int *)*param_1 + 4);
  if ((iVar1 == 2) || (iVar1 == 3)) {
    uVar2 = read_struct_field_by_index_104a2a78((int *)*param_1,3);
    param_1[3] = uVar2;
  }
  param_1[4] = param_1[0x16];
  param_1[5] = param_1[0x16] + 0x1c;
  param_1[6] = param_1[0x16] + 0x30;
  param_1[7] = param_1[0x16] + 0x7c;
  param_1[8] = param_1[0x16] + 0x9c;
  param_1[9] = param_1[0x16] + 0xa4;
  param_1[10] = param_1[0x16] + 0xb0;
  param_1[0xb] = param_1[0x16] + 0xc4;
  param_1[0xc] = param_1[0x16] + 0xd8;
  param_1[0xd] = param_1[0x16] + 0xec;
  param_1[0xe] = param_1[0x16] + 0xfc;
  param_1[0xf] = param_1[0x16] + 0x10c;
  param_1[0x10] = param_1[0x16] + 0x4bc;
  param_1[0x11] = param_1[0x16] + 0x164;
  param_1[0x12] = param_1[0x16] + 0x4a8;
  param_1[0x13] = param_1[0x16] + 0x4b0;
  param_1[0x18] = *(uint32_t *)(param_1[0x16] + 0x4c4);
  param_1[0x15] = *(uint32_t *)(param_1[0x16] + 0x4d0);
  return 1;
}
