/* @k10d call_helper_with_offset_pointer_1039fd48 @ 0x1039fd48
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 044_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Passes a pointer to param_1+8 to a single helper function.
 * summary:
 *   The function takes an integer parameter, adds 8 to it to form a pointer, and passes
 *   that pointer to request_ui_sync_code_4. It performs no other operations and returns
 *   void. The role of the callee is unknown, so the specific subsystem cannot be
 *   determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_offset_pointer_1039fd48(int param_1)

{
  request_ui_sync_code_4((void *)(param_1 + 8));
  return;
}
