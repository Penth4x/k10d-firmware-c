/* @k10d push_value_to_tail_of_list @ 0x000d37aa
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Appends a value to the end of a two-element linked list or queue structure.
 * summary:
 *   The function checks bit 2 of DAT_0003cbd4; if set, it uses DAT_0003ccb6 as the base
 *   pointer, otherwise it uses param_1. It then shifts the first two elements of the
 *   structure down by one position and writes param_2 into the third slot, effectively
 *   appending to a small fixed-size queue or list. No callees are invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void push_value_to_tail_of_list(uint16_t *param_1,uint16_t param_2)

{
  if ((DAT_0003cbd4 & 4) != 0) {
    param_1 = (uint16_t *)&DAT_0003ccb6;
  }
  *param_1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = param_2;
  return;
}
