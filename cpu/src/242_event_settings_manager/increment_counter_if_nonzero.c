/* @k10d increment_counter_if_nonzero @ 0x104d0740
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 242_event_settings_manager (unit names are model-proposed)
 * purpose:
 *   If param_2 is non-zero, reads a value via read_u16_from_struct_array and writes value+1
 *   back via write_word_to_dynamic_array, then returns 1.
 * summary:
 *   The function guards on param_2 != 0. When true it calls
 *   read_u16_from_struct_array(param_2, 0) to obtain a short value, then calls
 *   write_word_to_dynamic_array(param_2, 0, value + 1) to store the incremented value. It
 *   unconditionally returns 1. The callees are unnamed, so the specific subsystem (counter,
 *   index, or state field) is not determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t increment_counter_if_nonzero(uint32_t param_1, int param_2, uint32_t param_x2)

{
  short sVar1;
  
  if (param_2 != 0) {
    sVar1 = read_u16_from_struct_array(param_2,0);
    write_word_to_dynamic_array(param_2,0,sVar1 + 1);
  }
  return 1;
}
