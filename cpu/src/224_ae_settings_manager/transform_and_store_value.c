/* @k10d transform_and_store_value @ 0x104bb5ae
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 224_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Transforms the second argument via a helper and stores the result into the first
 *   argument.
 * summary:
 *   The function calls map_mode_code_to_index_104bb5c4 with param_2 to compute a value,
 *   then passes param_1 and that computed value to set_field_and_call_handler. It acts as a
 *   simple two-step wrapper that derives a value from an input and applies it to a target
 *   object or memory location. No specific camera subsystem behavior is evident from the
 *   pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void transform_and_store_value(void *param_1,uint32_t param_2)

{
  uint32_t uVar1;
  
  uVar1 = map_mode_code_to_index_104bb5c4(param_2);
  set_field_and_call_handler(param_1,uVar1);
  return;
}
