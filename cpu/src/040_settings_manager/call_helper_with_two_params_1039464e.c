/* @k10d call_helper_with_two_params_1039464e @ 0x1039464e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Retrieves a pointer from an unknown helper and passes it with two parameters to another
 *   helper.
 * summary:
 *   The function calls get_or_create_sram_object_1040a240 to obtain a pointer, then passes
 *   that pointer along with param_2 and param_3 to initialize_object_subfield. It acts as a
 *   thin wrapper or dispatcher between the two callees. No specific camera subsystem
 *   behavior is evident from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_two_params_1039464e(uint32_t param_1,uint32_t param_2,uint32_t param_3)

{
  void *pvVar1;
  
  pvVar1 = (void *)get_or_create_sram_object_1040a240();
  initialize_object_subfield(pvVar1,param_2,param_3);
  return;
}
