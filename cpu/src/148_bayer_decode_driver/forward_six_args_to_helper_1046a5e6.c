/* @k10d forward_six_args_to_helper_1046a5e6 @ 0x1046a5e6
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 148_bayer_decode_driver (unit names are model-proposed)
 * purpose:
 *   Passes its six arguments to iterate_byte_list_and_call_helper with the third and fourth
 *   swapped.
 * summary:
 *   This is a thin wrapper that calls iterate_byte_list_and_call_helper, forwarding
 *   param_1, param_4, the upper half of param_3, the upper half of param_2, the global
 *   _DAT_800042c8, param_5, and param_6. It performs no other computation or side effects.
 *   The role of the underlying operation is not determinable from this code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void forward_six_args_to_helper_1046a5e6(void *param_1,uint32_t param_2,uint32_t param_3,byte *param_4,
                 uint16_t param_5,uint16_t param_6)

{
  iterate_byte_list_and_call_helper(param_1,param_4,((uint16_t)param_3),((uint16_t)param_2),_DAT_800042c8/*SDRAM*/,param_5,param_6);
  return;
}
