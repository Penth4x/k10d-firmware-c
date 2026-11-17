/* @k10d call_helper_when_flag_is_one @ 0x1046998a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 148_bayer_decode_driver (unit names are model-proposed)
 * purpose:
 *   Invokes forward_params_to_helper_1046a5be with a fixed argument set only when param_2
 *   equals 1.
 * summary:
 *   Checks if the second argument is 1. If so, calls forward_params_to_helper_1046a5be
 *   passing param_1, the constant 4, the value of DAT_800042d0 incremented by 1, the
 *   address of DAT_105a82b4, and the constant 6. Returns void otherwise. The role of the
 *   callee and the data structures involved is not determinable from this snippet alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void call_helper_when_flag_is_one(void *param_1,int param_2)

{
  if (param_2 == 1) {
    forward_params_to_helper_1046a5be(param_1,4,(uint)(ushort)(_DAT_800042d0/*SDRAM*/ + 1),(void*)&DAT_105a82b4/*ROM*/,6);
  }
  return;
}
