/* @k10d check_and_init_state_flag @ 0x100f10b8
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 001_sram_param_manager (unit names are model-proposed)
 * purpose:
 *   Checks bit 1 of a global state flag and conditionally calls initialization helpers,
 *   returning a status code.
 * summary:
 *   Reads DAT_800480cc and tests bit 1. If clear, calls
 *   set_bit1_in_dat_800482d4_100f1d98(0) and returns 0. If set, calls
 *   poll_status_until_bit5_set and wait_for_event_0x61a_once(2); if both return 0, calls
 *   set_bit1_in_dat_800482d4_100f1d98(1) and returns 0. Otherwise returns -1 (0xffffffff).
 *   The specific subsystem is not identifiable from the pseudocode or callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_and_init_state_flag(void)

{
  int iVar1;
  uint32_t uVar2;
  
  uVar2 = 0xffffffff;
  if ((DAT_800480cc/*SDRAM*/ & 2) == 0) {
    uVar2 = 0;
    set_bit1_in_dat_800482d4_100f1d98(0);
  }
  else {
    iVar1 = poll_status_until_bit5_set();
    if ((iVar1 == 0) && (iVar1 = wait_for_event_0x61a_once(2), iVar1 == 0)) {
      set_bit1_in_dat_800482d4_100f1d98(1);
      uVar2 = 0;
    }
  }
  return uVar2;
}
