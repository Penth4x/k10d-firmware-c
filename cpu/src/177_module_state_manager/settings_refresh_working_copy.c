/* @k10d settings_refresh_working_copy @ 0x1048481a
 * name: verified (structural evidence: decomp)
 * unit: 177_module_state_manager (unit names are model-proposed)
 * purpose:
 *   Copies the 0x344-byte master settings block (*(obj+0xc)) into the working copy at
 *   obj+0x14.
 * summary:
 *   VERIFIED: decomp
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void settings_refresh_working_copy(void *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)((int)param_1 + 0xc);
  iVar3 = 0x344;
  do {
    iVar2 = iVar3 + -1;
    *(uint8_t *)((int)param_1 + iVar3 + 0x13) = *(uint8_t *)(iVar2 + iVar1);
    iVar3 = iVar2;
  } while (iVar2 != 0);
  notify_settings_changed(param_1);
  return;
}
