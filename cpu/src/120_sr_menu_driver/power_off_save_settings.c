/* @k10d power_off_save_settings @ 0x10433f06
 * name: verified (structural evidence: emulator: runs on transition 3; flash driver erases sector 0x10004000 and programs the 0x344-byte block)
 * unit: 120_sr_menu_driver (unit names are model-proposed)
 * purpose:
 *   Power-off step (mode transition 3): saves the settings blocks to program flash
 *   (0x10483678 -> 0x10004000, 0x1048376c -> 0x10005000), bracketed by a busy indicator.
 * summary:
 *   VERIFIED: emulator: runs on transition 3; flash driver erases sector 0x10004000 and
 *   programs the 0x344-byte block
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void power_off_save_settings(int param_1)

{
  int iVar1;
  
  dispatch_context_request(*(uint32_t *)(param_1 + 0x28),0,1,1);
  initialize_settings_block(*(uint32_t *)(param_1 + 0x10));
  iVar1 = sr_driver_singleton();
  iVar1 = *(int *)(iVar1 + 4);
  settings_save_block0(iVar1);
  settings_save_block1(iVar1);
  dispatch_context_request(*(uint32_t *)(param_1 + 0x28),0,0,1);
  return;
}
