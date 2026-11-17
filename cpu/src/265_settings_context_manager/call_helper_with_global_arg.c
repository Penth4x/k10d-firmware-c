/* @k10d call_helper_with_global_arg @ 0x10501792
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 265_settings_context_manager (unit names are model-proposed)
 * purpose:
 *   Invokes a single helper passing a pointer from the first argument and a global
 *   constant.
 * summary:
 *   The function takes a single pointer argument, dereferences the second word (offset +4)
 *   of the object pointed to by param_1, and passes it along with the global constant
 *   _DAT_105a7de4 to the callee poll_context_flag_until_status_set. It is called from
 *   execute_capture_sequence, suggesting it is part of the capture task's setup or
 *   teardown, but the specific role of the callee and the global constant is not
 *   determinable from this snippet alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void call_helper_with_global_arg(int param_1)

{
  poll_context_flag_until_status_set(*(void **)(param_1 + 4),_DAT_105a7de4/*ROM*/);
  return;
}
