/* @k10d loop_call_helper_with_index @ 0x1051cae6
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 276_settings_manager (unit names are model-proposed)
 * purpose:
 *   Iterates from 0 to a count stored in param_2, calling a helper with the index and a
 *   value from param_3.
 * summary:
 *   The function reads a 32-bit count from offset 4 of the param_2 structure. If non-zero,
 *   it executes a loop calling write_word_to_dynamic_array with param_2, the current loop
 *   index, and a 16-bit value read from offset 0x24 of param_3. The loop increments the
 *   index until it reaches the count.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void loop_call_helper_with_index(uint32_t param_1,void *param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)((int)param_2 + 4) != 0) {
    do {
      write_word_to_dynamic_array((int)param_2,uVar1,*(uint16_t *)(param_3 + 0x24));
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)((int)param_2 + 4));
  }
  return;
}
