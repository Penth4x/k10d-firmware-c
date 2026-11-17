/* @k10d append_byte_to_buffer_104d5d52 @ 0x104d5d52
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 245_param_table_access (unit names are model-proposed)
 * purpose:
 *   Appends a single byte to a buffer at an offset returned by a helper function.
 * summary:
 *   Calls find_index_in_small_array_104d5eb2 with param_1, param_2, and a local offset
 *   variable. If the helper returns non-zero, writes param_3 to the buffer at param_1 + 0xc
 *   + offset. Returns the success status of the helper call. The specific role of the
 *   buffer or the helper is not determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool append_byte_to_buffer_104d5d52(int param_1,uint32_t param_2,uint8_t param_3)

{
  int iVar1;
  uintptr_t sp;
  int iStack_c;
  
  iStack_c = 0;
  iVar1 = find_index_in_small_array_104d5eb2(param_1,param_2,&iStack_c);
  if (iVar1 != 0) {
    *(uint8_t *)(param_1 + 0xc + iStack_c) = param_3;
  }
  return iVar1 != 0;
}
