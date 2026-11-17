/* @k10d clamp_value_to_max_50 @ 0x104b6828
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 218_config_parser (unit names are model-proposed)
 * purpose:
 *   Calls a helper to compute a value, stores it in a struct field, and clamps it to a
 *   maximum of 50.
 * summary:
 *   The function calls parse_numeric_expression with param_1, 0, param_2, and the current
 *   r7 register. The return value is stored at offset 0x2c of the object pointed to by
 *   param_1. If the value exceeds 5000, it is overwritten with 0x32 (50). The final value
 *   at offset 0x2c is returned. The specific subsystem is not identifiable from the
 *   provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t clamp_value_to_max_50(int param_1,char *param_2)

{
  uint uVar1;
  void *r7_in;
  
  uVar1 = parse_numeric_expression((uint32_t *)param_1,0,param_2,r7_in);
  *(uint *)(param_1 + 0x2c) = uVar1;
  if (5000 < uVar1) {
    *(uint32_t *)(param_1 + 0x2c) = 0x32;
  }
  return *(uint32_t *)(param_1 + 0x2c);
}
