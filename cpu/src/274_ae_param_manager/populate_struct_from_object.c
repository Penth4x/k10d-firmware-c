/* @k10d populate_struct_from_object @ 0x1051a038
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t populate_struct_from_object(int *param_1)

{
  int iVar1;
  
  iVar1 = read_struct_field_by_index_104a2a78((void *)*param_1,0);
  param_1[0x16] = iVar1;
  iVar1 = read_struct_field_by_index_104a2a78((void *)*param_1,3);
  param_1[0x17] = iVar1;
  iVar1 = read_struct_field_by_index_104a2a78((void *)*param_1,2);
  param_1[0x18] = iVar1;
  iVar1 = *(int *)(*param_1 + 4);
  param_1[0x19] = iVar1;
  param_1[0x1a] = *(int *)(iVar1 + 0x4c4);
  return 1;
}
