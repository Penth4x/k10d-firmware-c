/* @k10d FUN_000f25be @ 0x000f25be
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void FUN_000f25be(void)

{
  short sVar2;
  int iVar1;
  
  clear_state_block();
  clear_six_word_globals_000dbb52();
  clear_tenth_global_words();
  set_bit7_and_notify();
  DAT_0003c8c8 = 0;
  sVar2 = 0;
  do {
    FUN_000d5642(1);
    update_state_flags_and_status_byte(1000);
    sVar2 = sVar2 + 1;
  } while (sVar2 < 500);
  DAT_0003c8c8 = 2;
  sVar2 = 0;
  do {
    FUN_000d5642(1);
    update_state_flags_and_status_byte(1000);
    sVar2 = sVar2 + 1;
  } while (sVar2 < 2000);
  iVar1 = 0;
  do {
    FUN_000d5642(1);
    compute_position_deltas();
    FUN_000dbc14();
    clamp_and_store_two_shorts_000f2676(iVar1);
    iVar1 = (int)(short)((short)iVar1 + 1);
  } while (iVar1 < 1000);
  DAT_0003c8c8 = 0;
  sVar2 = 0;
  do {
    FUN_000d5642(1);
    update_state_flags_and_status_byte(1000);
    sVar2 = sVar2 + 1;
  } while (sVar2 < 500);
  return;
}
