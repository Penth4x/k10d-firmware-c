/* @k10d dispatch_three_subcalls @ 0x000dda28
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Calls three unnamed helper functions in sequence, passing param_2 and param_3 to the
 *   second and third.
 * summary:
 *   The function takes three parameters but only forwards param_2 and param_3 to its
 *   callees. It invokes update_global_flag_bytes with no arguments, then
 *   clamp_value_and_set_flags_000ddace with param_2, and finally update_sign_and_zero_flags
 *   with param_3. No local state is modified and no return value is produced.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_three_subcalls(uint32_t param_1,uint32_t param_2,uint32_t param_3)

{
  update_global_flag_bytes(__frv_reg_unset(4));
  clamp_value_and_set_flags_000ddace(param_2);
  update_sign_and_zero_flags(param_3);
  return;
}
