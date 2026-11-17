/* @k10d dispatch_by_two_byte_field @ 0x1051ca72
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 276_settings_manager (unit names are model-proposed)
 * purpose:
 *   Dispatches to one of two helpers based on the value of a 16-bit field at offset 2 of
 *   param_2.
 * summary:
 *   Reads the short at param_2+2. If it equals 4, calls write_to_dynamic_array with
 *   param_2, 0, and the full uint at *param_3. If it equals 3, calls
 *   write_word_to_dynamic_array with param_2, 0, and the low 16 bits of *param_3. Returns
 *   without action for other values. The specific subsystem is not identifiable from the
 *   pseudocode or unnamed callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_by_two_byte_field(uint32_t param_1,void *param_2,uint *param_3)

{
  if (*(short *)((int)param_2 + 2) == 4) {
    write_to_dynamic_array((int)param_2,0,*param_3);
  }
  else if (*(short *)((int)param_2 + 2) == 3) {
    write_word_to_dynamic_array((int)param_2,0,(short)*param_3);
  }
  return;
}
