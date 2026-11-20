/* @k10d populate_struct_from_object @ 0x1051a038
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t populate_struct_from_object(cls_105d6608 *param_1)

{
  uint32_t uVar1;
  int iVar2;
  
  uVar1 = read_struct_field_by_index_104a2a78((void *)param_1->field_0x0,0);
  param_1->field_0x58 = uVar1;
  uVar1 = read_struct_field_by_index_104a2a78((void *)param_1->field_0x0,3);
  param_1->field_0x5c = uVar1;
  uVar1 = read_struct_field_by_index_104a2a78((void *)param_1->field_0x0,2);
  param_1->field_0x60 = uVar1;
  iVar2 = *(int *)((int)param_1->field_0x0 + 4);
  param_1->field_0x64 = iVar2;
  param_1->field_0x68 = *(uint32_t *)(iVar2 + 0x4c4);
  return 1;
}
