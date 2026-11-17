/* @k10d forward_params_via_helper_1039462c @ 0x1039462c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls a helper to obtain a value, then passes it with two input parameters to a second
 *   helper.
 * summary:
 *   The function takes three parameters. It calls get_or_create_sram_object_1040a240 with
 *   no arguments to retrieve an integer value. It then calls
 *   init_object_with_buffer_and_callback_1040a534, passing the retrieved value as the first
 *   argument, followed by param_2 and param_3. The function returns void.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void forward_params_via_helper_1039462c(void *param_1,void *param_2,uint32_t param_3)

{
  int iVar1;
  
  iVar1 = get_or_create_sram_object_1040a240();
  init_object_with_buffer_and_callback_1040a534(iVar1,param_2,param_3);
  return;
}
