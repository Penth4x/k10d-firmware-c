/* @k10d update_state_and_call_helper @ 0x104698ec
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 148_bayer_decode_driver (unit names are model-proposed)
 * purpose:
 *   Sets fields at offsets 0x250 and 0x252 in a struct and conditionally calls a helper
 *   with those values.
 * summary:
 *   If param_2 is 0, writes 5 to offset 0x250 and sets offset 0x252 to either
 *   DAT_800042d0+1 or +5 based on param_3. If param_2 is non-zero and even, calls
 *   forward_six_args_to_helper_1046a5e6 with the values at 0x250 and 0x252, then increments
 *   the value at 0x252. The role of the struct and the helper is not determinable from the
 *   provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void update_state_and_call_helper(void *param_1,uint param_2,int param_3)

{
  if (param_2 == 0) {
    *(uint16_t *)((int)param_1 + 0x250) = 5;
    if (param_3 == 1) {
      *(short *)((int)param_1 + 0x252) = _DAT_800042d0/*SDRAM*/ + 1;
    }
    else {
      *(short *)((int)param_1 + 0x252) = _DAT_800042d0/*SDRAM*/ + 5;
    }
  }
  if (((param_2 & 1) == 0) && (param_2 != 0)) {
    forward_six_args_to_helper_1046a5e6(param_1,(uint)*(ushort *)((int)param_1 + 0x250),
                 (uint)*(ushort *)((int)param_1 + 0x252),&DAT_105a829c/*ROM*/,0,3);
    *(short *)((int)param_1 + 0x252) = *(short *)((int)param_1 + 0x252) + 1;
  }
  return;
}
