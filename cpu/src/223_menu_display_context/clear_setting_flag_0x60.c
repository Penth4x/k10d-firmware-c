/* @k10d clear_setting_flag_0x60 @ 0x104badc6
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 223_menu_display_context (unit names are model-proposed)
 * purpose:
 *   Clears bit 0x60 of the settings block for the given setting index.
 * summary:
 *   Calls setting_set with param_2 as the setting index, 0x60 as the bit mask, and 0 as the
 *   value, clearing that specific bit in both the working and master settings copies. No
 *   other side effects are visible.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_setting_flag_0x60(uint32_t param_1, int param_2, uint32_t param_x2)

{
  setting_set(param_2,0x60,0);
  return;
}
