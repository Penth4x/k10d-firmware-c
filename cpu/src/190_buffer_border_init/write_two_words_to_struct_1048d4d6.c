/* @k10d write_two_words_to_struct_1048d4d6 @ 0x1048d4d6
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 190_buffer_border_init (unit names are model-proposed)
 * purpose:
 *   Writes two 16-bit values into a structure at offsets 0x26 and 0x28.
 * summary:
 *   The function takes a base pointer in param_1 and stores param_2 and param_3 as 16-bit
 *   values at offsets 0x26 and 0x28 respectively. It has no callees and performs no other
 *   operations. The specific role of the structure or the meaning of these fields cannot be
 *   determined from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_two_words_to_struct_1048d4d6(int param_1,uint16_t param_2,uint16_t param_3)

{
  *(uint16_t *)(param_1 + 0x26) = param_2;
  *(uint16_t *)(param_1 + 0x28) = param_3;
  return;
}
