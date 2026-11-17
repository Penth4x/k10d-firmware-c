/* @k10d initialize_subsystem_sequence @ 0x103959c0
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls a sequence of five helper functions to initialize a subsystem, passing a
 *   parameter to the final step.
 * summary:
 *   The function executes a linear sequence of calls: first
 *   call_two_unnamed_helpers_10394af0, then retrieves a value from get_value_from_object,
 *   processes it through add_offset_to_pointer_104df392, and passes the result to
 *   toggle_object_state_by_flag with a zero argument. Finally, it calls
 *   call_single_helper_10395a3a with the original input parameter. No local state is
 *   modified beyond the temporary variable.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void initialize_subsystem_sequence(uint32_t param_1)

{
  int iVar1;
  
  call_two_unnamed_helpers_10394af0();
  iVar1 = get_value_from_object();
  iVar1 = add_offset_to_pointer_104df392(iVar1);
  toggle_object_state_by_flag(iVar1,0);
  call_single_helper_10395a3a(param_1);
  return;
}
