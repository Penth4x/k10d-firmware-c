/* @k10d compute_clamped_offset_and_update_registers @ 0x000c2464
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Clamps a computed value between two bounds, stores it, and updates three related offset
 *   registers based on a flag.
 * summary:
 *   The function checks three global flags (DAT_0003c410, DAT_0003c4de, DAT_0003c440)
 *   before proceeding. It calculates a value from _DAT_0003c5a0, clamps it between
 *   DAT_0003c3ad and DAT_0003c3ae, and stores the result in DAT_0003c566. It then calls
 *   clear_flag_and_conditional_call and updates DAT_0003c568, DAT_0003c56a, and
 *   DAT_0003c56b using different formulas depending on bit 6 of DAT_0003c4de. Finally, it
 *   calls FUN_000c145c and dispatch_on_state_value_000c3740.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void compute_clamped_offset_and_update_registers(void)

{
  uint uVar1;
  char cVar2;
  
  if ((((DAT_0003c410 & 0x40) != 0) && ((DAT_0003c4de & 2) == 0)) && (DAT_0003c440 != '\x06')) {
    uVar1 = 0x8a - ((int)(uint)_DAT_0003c5a0 >> 2);
    if ((int)uVar1 < (int)(uint)DAT_0003c3ad) {
      uVar1 = (uint)DAT_0003c3ad;
    }
    if ((int)(uint)DAT_0003c3ae < (int)uVar1) {
      uVar1 = (uint)DAT_0003c3ae;
    }
    cVar2 = (char)uVar1;
    DAT_0003c566 = cVar2;
    clear_flag_and_conditional_call();
    if ((DAT_0003c4de & 0x40) == 0) {
      DAT_0003c568 = DAT_0003c48a + cVar2 + DAT_0003c569;
      DAT_0003c56a = (DAT_0003c48a + cVar2 + DAT_0003c569) - DAT_0003c48d;
      DAT_0003c56b = (DAT_0003c48a + cVar2 + DAT_0003c569) - DAT_0003c48d;
      if ((DAT_0003c589 & 1) != 0) {
        DAT_0003c56a = DAT_0003c56a + DAT_0003c567;
      }
    }
    else {
      cVar2 = cVar2 + '@';
      DAT_0003c568 = DAT_0003c569 + cVar2;
      DAT_0003c56a = DAT_0003c569 + cVar2;
      DAT_0003c56b = cVar2 + DAT_0003c569;
    }
    FUN_000c145c();
    dispatch_on_state_value_000c3740();
  }
  return;
}
