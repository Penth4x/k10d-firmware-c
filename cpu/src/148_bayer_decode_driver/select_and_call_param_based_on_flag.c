/* @k10d select_and_call_param_based_on_flag @ 0x10469c40
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 148_bayer_decode_driver (unit names are model-proposed)
 * purpose:
 *   Selects a data pointer and two integer parameters based on param_2, then calls a helper
 *   with them.
 * summary:
 *   The function branches on param_2. If param_2 is 1, it uses a pointer to DAT_105a83c4,
 *   reads a 16-bit value from param_1+0x262, and sets a constant to 4. Otherwise, it uses a
 *   pointer to DAT_105a83dc and sets constants to 7 and 9. It then calls
 *   forward_params_to_helper_1046a5be with param_1, the selected integer, a value derived
 *   from _DAT_800042d0, the selected pointer, and the other constant.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void select_and_call_param_based_on_flag(void *param_1,int param_2)

{
  uint16_t uVar1;
  uint uVar2;
  byte *pbVar3;
  
  if (param_2 == 1) {
    pbVar3 = (byte *)&DAT_105a83c4/*ROM*/;
    uVar2 = (uint)*(ushort *)((int)param_1 + 0x262);
    uVar1 = 4;
  }
  else {
    pbVar3 = (byte *)&DAT_105a83dc/*ROM*/;
    uVar1 = 7;
    uVar2 = 9;
  }
  forward_params_to_helper_1046a5be(param_1,uVar2,(uint)(ushort)(_DAT_800042d0/*SDRAM*/ + 1),pbVar3,uVar1);
  return;
}
