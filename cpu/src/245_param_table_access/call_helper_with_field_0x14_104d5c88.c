/* @k10d call_helper_with_field_0x14_104d5c88 @ 0x104d5c88
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 245_param_table_access (unit names are model-proposed)
 * purpose:
 *   Calls read_word_from_array_104d5c74 with param_1 and the value at offset 0x14 of
 *   param_1, returning the result.
 * summary:
 *   This function is a thin wrapper that reads the 32-bit value at offset 0x14 from the
 *   object pointed to by param_1 and passes it as the second argument to
 *   read_word_from_array_104d5c74. It returns the return value of that callee directly. No
 *   other side effects or global accesses are visible.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_helper_with_field_0x14_104d5c88(int param_1)

{
  uint32_t uVar1;
  
  uVar1 = read_word_from_array_104d5c74(param_1,*(uint32_t *)(param_1 + 0x14));
  return uVar1;
}
