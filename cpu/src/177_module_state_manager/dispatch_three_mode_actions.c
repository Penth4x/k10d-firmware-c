/* @k10d dispatch_three_mode_actions @ 0x10485970
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 177_module_state_manager (unit names are model-proposed)
 * purpose:
 *   Stores param_1 in a global and dispatches to one of three handlers based on its value.
 * summary:
 *   Writes the input parameter to uRam800102da. If the value is 1, 2, or 3, it calls
 *   call_three_helpers_with_ram_args_104858ce, call_three_helpers_with_ram_args_10485904,
 *   or call_three_helpers_with_ram_args_1048593a respectively. The callees are unnamed, so
 *   the specific subsystem is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_three_mode_actions(int param_1)

{
  uRam800102da = (uint8_t)param_1;
  if (param_1 == 1) {
    call_three_helpers_with_ram_args_104858ce();
  }
  else if (param_1 == 2) {
    call_three_helpers_with_ram_args_10485904();
  }
  else if (param_1 == 3) {
    call_three_helpers_with_ram_args_1048593a();
  }
  return;
}
