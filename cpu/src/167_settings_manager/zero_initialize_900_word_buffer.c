/* @k10d zero_initialize_900_word_buffer @ 0x104758b4
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Clears a 900-word array and sets two 16-bit fields to 0xff9c.
 * summary:
 *   The function takes a pointer to a structure, zeroes out the first 900 32-bit words
 *   (3600 bytes) in a loop, then sets the 7th word (index 6) to 0. It also writes the
 *   16-bit value 0xff9c to offsets 0x1c and 0x1e within the structure. No callees are
 *   invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void zero_initialize_900_word_buffer(int *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    *(uint32_t *)(*param_1 + iVar1 * 4) = 0;
    iVar1 = (int)(short)((short)iVar1 + 1);
  } while (iVar1 < 900);
  param_1[6] = 0;
  *(uint16_t *)(param_1 + 7) = 0xff9c;
  *(uint16_t *)((int)param_1 + 0x1e) = 0xff9c;
  return;
}
