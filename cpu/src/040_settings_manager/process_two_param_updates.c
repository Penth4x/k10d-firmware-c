/* @k10d process_two_param_updates @ 0x1039306e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Retrieves two values from param_1, processes each with a shared context, and clears the
 *   corresponding state on success.
 * summary:
 *   The function calls get_value_from_object and add_offset_to_pointer_104df392 to
 *   initialize a context, then obtains a second context via return_r4_passthrough_104d800e
 *   and adjust_pointer_by_flag. It extracts two values from param_1 using
 *   read_field_at_offset_eight_10393008 and read_field_at_offset_eight_10393048. Each value
 *   is processed by check_param_against_three_values and check_param_against_two_values
 *   respectively; if either returns 0, the corresponding state is cleared via
 *   call_helper_with_offset_10392ff8 or call_helper_with_offset_arg_10393038.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void process_two_param_updates(int param_1)

{
  int iVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  
  iVar1 = get_value_from_object();
  add_offset_to_pointer_104df392(iVar1);
  uVar2 = return_r4_passthrough_104d800e();
  uVar2 = adjust_pointer_by_flag(uVar2,1);
  uVar3 = read_field_at_offset_eight_10393008(param_1);
  iVar1 = check_param_against_three_values((void *)(param_1),(int)(uVar3),(uint32_t)(uVar2));
  if (iVar1 == 0) {
    call_helper_with_offset_10392ff8(param_1,0);
  }
  uVar3 = read_field_at_offset_eight_10393048(param_1);
  iVar1 = check_param_against_two_values((void *)(param_1),(int)(uVar3),(uint32_t)(uVar2));
  if (iVar1 == 0) {
    call_helper_with_offset_arg_10393038(param_1,0);
  }
  return;
}
