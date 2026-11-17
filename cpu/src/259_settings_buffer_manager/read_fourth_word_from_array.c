/* @k10d read_fourth_word_from_array @ 0x104f4ae6
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 259_settings_buffer_manager (unit names are model-proposed)
 * purpose:
 *   Returns the 4th word (index 3) from a memory block if the index is valid, otherwise
 *   returns 0.
 * summary:
 *   The function takes a base pointer and an index. If the index is less than 4, it
 *   dereferences the pointer at offset 0x10 plus the index times 4. Otherwise, it returns
 *   0. No callees are involved.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t read_fourth_word_from_array(int param_1,int param_2)

{
  uint32_t uVar1;
  
  if (param_2 < 4) {
    uVar1 = *(uint32_t *)(param_1 + 0x10 + param_2 * 4);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
