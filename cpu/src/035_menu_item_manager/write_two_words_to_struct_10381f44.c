/* @k10d write_two_words_to_struct_10381f44 @ 0x10381f44
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Writes two 16-bit values into a structure at offsets 0x58 and 0x5a.
 * summary:
 *   The function takes a base pointer in param_1 and stores param_2 and param_3 as 16-bit
 *   values at offsets 0x58 and 0x5a respectively. It has no callees and performs no other
 *   operations. The specific role of the structure or the meaning of these fields cannot be
 *   determined from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_two_words_to_struct_10381f44(int param_1,uint16_t param_2,uint16_t param_3)

{
  *(uint16_t *)(param_1 + 0x58) = param_2;
  *(uint16_t *)(param_1 + 0x5a) = param_3;
  return;
}
