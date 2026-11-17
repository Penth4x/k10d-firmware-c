/* @k10d dispatch_param_by_type_1051cc5c @ 0x1051cc5c
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 276_settings_manager (unit names are model-proposed)
 * purpose:
 *   Routes a value from param_3 to one of two callees based on a type field in param_2.
 * summary:
 *   Checks the short at offset 2 of param_2. If it is 4, calls write_to_dynamic_array with
 *   the full 32-bit value at param_3+0x30. If it is 3, calls write_word_to_dynamic_array
 *   with the lower 16 bits of that value. The specific subsystem is not determinable from
 *   the pseudocode or unnamed callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_param_by_type_1051cc5c(uint32_t param_1,void *param_2,int param_3)

{
  if (*(short *)((int)param_2 + 2) == 4) {
    write_to_dynamic_array((int)param_2,0,*(uint32_t *)(param_3 + 0x30));
  }
  else if (*(short *)((int)param_2 + 2) == 3) {
    write_word_to_dynamic_array((int)param_2,0,(short)*(uint32_t *)(param_3 + 0x30));
  }
  return;
}
