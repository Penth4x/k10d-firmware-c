/* @k10d call_subroutine_with_field_104d5e9a @ 0x104d5e9a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 245_param_table_access (unit names are model-proposed)
 * purpose:
 *   Calls read_word_from_array_104d5e86 with param_1 and the value at offset 0x10 of
 *   param_1, returning the result.
 * summary:
 *   This is a thin wrapper that dereferences the 4-byte field at offset 0x10 of the object
 *   pointed to by param_1 and passes it as the second argument to
 *   read_word_from_array_104d5e86. The return value of the callee is passed through
 *   unchanged. No other side effects or state modifications are visible in this function.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_subroutine_with_field_104d5e9a(int param_1)

{
  uint32_t uVar1;
  
  uVar1 = read_word_from_array_104d5e86(param_1,*(uint32_t *)(param_1 + 0x10));
  return uVar1;
}
