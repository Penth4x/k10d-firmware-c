/* @k10d zero_struct_seven_words @ 0x104de078
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 247_menu_string_builder (unit names are model-proposed)
 * purpose:
 *   Clears the first 28 bytes of a memory block pointed to by param_1.
 * summary:
 *   The function writes zero to the first six 32-bit words and the first byte of the
 *   seventh word of the structure at param_1. It has no callees and performs no other side
 *   effects. The specific role of the structure is not determinable from the pseudocode
 *   alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void zero_struct_seven_words(uint32_t *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(uint8_t *)(param_1 + 4) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  return;
}
