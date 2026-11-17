/* @k10d adjust_clamped_counters @ 0x000c180a
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Updates several byte-sized counters by adding or subtracting param_2, applying clamping
 *   via clamp_value_to_range_000d9ac0 based on flag states.
 * summary:
 *   The function branches on bits in DAT_0003c58b and DAT_0003c4de to determine which
 *   globals to modify. It adjusts DAT_0003c568, DAT_0003c56a, DAT_0003c56b, DAT_0003c496,
 *   and DAT_0003c497 by adding or subtracting the low byte of param_2 (sign determined by
 *   param_1). When specific flags are set, it calls clamp_value_to_range_000d9ac0 to clamp
 *   the resulting values against limits stored in other globals (e.g., 0x1c, 0xa4,
 *   DAT_0003c576, DAT_0003c577).
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void adjust_clamped_counters(int param_1,uint param_2)

{
  char cVar1;
  char cVar2;
  
  cVar2 = (char)param_2;
  if ((DAT_0003c58b & 1) == 0) {
    if ((DAT_0003c4de & 2) == 0) {
      if (param_1 == 0) {
        DAT_0003c568 = DAT_0003c568 - cVar2;
      }
      else {
        DAT_0003c568 = DAT_0003c568 + cVar2;
      }
    }
    else if (DAT_0003c440 == '\x11') {
      if (param_1 == 0) {
        cVar2 = -cVar2;
      }
      DAT_0003c496 = DAT_0003c47d + cVar2;
      DAT_0003c496 = clamp_value_to_range_000d9ac0(DAT_0003c496,0x1c,0xa4);
    }
    else if ((DAT_0003c4df & 8) == 0) {
      if ((param_2 & 1) == 1) {
        cVar2 = (char)(param_2 >> 1) + '\x01';
      }
      else {
        cVar2 = (char)(param_2 >> 1);
      }
      cVar1 = (char)(param_2 >> 1);
      if (param_1 == 0) {
        cVar1 = -cVar1;
        cVar2 = -cVar2;
      }
      DAT_0003c497 = DAT_0003c480 + cVar2;
      DAT_0003c496 = DAT_0003c47d + cVar1;
      DAT_0003c497 = clamp_value_to_range_000d9ac0(DAT_0003c497,DAT_0003c576,DAT_0003c577);
      DAT_0003c496 = clamp_value_to_range_000d9ac0(DAT_0003c496,0x1c,0xa4);
    }
    else {
      if (param_1 == 0) {
        cVar2 = -cVar2;
      }
      DAT_0003c497 = DAT_0003c480 + cVar2;
      DAT_0003c497 = clamp_value_to_range_000d9ac0(DAT_0003c497,DAT_0003c576,DAT_0003c577);
    }
  }
  else {
    if ((DAT_0003c4de & 2) != 0) {
      if (DAT_0003c440 == '\x11') {
        DAT_0003c496 = DAT_0003c47d;
      }
      else {
        DAT_0003c496 = DAT_0003c47d;
        DAT_0003c497 = DAT_0003c480;
      }
    }
    if (param_1 == 0) {
      DAT_0003c56a = DAT_0003c56a - cVar2;
      DAT_0003c56b = DAT_0003c56b - cVar2;
    }
    else {
      DAT_0003c56a = DAT_0003c56a + cVar2;
      DAT_0003c56b = DAT_0003c56b + cVar2;
    }
  }
  return;
}
