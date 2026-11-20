/* @k10d wait_for_bit4_toggle @ 0x000ef066
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Sets a flag, polls DAT_00000005 bit 2 until it toggles, and restores the initial state.
 * summary:
 *   The function saves and modifies DAT_00000401 and _DAT_00000001, then calls
 *   toggle_status_flags_with_delays five times. It sets bit 7 of DAT_0000000a and enters
 *   two polling loops that call toggle_status_flags_with_delays while waiting for bit 2 of
 *   DAT_00000005 to change state. Finally, it restores the saved values and clears bit 7 of
 *   DAT_0000000a.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wait_for_bit4_toggle(void)

{
  uint32_t uVar1;
  byte bVar2;
  byte bVar3;
  
  bVar2 = DAT_00000401;
  uVar1 = _DAT_00000001;
  DAT_00000401 = DAT_00000401 | 0xdb;
  bVar3 = 0;
  do {
    toggle_status_flags_with_delays();
    bVar3 = bVar3 + 1;
  } while (bVar3 < 5);
  DAT_0000000a = DAT_0000000a | 0x80;
  while ((DAT_00000005 & 4) == 0) {
    toggle_status_flags_with_delays();
  }
  while ((DAT_00000005 & 4) != 0) {
    toggle_status_flags_with_delays();
  }
  DAT_00000401 = bVar2;
  _DAT_00000001 = CONCAT13((char)uVar1,(undefined3)_DAT_00000001);
  DAT_0000000a = DAT_0000000a & 0x7f;
  return;
}
