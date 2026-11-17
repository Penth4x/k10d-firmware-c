/* @k10d screen_registry_enable_chk @ 0x1047fb16
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed check_screen_activation_gate)
 * unit: 171_settings_registry (unit names are model-proposed)
 * purpose:
 *   Determines if a screen is enabled or can be activated on-demand, returning a boolean
 *   gate status.
 * summary:
 *   The function first checks if the screen is already enabled via
 *   screen_registry_cur_enabled. If not, it checks a condition via screen_enable_by_key; if
 *   that passes, it attempts activation via screen_activate_ondemand. If activation fails,
 *   it calls clear_entry_flags_in_table, likely to reset or disable the screen state.
 *   Returns true if the screen is active or successfully activated.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool screen_registry_enable_chk(void *param_1,uint8_t *param_2)

{
  char cVar2;
  int iVar1;
  bool bVar3;
  
  cVar2 = screen_registry_cur_enabled((void *)_DAT_80010030/*SDRAM*/,param_2);
  bVar3 = true;
  if (cVar2 == '\0') {
    iVar1 = screen_enable_by_key((void *)_DAT_80010030/*SDRAM*/,param_2);
    if (iVar1 == 0) {
      bVar3 = false;
    }
    else {
      bVar3 = screen_activate_ondemand(param_1,param_2);
      if (!bVar3) {
        clear_entry_flags_in_table((void *)_DAT_80010030/*SDRAM*/,param_2);
      }
    }
  }
  return bVar3;
}
