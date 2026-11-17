/* @k10d store_pair_into_struct_and_buffer @ 0x1042ff6c
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 114_mode_context_manager (unit names are model-proposed)
 * purpose:
 *   Writes two 32-bit values into a struct at offsets 0x48/0x4c and into a buffer obtained
 *   via a helper.
 * summary:
 *   The function stores param_2 at offset 0x44 of the object pointed to by param_1. It then
 *   calls read_struct_field_by_index_1042fe92 twice with (param_1, param_2) to obtain
 *   pointers, writing param_3 and param_4 at offsets +4 and +8 of those returned pointers
 *   respectively. Finally, it stores param_3 and param_4 at offsets 0x48 and 0x4c of the
 *   original object. The role of read_struct_field_by_index_1042fe92 is unknown, so the
 *   specific subsystem (e.g., exposure, AF) cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_pair_into_struct_and_buffer(int param_1,int param_2,uint32_t param_3,uint32_t param_4)

{
  int iVar1;
  
  *(int *)(param_1 + 0x44) = param_2;
  iVar1 = read_struct_field_by_index_1042fe92(param_1,param_2);
  *(uint32_t *)(iVar1 + 4) = param_3;
  iVar1 = read_struct_field_by_index_1042fe92(param_1,param_2);
  *(uint32_t *)(iVar1 + 8) = param_4;
  *(uint32_t *)(param_1 + 0x48) = param_3;
  *(uint32_t *)(param_1 + 0x4c) = param_4;
  return;
}
