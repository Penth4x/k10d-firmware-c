/* @k10d clear_flag_and_call_helper_103bb95c @ 0x103bb95c
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 054_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Clears the byte at offset 0x39 of the object and calls an unnamed helper.
 * summary:
 *   This virtual method (slot 7 of cls_10594e70) writes 0 to the byte at offset 0x39 of the
 *   object passed in param_1, then calls update_state_and_notify with no arguments. The
 *   object size is 0x3c bytes, so offset 0x39 is near the end of the structure. The role of
 *   the cleared flag and the helper's behavior are not determinable from the available
 *   information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_flag_and_call_helper_103bb95c(int param_1)

{
  *(uint8_t *)(param_1 + 0x39) = 0;
  update_state_and_notify((uint32_t *)__frv_reg_unset(4),__frv_reg_unset(5));
  return;
}
