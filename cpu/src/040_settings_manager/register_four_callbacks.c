/* @k10d register_four_callbacks @ 0x10395eb6
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 040_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void register_four_callbacks(int param_1)

{
  uint32_t uVar1;
  uint32_t uVar2;
  
  uVar1 = get_or_init_singleton_10392e96();
  *(uint32_t *)(param_1 + 0xb4) = uVar1;
  uVar2 = call_function_at_0x1039b688(param_1);
  call_helper_with_offset_eight_10392fd8(uVar1,uVar2);
  uVar2 = call_function_at_offset_eight(param_1);
  call_helper_with_offset_10392ff8(uVar1,uVar2);
  uVar2 = call_function_at_offset_8_10395dd4(param_1);
  call_function_with_offset_arg_10393018(uVar1,uVar2);
  uVar2 = call_function_at_offset_8_10395df4(param_1);
  call_helper_with_offset_arg_10393038(uVar1,uVar2);
  return;
}
