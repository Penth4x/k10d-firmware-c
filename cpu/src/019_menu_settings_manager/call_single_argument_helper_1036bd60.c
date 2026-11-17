/* @k10d call_single_argument_helper_1036bd60 @ 0x1036bd60
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 019_menu_settings_manager (unit names are model-proposed)
 * purpose:
 *   Invokes a single helper function with one SDRAM pointer argument.
 * summary:
 *   The function performs a single call to update_object_field_and_notify_104c4824, passing
 *   the value stored at SDRAM address 0x8000439c as the argument. It has no other logic,
 *   local variables, or side effects beyond this call. The role of the callee and the data
 *   at 0x8000439c are unknown, so the specific subsystem cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void call_single_argument_helper_1036bd60(uint32_t param_x0, uint32_t param_x1)

{
  update_object_field_and_notify_104c4824(_DAT_8000439c/*SDRAM*/, __frv_reg_unset(5));
  return;
}
