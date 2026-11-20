/* @k10d store_byte_at_offset_0xc_104d762e @ 0x104d762e
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Writes a single byte parameter to offset 0xc of a structure pointed to by the first
 *   argument.
 * summary:
 *   The function takes a pointer in param_1 and a byte value in param_2. It stores param_2
 *   at the memory location param_1 + 0xc. No other operations or side effects are visible.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_byte_at_offset_0xc_104d762e(int param_1,uint8_t param_2)

{
  *(uint8_t *)(param_1 + 0xc) = param_2;
  return;
}
