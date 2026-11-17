/* @k10d store_two_fields_in_struct @ 0x1050ea86
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 271_test_mode_manager (unit names are model-proposed)
 * purpose:
 *   Writes param_2 to offset 0x44 and the return value of align_down_to_32_bytes to offset
 *   0xec of the object pointed to by param_1.
 * summary:
 *   The function performs two simple 32-bit stores into a structure. It first stores the
 *   second argument at offset 0x44, then calls align_down_to_32_bytes and stores its return
 *   value at offset 0xec. No other operations, loops, or side effects are visible.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_two_fields_in_struct(int param_1,uint32_t param_2)

{
  uint32_t uVar1;
  
  *(uint32_t *)(param_1 + 0x44) = param_2;
  uVar1 = align_down_to_32_bytes(__frv_reg_unset(4), __frv_reg_unset(5));
  *(uint32_t *)(param_1 + 0xec) = uVar1;
  return;
}
