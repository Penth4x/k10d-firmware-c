/* @k10d modset_dumper_menu_gate @ 0x1042fd5e
 * name: verified (structural evidence: decomp + d314 trace: the dumper-item visibility gate (was call_handler_if_gate_passes))
 * unit: 114_mode_context_manager (unit names are model-proposed)
 * purpose:
 *   Display gate for the MODSET service/dumper menu item: activates rear MENU screen mode 3
 *   (app_mode_activate), then calls check_modset_parser_status to set the show-flag
 *   (param_2) from MODSET.TXT existence.
 * summary:
 *   VERIFIED: decomp + d314 trace: the dumper-item visibility gate (was
 *   call_handler_if_gate_passes)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t modset_dumper_menu_gate(uint32_t param_1,uint32_t *param_2)

{
  int iVar1;
  uint32_t uVar2;
  
  iVar1 = app_mode_activate(param_1,3);
  uVar2 = 0;
  if (iVar1 != 0) {
    iVar1 = menumgr_singleton_get();
    uVar2 = check_modset_parser_status(*(uint32_t *)(iVar1 + 4),param_2);
  }
  return uVar2;
}
