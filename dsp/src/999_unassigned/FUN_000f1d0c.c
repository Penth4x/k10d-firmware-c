/* @k10d FUN_000f1d0c @ 0x000f1d0c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000f1d0c(void)

{
  ushort uVar1;
  
  set_bit7_and_notify();
  clear_state_block();
  clear_six_word_globals_000dbb52();
  _DAT_0003c828 = 0;
  _DAT_0003c82c = 0;
  _DAT_0003c884 = 1;
  DAT_0003c80f = DAT_0003c80f & 0xfc | 1;
  compute_scaled_values();
  uVar1 = 0;
  do {
    FUN_000d5642(1);
    compute_position_deltas();
    FUN_000dbc14();
    clamp_accumulated_values();
    uVar1 = uVar1 + 1;
  } while (uVar1 < 1000);
  clear_bit7_and_notify();
  clear_state_block();
  clear_six_word_globals_000dbb52();
  _DAT_0003c828 = 0;
  _DAT_0003c82c = 0;
  uVar1 = 0;
  do {
    FUN_000d5642(1);
    compute_position_deltas();
    FUN_000dbc14();
    clamp_accumulated_values();
    update_two_offset_values();
    uVar1 = uVar1 + 1;
  } while (uVar1 < 5000);
  uVar1 = 0;
  do {
    FUN_000d5642(1);
    compute_position_deltas();
    FUN_000dbc14();
    clamp_accumulated_values();
    update_two_offset_values();
    clamp_and_store_two_values_000f22ea((int)(short)uVar1);
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x400);
  return;
}
