/* @k10d dispatch_state_transition_10394958 @ 0x10394958
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Queries a state value and routes execution to different handlers based on the state and
 *   subsequent checks.
 * summary:
 *   The function calls call_two_helpers_and_return_1039491e to get a state integer,
 *   optionally storing it in param_2. If the state is 6, it performs a series of checks
 *   using check_and_set_flag_103948aa and map_status_code_to_output. Depending on the
 *   results and specific values (9 or 10), it calls either
 *   create_and_configure_object_10393b98 or create_and_configure_object_10393b48. If the
 *   initial state is not 6, it returns param_1 directly. The logic suggests a state machine
 *   or event dispatcher.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x103949b8) overlaps instruction at (ram,0x103949b6)
    */

void * dispatch_state_transition_10394958(void *param_1, int *param_2, uint32_t param_x2)

{
  int iVar1;
  void *pvVar2;
  uintptr_t sp;
  int iStack_c;
  
  iVar1 = call_two_helpers_and_return_1039491e();
  if (param_2 != (int *)0x0) {
    *param_2 = iVar1;
  }
  if (iVar1 != 6) {
    return param_1;
  }
  iStack_c = -1;
  iVar1 = check_and_set_flag_103948aa(param_1);
  if (iVar1 == 0) {
    iVar1 = map_status_code_to_output(param_1,&iStack_c);
    if (iVar1 == 0) {
      return param_1;
    }
    if ((iStack_c == 10) || (iVar1 = iStack_c, iStack_c == 9)) {
      pvVar2 = (void *)create_and_configure_object_10393b98(iStack_c,param_1,2000);
      return pvVar2;
    }
  }
  else {
    iVar1 = get_value_from_object();
    add_offset_to_pointer_104df392(iVar1);
    iVar1 = process_34_entry_sequence(__frv_reg_unset(4));
    if (iVar1 != 0) {
      pvVar2 = (void *)call_helper_with_param(param_1);
      return pvVar2;
    }
    iVar1 = 0;
  }
  pvVar2 = (void *)create_and_configure_object_10393b48(iVar1,0,param_1);
  return pvVar2;
}
