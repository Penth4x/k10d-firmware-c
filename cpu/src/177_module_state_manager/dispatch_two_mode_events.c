/* @k10d dispatch_two_mode_events @ 0x10484ad8
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 177_module_state_manager (unit names are model-proposed)
 * purpose:
 *   Invokes a shared event handler at 0x10428458 twice with derived arguments.
 * summary:
 *   The function calls the code pointer at 0x10428458 first with param_1 + 0x14, then again
 *   with the value stored at param_1 + 0xc and param_2. It is called from
 *   run_mode_event_loop, suggesting it forwards specific event or state parameters to a
 *   common handler. No other callees are identified, and the specific role of the handler
 *   at 0x10428458 is not defined in the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_two_mode_events(int param_1,uint32_t param_2)

{
  (*(code *)0x10428458/*ROM*/)(param_1 + 0x14);
  (*(code *)0x10428458/*ROM*/)(*(uint32_t *)(param_1 + 0xc),param_2);
  return;
}
