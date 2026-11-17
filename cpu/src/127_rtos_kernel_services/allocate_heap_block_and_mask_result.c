/* @k10d allocate_heap_block_and_mask_result @ 0x1045a44e
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Allocates a heap block of size param_2, passes the result to an unknown helper, and
 *   returns the low 16 bits of that helper's return value.
 * summary:
 *   The function calls abs_uint32 with param_2, then passes the high and low 32-bit halves
 *   of that result along with constants 0x3ff80000 and 0 to multiply_two_floats. It then
 *   calls normalize_fixed_point_value_105448ac with the return values from the previous
 *   call (r4 and r5) and returns the lower 16 bits of that final result. The module context
 *   suggests RTOS/heap operations, but the specific role of the intermediate calls is not
 *   clear from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint allocate_heap_block_and_mask_result(uint32_t param_1,uint32_t param_2)

{
  uint extraout_r4;
  uint uVar1;
  uint extraout_r5;
  uint64_t uVar2;
  
  uVar2 = abs_uint32(param_2);
  multiply_two_floats((uint)((ulonglong)uVar2 >> 0x20),(uint)uVar2,0x3ff80000,0);
  uVar1 = normalize_fixed_point_value_105448ac(extraout_r4,extraout_r5);
  return uVar1 & 0xffff;
}
