/* @k10d dispatch_three_helper_calls @ 0x103f5000
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 088_capture_settings_menu (unit names are model-proposed)
 * purpose:
 *   Calls three helper functions in sequence, passing the first two parameters to the
 *   middle call.
 * summary:
 *   The function is a thin wrapper that invokes read_setting_and_send_packet with no
 *   arguments, then update_state_and_notify with param_1 and param_2, and finally
 *   register_six_menu_items_103f6aee with param_1. It serves as virtual method slot 7 of
 *   class cls_10597c80. No side effects or state modifications are visible in this function
 *   itself.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_three_helper_calls(cls_10597c80 *param_1,uint32_t param_2)

{
  read_setting_and_send_packet((uint32_t)param_1);
  update_state_and_notify((void*)param_1,param_2);
  register_six_menu_items_103f6aee((void*)param_1);
  return;
}
