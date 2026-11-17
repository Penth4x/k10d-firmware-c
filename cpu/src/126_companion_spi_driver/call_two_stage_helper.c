/* @k10d call_two_stage_helper @ 0x10438910
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Chains two helper calls, passing the first result as the second argument to the first
 *   call.
 * summary:
 *   Reads a pointer from offset 4 of the input object, passes it with constant 0x447a0000
 *   to compute_float_division, then feeds that result into count_leading_zeros and returns
 *   the final value. Both callees are unnamed, so the subsystem role is not determinable
 *   from this code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int call_two_stage_helper(int param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = compute_float_division(*(uint32_t *)(param_1 + 4),0x447a0000);
  iVar2 = count_leading_zeros(uVar1);
  return iVar2;
}
