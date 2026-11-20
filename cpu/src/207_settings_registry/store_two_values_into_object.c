/* @k10d store_two_values_into_object @ 0x104a9402
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 207_settings_registry (unit names are model-proposed)
 * purpose:
 *   Writes two values returned by helper functions into offsets 4 and 8 of the object.
 * summary:
 *   The function calls call_subroutine_and_return_0x2026 and return_constant_0x5468 with a
 *   local stack variable as an argument. It stores the return value of the first call at
 *   offset 4 and the second at offset 8 of the object pointed to by param_1. It returns 1
 *   unconditionally. The specific roles of the callees and the object fields are not
 *   determinable from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t store_two_values_into_object(cls_105b6ac8 *param_1)

{
  uint32_t uVar1;
  uint8_t uStack_9;
  
  uVar1 = call_subroutine_and_return_0x2026((uint32_t)&uStack_9);
  param_1->field_0x4 = uVar1;
  uVar1 = return_constant_0x5468((uint32_t)&uStack_9);
  param_1->field_0x8 = uVar1;
  return 1;
}
