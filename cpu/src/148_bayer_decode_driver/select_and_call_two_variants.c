/* @k10d select_and_call_two_variants @ 0x10469b90
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 148_bayer_decode_driver (unit names are model-proposed)
 * purpose:
 *   Selects one of two parameter sets based on param_2 and calls a helper with them.
 * summary:
 *   The function branches on param_2. If param_2 is 1, it uses a pointer to DAT_105a836c,
 *   reads a value from param_1+0x262, and sets a constant to 4. Otherwise, it uses a
 *   pointer to DAT_105a8380, sets the value to 0, and sets the constant to 7. It then calls
 *   forward_params_to_helper_1046a5be with param_1, the selected value, a value derived
 *   from _DAT_800042d0, the selected pointer, and the selected constant.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void select_and_call_two_variants(int param_1,int param_2)

{
  uint16_t uVar1;
  uint uVar2;
  byte *pbVar3;
  
  if (param_2 == 1) {
    pbVar3 = &DAT_105a836c/*ROM*/;
    uVar2 = (uint)*(ushort *)(param_1 + 0x262);
    uVar1 = 4;
  }
  else {
    pbVar3 = &DAT_105a8380/*ROM*/;
    uVar1 = 7;
    uVar2 = 0;
  }
  forward_params_to_helper_1046a5be((void *)param_1,uVar2,(uint)(ushort)(_DAT_800042d0/*SDRAM*/ + 1),pbVar3,uVar1);
  return;
}
