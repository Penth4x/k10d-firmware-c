/* @k10d script_dispatcher @ 0x104b7052
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed dispatch_script_verb)
 * unit: 219_script_shutter_control (unit names are model-proposed)
 * purpose:
 *   Dispatches a script verb by calling a validation helper and branching on the verb code.
 * summary:
 *   Calls invoke_object_callback_and_store_result with the first three arguments to
 *   validate or process the verb. If successful, it retrieves a value from param_1[1] and
 *   calls cmd_error_report with the result of read_field_at_offset_0x86c. If validation
 *   fails, it calls check_kernel_call_success_10459fea with param_1[0xb] and then branches
 *   on param_2, calling handle_case_nine_with_two_calls for code 0 or
 *   parse_bcd_or_call_helpers for code 0x10. Returns the boolean result of the initial
 *   validation call.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* Script engine verb dispatcher (21 verbs, codes 0-35; grammar closed, no hidden set). */

bool script_dispatcher(int *param_1,uint32_t param_2,uint32_t param_3)

{
  bool bVar2;
  uint32_t uVar1;
  int iVar3;
  
  bVar2 = invoke_object_callback_and_store_result(*param_1,param_2,param_3);
  if (bVar2) {
    iVar3 = param_1[1];
    uVar1 = read_field_at_offset_0x86c(*param_1);
    cmd_error_report((uint32_t *)(iVar3),(uint32_t)(uVar1));
  }
  else {
    check_kernel_call_success_10459fea();
    switch(param_2) {
    case 0:
      handle_case_nine_with_two_calls(param_1,param_3);
      break;
    case 0x10:
      parse_bcd_or_call_helpers(param_1,param_3);
    default:
    }
  }
  return bVar2;
}
