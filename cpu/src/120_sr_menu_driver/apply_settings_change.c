/* @k10d apply_settings_change @ 0x104341fc
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 120_sr_menu_driver (unit names are model-proposed)
 * purpose:
 *   Refreshes the settings working copy and dispatches change notifications based on a mode
 *   parameter.
 * summary:
 *   The function first calls settings_refresh_working_copy to update the local settings
 *   block from the master. It then compares the current state at offset 0x50 with the new
 *   parameter (param_2). If the state differs, it calls
 *   refresh_settings_if_changed_104343d8 and sets a flag. It subsequently calls
 *   clear_setting_flag_0x60 and clear_settings_if_flag_set with the object pointer,
 *   settings pointer, and a flag indicating whether a change occurred. Finally, it calls
 *   forward_two_fields_to_helper_104341e4 and apply_settings_and_dispatch, and updates the
 *   state byte at offset 0x50 to the new parameter value.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void apply_settings_change(int param_1,int param_2,int param_3)

{
  bool bVar1;
  uint32_t uVar2;
  
  settings_refresh_working_copy(*(void **)(param_1 + 0xc));
  bVar1 = false;
  if (param_2 == 0x12) {
    uVar2 = 1;
    if (*(char *)(param_1 + 0x50) != '\x12') {
      refresh_settings_if_changed_104343d8(param_1);
      bVar1 = true;
    }
LAB_10434234:
    if (!bVar1) goto LAB_1043424a;
  }
  else {
    uVar2 = 0;
    if (*(char *)(param_1 + 0x50) != '\x12') goto LAB_10434234;
  }
  clear_setting_flag_0x60(*(uint32_t *)(param_1 + 0x28),*(uint32_t *)(param_1 + 0xc),uVar2);
LAB_1043424a:
  forward_two_fields_to_helper_104341e4(param_1);
  clear_settings_if_flag_set(*(uint32_t *)(param_1 + 0x28),*(uint32_t *)(param_1 + 0xc),uVar2);
  apply_settings_and_dispatch(param_1,param_2,param_3);
  *(char *)(param_1 + 0x50) = (char)param_2;
  return;
}
