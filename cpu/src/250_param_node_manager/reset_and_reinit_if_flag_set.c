/* @k10d reset_and_reinit_if_flag_set @ 0x104df532
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 250_param_node_manager (unit names are model-proposed)
 * purpose:
 *   Resets a field and calls an init helper if a status flag in the struct is non-zero.
 * summary:
 *   Checks if param_1[1] is non-zero. If so, it sets param_1[2] to 0 and calls
 *   copy_structured_record_104df5f2 with the struct pointer. Returns the boolean state of
 *   param_1[1]. The specific role of the struct fields and the callee is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool reset_and_reinit_if_flag_set(int *param_1)

{
  if (param_1[1] != 0) {
    param_1[2] = 0;
    copy_structured_record_104df5f2(param_1,(uint16_t *)__frv_reg_unset(5),(uint16_t *)__frv_reg_unset(6));
  }
  return param_1[1] != 0;
}
