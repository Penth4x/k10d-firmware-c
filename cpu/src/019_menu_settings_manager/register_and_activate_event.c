/* @k10d register_and_activate_event @ 0x1036c080
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 019_menu_settings_manager (unit names are model-proposed)
 * purpose:
 *   Registers an event handler at a fixed SDRAM address and activates it, returning a
 *   stored pointer.
 * summary:
 *   The function takes a parameter struct, extracts a value from offset 0xc, and passes it
 *   to two callees (eventflag_wai_flg and eventflag_clr_flg) along with the fixed SDRAM
 *   address 0x80018088. It then returns the value stored at offset 8 of the input
 *   parameter. The callees appear to perform registration and activation steps for an event
 *   or handler associated with the fixed memory location.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t register_and_activate_event(int param_1)

{
  eventflag_wai_flg((uint32_t *)0x80018088/*SDRAM*/,*(uint32_t *)(param_1 + 0xc),(uint32_t *)0x0,
               _DAT_105a2af0/*ROM*/);
  eventflag_clr_flg((uint32_t *)0x80018088/*SDRAM*/,*(uint32_t *)(param_1 + 0xc));
  return *(uint32_t *)(param_1 + 8);
}
