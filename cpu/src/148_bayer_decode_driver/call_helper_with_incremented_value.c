/* @k10d call_helper_with_incremented_value @ 0x10469172
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 148_bayer_decode_driver (unit names are model-proposed)
 * purpose:
 *   Calls a helper passing param_1, zero, an incremented global, a code pointer, and 7.
 * summary:
 *   The function is a thin wrapper that invokes forward_params_to_helper_1046a5be with five
 *   arguments. The third argument is the value of global DAT_800042d0 incremented by one
 *   and cast to uint. The fourth argument is the address 0x105a808c, likely a function
 *   pointer or data structure in ROM. The fifth argument is the constant 7. No other
 *   operations are performed.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void call_helper_with_incremented_value(void *param_1)

{
  forward_params_to_helper_1046a5be(param_1,0,(uint)(ushort)(_DAT_800042d0/*SDRAM*/ + 1),&DAT_105a808c/*ROM*/,7);
  return;
}
