/* @k10d call_helper_with_offset_pointer_1039fcea @ 0x1039fcea
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 044_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Passes a pointer offset by 8 from the first argument and the second argument to a
 *   helper function.
 * summary:
 *   The function takes two integer parameters, adds 8 to the first to form a pointer, and
 *   passes it along with the second parameter to request_ui_sync_with_flag_10491f5c. It
 *   performs no other operations or side effects. The role of the callee is unknown, so the
 *   specific subsystem cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_offset_pointer_1039fcea(int param_1,int param_2)

{
  request_ui_sync_with_flag_10491f5c((void *)(param_1 + 8),param_2);
  return;
}
