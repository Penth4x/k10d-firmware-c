/* @k10d dispatch_two_magic_codes @ 0x1051d064
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 276_settings_manager (unit names are model-proposed)
 * purpose:
 *   Checks the first ushort of param_2 against two magic values and calls a specific
 *   handler for each, otherwise forwards all arguments to a default handler.
 * summary:
 *   The function acts as a small dispatcher. If *param_2 is 0x103, it calls
 *   call_helper_with_zero_and_six and returns 1. If *param_2 is 0xc4a5, it calls
 *   invoke_two_virtual_methods_1051d0bc and returns 1. For any other value, it calls
 *   dispatch_command_by_id_1051c540 with all four original parameters and returns that
 *   result. The callees are not named, so the specific subsystem is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_two_magic_codes(cls_105d6ce0 *param_1,ushort *param_2,uint *param_3,uint32_t param_4)

{
  uint32_t uVar1;
  
  if (*param_2 == 0x103) {
    call_helper_with_zero_and_six(__frv_reg_unset(4), __frv_reg_unset(5));
    uVar1 = 1;
  }
  else if (*param_2 == 0xc4a5) {
    invoke_two_virtual_methods_1051d0bc(__frv_reg_unset(4), __frv_reg_unset(5));
    uVar1 = 1;
  }
  else {
    uVar1 = dispatch_command_by_id_1051c540((cls_105d6c2c *)param_1,param_2,param_3,param_4);
  }
  return uVar1;
}
