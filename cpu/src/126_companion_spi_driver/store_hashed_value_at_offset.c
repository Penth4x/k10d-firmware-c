/* @k10d store_hashed_value_at_offset @ 0x104388e8
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Computes a value from param_2 via two helper calls and stores the result at param_1 +
 *   4.
 * summary:
 *   The function calls compute_log2_index with param_2 to obtain an intermediate value,
 *   then passes that value and the constant 0x3a83126f to compute_float_division. The
 *   result of compute_float_division is written to the memory location at param_1 + 4. The
 *   specific roles of the callees and the constant are not determinable from the provided
 *   information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_hashed_value_at_offset(int param_1,uint param_2)

{
  int iVar1;
  uint32_t uVar2;
  
  iVar1 = compute_log2_index(param_2);
  uVar2 = compute_float_division(iVar1,0x3a83126f);
  *(uint32_t *)(param_1 + 4) = uVar2;
  return;
}
