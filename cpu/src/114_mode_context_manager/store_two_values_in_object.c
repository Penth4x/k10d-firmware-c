/* @k10d store_two_values_in_object @ 0x1043004c
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 114_mode_context_manager (unit names are model-proposed)
 * purpose:
 *   Stores two 32-bit values into an object at offsets 0x5c and 0x60 and via a helper.
 * summary:
 *   Writes param_2 to offset 0x58 of the object pointed to by param_1. Calls
 *   read_struct_field_by_index_1042fe92 twice with param_1 and param_2, using the returned
 *   pointer to write param_3 at offset +4 and param_4 at offset +8. Also writes param_3 and
 *   param_4 directly to offsets 0x5c and 0x60 of the original object. The role of
 *   read_struct_field_by_index_1042fe92 is unknown, but it appears to return a pointer to a
 *   related structure or buffer.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_two_values_in_object(int param_1,int param_2,uint32_t param_3,uint32_t param_4)

{
  int iVar1;
  
  *(int *)(param_1 + 0x58) = param_2;
  iVar1 = read_struct_field_by_index_1042fe92(param_1,param_2);
  *(uint32_t *)(iVar1 + 4) = param_3;
  iVar1 = read_struct_field_by_index_1042fe92(param_1,param_2);
  *(uint32_t *)(iVar1 + 8) = param_4;
  *(uint32_t *)(param_1 + 0x5c) = param_3;
  *(uint32_t *)(param_1 + 0x60) = param_4;
  return;
}
