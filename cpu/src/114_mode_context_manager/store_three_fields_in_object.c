/* @k10d store_three_fields_in_object @ 0x1042ffa4
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 114_mode_context_manager (unit names are model-proposed)
 * purpose:
 *   Writes three parameters into an object at fixed offsets and via a helper accessor.
 * summary:
 *   Stores param_2 at offset 0x90, param_3 at 0x94, and param_4 at 0x9c of the object
 *   pointed to by param_1. It also calls read_struct_field_by_index_1042fea4 twice with
 *   param_1 and param_2, writing param_3 to offset 4 and param_4 to offset 0xc of the
 *   returned pointer. The function appears to initialize or update a small struct with
 *   three fields.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_three_fields_in_object(int param_1,int param_2,uint32_t param_3,uint8_t param_4)

{
  int iVar1;
  
  *(int *)(param_1 + 0x90) = param_2;
  iVar1 = read_struct_field_by_index_1042fea4(param_1,param_2);
  *(uint32_t *)(iVar1 + 4) = param_3;
  iVar1 = read_struct_field_by_index_1042fea4(param_1,param_2);
  *(uint8_t *)(iVar1 + 0xc) = param_4;
  *(uint32_t *)(param_1 + 0x94) = param_3;
  *(uint8_t *)(param_1 + 0x9c) = param_4;
  return;
}
