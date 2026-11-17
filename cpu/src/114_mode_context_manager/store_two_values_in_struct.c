/* @k10d store_two_values_in_struct @ 0x1042ffdc
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 114_mode_context_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_two_values_in_struct(int param_1,int param_2,uint32_t param_3,uint32_t param_4)

{
  int iVar1;
  
  *(int *)(param_1 + 0x6c) = param_2;
  iVar1 = read_struct_field_by_index_1042fe92(param_1,param_2);
  *(uint32_t *)(iVar1 + 4) = param_3;
  iVar1 = read_struct_field_by_index_1042fe92(param_1,param_2);
  *(uint32_t *)(iVar1 + 8) = param_4;
  *(uint32_t *)(param_1 + 0x70) = param_3;
  *(uint32_t *)(param_1 + 0x74) = param_4;
  return;
}
