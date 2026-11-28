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

uint compute_complement_of_helper_result(uint32_t arg1, short arg2, int arg3, uint arg4)
{
  uint raw_ev_index;

  raw_ev_index = find_exposure_value_index(arg1, arg2, arg3, arg4);
  return 0x40 - raw_ev_index & 0xff;
}
