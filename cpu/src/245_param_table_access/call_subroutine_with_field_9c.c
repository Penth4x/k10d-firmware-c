/* @k10d call_subroutine_with_field_9c @ 0x104d5808
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 245_param_table_access (unit names are model-proposed)
 * purpose:
 *   Calls read_word_from_array_104d57f4 with param_1 and the value at offset 0x9c of
 *   param_1, returning the result.
 * summary:
 *   This is a thin wrapper that reads a 4-byte field at offset 0x9c from the object pointed
 *   to by param_1 and passes it as the second argument to read_word_from_array_104d57f4.
 *   The return value of the callee is returned directly. No other side effects or MMIO
 *   operations are visible in this function.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_subroutine_with_field_9c(int param_1)

{
  uint32_t uVar1;
  
  uVar1 = read_word_from_array_104d57f4(param_1,*(uint32_t *)(param_1 + 0x9c));
  return uVar1;
}
