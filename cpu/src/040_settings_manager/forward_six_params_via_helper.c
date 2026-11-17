/* @k10d forward_six_params_via_helper @ 0x103945b4
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls a helper with a pointer from get_or_create_sram_object_1040a240 and forwards all
 *   six input parameters.
 * summary:
 *   The function retrieves a pointer by calling get_or_create_sram_object_1040a240. It then
 *   calls write_two_stage_command, passing the retrieved pointer as the first argument and
 *   forwarding param_2 through param_6 as the remaining arguments. The parameters param_5
 *   and param_6 are temporarily stored on the stack before being passed to the callee.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void forward_six_params_via_helper(void *param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4,
                 uint32_t param_5,uint32_t param_6)

{
  void *pvVar1;
  uintptr_t sp;
  uint32_t *puVar2;
  uint8_t auStack_1c [8];
  
  puVar2 = (uint32_t *)auStack_1c;
  pvVar1 = (void *)get_or_create_sram_object_1040a240();
  *puVar2 = param_5;
  puVar2[1] = param_6;
  write_two_stage_command(pvVar1,param_2,param_3,param_4,*puVar2,puVar2[1]);
  return;
}
