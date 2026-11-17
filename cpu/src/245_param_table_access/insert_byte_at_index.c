/* @k10d insert_byte_at_index @ 0x104d58d2
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 245_param_table_access (unit names are model-proposed)
 * purpose:
 *   Calls a helper to find an index, then writes a byte at offset 0xc plus that index in
 *   the target structure.
 * summary:
 *   The function calls find_value_in_small_array with the first two parameters and a local
 *   variable to obtain an index. If the call returns non-zero, it stores the third
 *   parameter (a byte) at the memory location param_1 + 0xc + index. It returns the success
 *   status of the helper call. The specific role of the structure and the helper is not
 *   determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool insert_byte_at_index(int param_1,uint32_t param_2,uint8_t param_3)

{
  int iVar1;
  uintptr_t sp;
  int iStack_c;
  
  iStack_c = 0;
  iVar1 = find_value_in_small_array(param_1,param_2,&iStack_c);
  if (iVar1 != 0) {
    *(uint8_t *)(param_1 + 0xc + iStack_c) = param_3;
  }
  return iVar1 != 0;
}
