/* @k10d dispatch_on_type_0x103 @ 0x104a12f2
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 205_settings_manager (unit names are model-proposed)
 * purpose:
 *   Checks a 16-bit type field and branches to a handler or a generic dispatcher.
 * summary:
 *   Reads the first ushort of param_2. If it equals 0x103, it calls
 *   set_mode_parameter_value and returns 1. Otherwise, it forwards all four arguments to
 *   dispatch_command_by_id_1051c540 and returns its result. The specific subsystem is not
 *   identifiable from the provided callees or constants.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_on_type_0x103(uint32_t param_1,ushort *param_2,uint *param_3,uint32_t param_4)

{
  uint32_t uVar1;
  
  if (*param_2 == 0x103) {
    set_mode_parameter_value(__frv_reg_unset(4), __frv_reg_unset(5), __frv_reg_unset(6));
    uVar1 = 1;
  }
  else {
    uVar1 = dispatch_command_by_id_1051c540(param_1,param_2,param_3,param_4);
  }
  return uVar1;
}
