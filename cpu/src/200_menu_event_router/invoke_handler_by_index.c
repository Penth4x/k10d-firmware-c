/* @k10d invoke_handler_by_index @ 0x104985d4
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 200_menu_event_router (unit names are model-proposed)
 * purpose:
 *   Calls a handler function stored in an array at a given index with a parameter.
 * summary:
 *   The function takes an array of function pointers (param_1), an index (param_2), and a
 *   parameter (param_3). If the index is 0 or 1, it calls the function at that index if it
 *   is non-null. If the index is 2, it calls both the functions at index 0 and 1 if they
 *   are non-null. The callee dispatch_two_stage_control_command is the handler being
 *   invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_handler_by_index(int *param_1,int param_2,uint32_t param_3)

{
  if ((param_2 == 0) || (param_2 == 1)) {
    if (param_1[param_2] != 0) {
      dispatch_two_stage_control_command((void *)param_1[param_2],param_3);
    }
  }
  else if (param_2 == 2) {
    if (*param_1 != 0) {
      dispatch_two_stage_control_command((void *)*param_1,param_3);
    }
    if (param_1[1] != 0) {
      dispatch_two_stage_control_command((void *)param_1[1],param_3);
    }
  }
  return;
}
