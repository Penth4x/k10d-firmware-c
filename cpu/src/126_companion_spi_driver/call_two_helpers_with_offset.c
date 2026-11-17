/* @k10d call_two_helpers_with_offset @ 0x1043ebd4
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls an unnamed helper then invokes virtual slot 2 on an object at param_1+8.
 * summary:
 *   The function takes a single pointer argument, first calls
 *   clear_bit_5_of_word_at_offset_0x2c with no arguments, then calls dispatch_single_subobj
 *   (virtual method slot 2 of class cls_1059e408) passing param_1 + 8. No local state is
 *   modified and no return value is produced.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_two_helpers_with_offset(int param_1)

{
  clear_bit_5_of_word_at_offset_0x2c(__frv_reg_unset(4));
  dispatch_single_subobj(param_1 + 8);
  return;
}
