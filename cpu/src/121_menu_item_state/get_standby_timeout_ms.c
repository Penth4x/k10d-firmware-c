/* @k10d get_standby_timeout_ms @ 0x104347e2
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 121_menu_item_state (unit names are model-proposed)
 * purpose:
 *   Returns the standby timeout duration in milliseconds based on the current setting
 *   value.
 * summary:
 *   The function first checks a condition via check_object_field_via_helper and refreshes
 *   the settings working copy if true. It then reads setting ID 0x9b using setting_get and
 *   maps the value to a specific timeout duration: 60s, 180s, 300s, 600s, or 1800s
 *   (converted to milliseconds), or 0 if disabled/unknown. This behavior is consistent with
 *   a camera power-saving or standby timer configuration.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_standby_timeout_ms(int param_1)

{
  bool bVar2;
  uint32_t uVar1;
  
  bVar2 = check_object_field_via_helper(*(void **)(param_1 + 0xc));
  if (bVar2) {
    settings_refresh_working_copy(*(void **)(param_1 + 0xc));
  }
  uVar1 = setting_get(*(int *)(param_1 + 0xc),0x9b);
  switch(uVar1) {
  case 0:
    uVar1 = 60000;
    break;
  case 1:
    uVar1 = 180000;
    break;
  case 2:
    uVar1 = 300000;
    break;
  case 3:
    uVar1 = 600000;
    break;
  case 4:
    uVar1 = 1800000;
    break;
  case 5:
  default:
    uVar1 = 0;
  }
  return uVar1;
}
