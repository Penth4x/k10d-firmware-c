/* @k10d call_three_initializers_104835b2 @ 0x104835b2
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 177_module_state_manager (unit names are model-proposed)
 * purpose:
 *   Invokes three consecutive helper functions with the same object pointer argument.
 * summary:
 *   The function takes a single void pointer and passes it to three callees in sequence:
 *   dispatch_object_state_change_10483628, dispatch_object_state_change_1048371c, and
 *   iterate_three_object_groups. It is called as virtual method slot 3 of class
 *   cls_105ab8ac. No return value is produced and no other side effects are visible in the
 *   pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_three_initializers_104835b2(void *param_1)

{
  dispatch_object_state_change_10483628(param_1);
  dispatch_object_state_change_1048371c(param_1);
  iterate_three_object_groups(param_1);
  return;
}
