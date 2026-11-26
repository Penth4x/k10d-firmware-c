/* @k10d call_helper_on_two_fields @ 0x10484c10
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 177_module_state_manager (unit names are model-proposed)
 * purpose:
 *   Invokes copy_bytes_to_offset_0x98 on two fields of a struct passed in param_1.
 * summary:
 *   The function takes a pointer in param_1 and calls copy_bytes_to_offset_0x98 twice:
 *   first with param_1+0x14, then with the value stored at param_1+0xc plus param_2 and
 *   param_3. No other operations or side effects are visible. The role of
 *   copy_bytes_to_offset_0x98 is unknown, so the subsystem cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_on_two_fields(int param_1,uint32_t param_2,uint32_t param_3)

{
  copy_bytes_to_offset_0x98(param_1 + 0x14, __frv_reg_unset(5), __frv_reg_unset(6));
  copy_bytes_to_offset_0x98(*(uint32_t *)(param_1 + 0xc),param_2,param_3);
  return;
}
