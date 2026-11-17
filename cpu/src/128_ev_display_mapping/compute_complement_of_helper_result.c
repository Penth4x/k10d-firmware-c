/* @k10d compute_complement_of_helper_result @ 0x1045b000
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 128_ev_display_mapping (unit names are model-proposed)
 * purpose:
 *   Calls a helper and returns the 8-bit two's complement of its result.
 * summary:
 *   Invokes find_exposure_value_index with the four input parameters. Takes the returned
 *   value, masks it to 8 bits, and subtracts it from 0x40 (64) to produce the final return
 *   value. The specific role of the helper is unknown, so the operation is described
 *   mechanically as a complement calculation.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint compute_complement_of_helper_result(uint32_t param_1,short param_2,int param_3,uint param_4)

{
  uint uVar1;
  
  uVar1 = find_exposure_value_index(param_1,param_2,param_3,param_4);
  return 0x40 - uVar1 & 0xff;
}
