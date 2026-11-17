/* @k10d clamp_value_to_max_5000 @ 0x104b6856
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 218_config_parser (unit names are model-proposed)
 * purpose:
 *   Calls a helper to compute a value, clamps it to 50 if it exceeds 5000, stores it in a
 *   struct field, and returns it.
 * summary:
 *   The function calls parse_numeric_expression with param_1, 0, param_2, and the current
 *   r7 register. It stores the result in the field at offset 0x30 of the object pointed to
 *   by param_1. If the result is greater than 5000, it overwrites the field with 0x32 (50).
 *   Finally, it returns the value stored in that field. The caller is
 *   call_sub_and_store_result.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t clamp_value_to_max_5000(int param_1,char *param_2)

{
  uint uVar1;
  void *r7_in;
  
  uVar1 = parse_numeric_expression((uint32_t *)param_1,0,param_2,r7_in);
  *(uint *)(param_1 + 0x30) = uVar1;
  if (5000 < uVar1) {
    *(uint32_t *)(param_1 + 0x30) = 0x32;
  }
  return *(uint32_t *)(param_1 + 0x30);
}
