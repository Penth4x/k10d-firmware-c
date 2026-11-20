/* @k10d store_value_at_offset_0x20_104d7eb2 @ 0x104d7eb2
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Writes the second argument into the memory location at offset 0x20 of the first
 *   argument.
 * summary:
 *   The function performs a single 32-bit store operation. It takes a pointer in param_1
 *   and a value in param_2, then writes the value to the address param_1 + 0x20. There are
 *   no other operations, loops, or function calls.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_value_at_offset_0x20_104d7eb2(int param_1,uint32_t param_2)

{
  *(uint32_t *)(param_1 + 0x20) = param_2;
  return;
}
