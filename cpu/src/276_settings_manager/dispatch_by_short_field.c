/* @k10d dispatch_by_short_field @ 0x1051ccd4
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 276_settings_manager (unit names are model-proposed)
 * purpose:
 *   Dispatches to one of two helpers based on the value of a short field at offset 2 of
 *   param_2.
 * summary:
 *   Reads the 16-bit value at param_2+2. If it equals 4, calls write_to_dynamic_array with
 *   param_2, 0, and the 32-bit value at param_3+0x18. If it equals 3, calls
 *   write_word_to_dynamic_array with param_2, 0, and the low 16 bits of the value at
 *   param_3+0x18. Returns without action for other values.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_by_short_field(uint32_t param_1,void *param_2,int param_3)

{
  if (*(short *)((int)param_2 + 2) == 4) {
    write_to_dynamic_array((int)param_2,0,*(uint32_t *)(param_3 + 0x18));
  }
  else if (*(short *)((int)param_2 + 2) == 3) {
    write_word_to_dynamic_array((int)param_2,0,(short)*(uint32_t *)(param_3 + 0x18));
  }
  return;
}
