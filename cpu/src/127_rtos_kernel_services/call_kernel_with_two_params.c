/* @k10d call_kernel_with_two_params @ 0x1045a420
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Invokes a kernel entry via three helper calls and returns the low 16 bits of the final
 *   result.
 * summary:
 *   The function calls abs_uint32 with param_2, then passes the high and low 32-bit halves
 *   of that result along with two constants (0x3fe570a3, 0xd70a3d71) to
 *   multiply_two_floats. It then calls normalize_fixed_point_value_105448ac with the return
 *   values from the previous call (r4, r5) and returns the lower 16 bits of that final
 *   result. Given the module context (rtos_wrappers_and_heap), this is likely a wrapper for
 *   a specific RTOS kernel primitive, but the specific operation is not identifiable from
 *   the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint call_kernel_with_two_params(uint32_t param_1,uint32_t param_2)

{
  uint extraout_r4;
  uint uVar1;
  uint extraout_r5;
  uint64_t uVar2;
  
  uVar2 = abs_uint32(param_2);
  multiply_two_floats((uint)((ulonglong)uVar2 >> 0x20),(uint)uVar2,0x3fe570a3,0xd70a3d71);
  uVar1 = normalize_fixed_point_value_105448ac(extraout_r4,extraout_r5);
  return uVar1 & 0xffff;
}
