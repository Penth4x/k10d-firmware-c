/* @k10d store_params_at_offsets_10430014 @ 0x10430014
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 114_mode_context_manager (unit names are model-proposed)
 * purpose:
 *   Stores three parameters into an object at fixed offsets and via a helper lookup.
 * summary:
 *   Writes param_2 to offset 0xb8, param_3 to 0xbc, and param_4 to 0xc4 of the object
 *   pointed to by param_1. It also calls read_struct_field_by_index_1042fea4 twice with
 *   param_1 and param_2, using the returned pointers to write param_3 at offset 4 and
 *   param_4 at offset 0xc of those returned structures. The function appears to initialize
 *   or update a configuration structure with multiple fields.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_params_at_offsets_10430014(int param_1,int param_2,uint32_t param_3,uint8_t param_4)

{
  int iVar1;
  
  *(int *)(param_1 + 0xb8) = param_2;
  iVar1 = read_struct_field_by_index_1042fea4(param_1,param_2);
  *(uint32_t *)(iVar1 + 4) = param_3;
  iVar1 = read_struct_field_by_index_1042fea4(param_1,param_2);
  *(uint8_t *)(iVar1 + 0xc) = param_4;
  *(uint32_t *)(param_1 + 0xbc) = param_3;
  *(uint8_t *)(param_1 + 0xc4) = param_4;
  return;
}
