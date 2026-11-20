/* @k10d init_struct_with_offset_table @ 0x104a45f8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 206_settings_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t init_struct_with_offset_table(cls_105b6554 *param_1)

{
  int iVar1;
  uint32_t uVar2;
  
  param_1->field_0x58 = *(uint32_t *)((int)param_1->field_0x0 + 4);
  uVar2 = read_struct_field_by_index_104a2a78((char*)(param_1) ->field_0x0,1);
  param_1->field_0x8 = uVar2;
  iVar1 = *(int *)(*(int *)param_1->field_0x0 + 4);
  if ((iVar1 == 2) || (iVar1 == 3)) {
    uVar2 = read_struct_field_by_index_104a2a78((int *)param_1->field_0x0,3);
    param_1->field_0xc = uVar2;
  }
  param_1->field_0x10 = param_1->field_0x58;
  param_1->field_0x14 = param_1->field_0x58 + 0x1c;
  param_1->field_0x18 = param_1->field_0x58 + 0x30;
  param_1->field_0x1c = param_1->field_0x58 + 0x7c;
  param_1->field_0x20 = param_1->field_0x58 + 0x9c;
  param_1->field_0x24 = param_1->field_0x58 + 0xa4;
  param_1->field_0x28 = param_1->field_0x58 + 0xb0;
  param_1->field_0x2c = param_1->field_0x58 + 0xc4;
  param_1->field_0x30 = param_1->field_0x58 + 0xd8;
  param_1->field_0x34 = param_1->field_0x58 + 0xec;
  param_1->field_0x38 = param_1->field_0x58 + 0xfc;
  param_1->field_0x3c = param_1->field_0x58 + 0x10c;
  param_1->field_0x40 = param_1->field_0x58 + 0x4bc;
  param_1->field_0x44 = param_1->field_0x58 + 0x164;
  param_1->field_0x48 = param_1->field_0x58 + 0x4a8;
  param_1->field_0x4c = param_1->field_0x58 + 0x4b0;
  param_1->field_0x60 = *(uint32_t *)(param_1->field_0x58 + 0x4c4);
  param_1->field_0x54 = *(uint32_t *)(param_1->field_0x58 + 0x4d0);
  return 1;
}
