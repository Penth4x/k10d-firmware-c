/* @k10d compute_half_distance_from_base @ 0x10444710
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Returns half the difference between param_2 and the value returned by
 *   call_two_helpers_in_sequence_104446fc, or 0 if that value is 0.
 * summary:
 *   Calls call_two_helpers_in_sequence_104446fc with param_1 to obtain a base value. If the
 *   base is non-zero, it computes (param_2 - base) / 2 and returns the result; otherwise it
 *   returns 0. The division by 2 suggests a midpoint or half-offset calculation, but the
 *   specific subsystem is not identifiable from the available information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int compute_half_distance_from_base(uint32_t param_1,void *param_2)

{
  int iVar1;
  
  iVar1 = call_two_helpers_in_sequence_104446fc(param_1);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = ((int)param_2 - iVar1) / 2;
  }
  return iVar1;
}
