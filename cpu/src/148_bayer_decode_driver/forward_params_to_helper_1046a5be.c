/* @k10d forward_params_to_helper_1046a5be @ 0x1046a5be
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 148_bayer_decode_driver (unit names are model-proposed)
 * purpose:
 *   Forwards its five arguments to iterate_byte_list_and_call_helper with two fields
 *   swapped and a fixed 0xff tail.
 * summary:
 *   This is a thin wrapper that calls iterate_byte_list_and_call_helper, passing param_1,
 *   param_4, the upper half of param_3, the upper half of param_2, the global DAT_800042c8,
 *   param_5, and the constant 0xff. It performs no other logic and returns void. The
 *   specific subsystem role cannot be determined from this code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void forward_params_to_helper_1046a5be(void *param_1,uint32_t param_2,uint32_t param_3,byte *param_4,
                 uint16_t param_5)

{
  iterate_byte_list_and_call_helper(param_1,param_4,((uint16_t)((uint64_t)(param_3) >> 16)),((uint16_t)((uint64_t)(param_2) >> 16)),_DAT_800042c8/*SDRAM*/,param_5,0xff);
  return;
}
