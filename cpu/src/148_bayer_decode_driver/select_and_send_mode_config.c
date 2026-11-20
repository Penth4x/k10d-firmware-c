/* @k10d select_and_send_mode_config @ 0x10469b50
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 148_bayer_decode_driver (unit names are model-proposed)
 * purpose:
 *   Selects a configuration table and length based on a mode flag, then passes them to a
 *   helper function.
 * summary:
 *   The function branches on param_2. If it is 1, it uses a table at DAT_105a8348, a length
 *   of 4, and a value from offset 0x262 of param_1. Otherwise, it uses a table at
 *   DAT_105a8354, a length of 7, and a zero value. It then calls
 *   forward_params_to_helper_1046a5be with param_1, the selected value, a value derived
 *   from DAT_800042d0, the table pointer, and the length.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void select_and_send_mode_config(void *param_1,int param_2)

{
  uint16_t uVar1;
  uint uVar2;
  byte *pbVar3;
  
  if (param_2 == 1) {
    pbVar3 = &DAT_105a8348/*ROM*/;
    uVar2 = (uint)*(ushort *)((int)param_1 + 0x262);
    uVar1 = 4;
  }
  else {
    pbVar3 = &DAT_105a8354/*ROM*/;
    uVar1 = 7;
    uVar2 = 0;
  }
  forward_params_to_helper_1046a5be(param_1,uVar2,(uint)(ushort)(_DAT_800042d0/*SDRAM*/ + 1),pbVar3,uVar1);
  return;
}
