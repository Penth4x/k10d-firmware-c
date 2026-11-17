/* @k10d iterate_over_double_length_array @ 0x1051a6f6
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * purpose:
 *   Calls a helper repeatedly for twice the count stored at offset 4 of the second
 *   argument.
 * summary:
 *   Reads an unsigned count from *(param_2 + 4) and, if non-zero, loops from 0 to 2*count-1
 *   calling write_to_dynamic_array(param_2, index, 1) each iteration. The first argument
 *   param_1 is unused in the visible pseudocode. The callee write_to_dynamic_array is not
 *   named, so the specific subsystem role is not determinable from this code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void iterate_over_double_length_array(uint32_t param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  if ((*(uint *)(param_2 + 4) & 0x7fffffff) != 0) {
    do {
      write_to_dynamic_array(param_2,uVar1,1);
      uVar1 = uVar1 + 1;
    } while (uVar1 < (uint)(*(int *)(param_2 + 4) << 1));
  }
  return;
}
