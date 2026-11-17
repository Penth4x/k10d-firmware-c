/* @k10d call_two_param_setters @ 0x104bc296
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 224_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Invokes two adjacent helper functions with the first argument and the second or third
 *   parameter respectively.
 * summary:
 *   The function takes three parameters and calls store_value_to_pointer_1045c510 with
 *   param_1 and param_2, then calls write_field_at_offset_four_1045c518 with param_1 and
 *   param_3. It acts as a wrapper or dispatcher that forwards arguments to two related low-
 *   level routines. No camera-specific behavior is evident from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_two_param_setters(uint32_t *param_1,uint32_t param_2,uint32_t param_3)

{
  store_value_to_pointer_1045c510(param_1,param_2);
  write_field_at_offset_four_1045c518(param_1,param_3);
  return;
}
