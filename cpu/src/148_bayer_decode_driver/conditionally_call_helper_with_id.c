/* @k10d conditionally_call_helper_with_id @ 0x1046995a
 * name: model (proposed by the local model from the decompile, confidence 0.80)
 * unit: 148_bayer_decode_driver (unit names are model-proposed)
 * purpose:
 *   Calls a helper function with specific arguments only when the second parameter equals
 *   1.
 * summary:
 *   The function checks if param_2 is 1. If true, it calls
 *   forward_params_to_helper_1046a5be with param_1, the constant 4, a value derived from
 *   DAT_800042d0, the address of DAT_105a82a0, and the constant 2. If param_2 is not 1, the
 *   function returns without performing any action. The role of the helper function and the
 *   data structures involved is not clear from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void conditionally_call_helper_with_id(void *param_1,int param_2)

{
  if (param_2 == 1) {
    forward_params_to_helper_1046a5be(param_1,4,(uint)(ushort)(_DAT_800042d0/*SDRAM*/ + 1),(void *)&DAT_105a82a0/*ROM*/,2);
  }
  return;
}
