/* @k10d virtual_slot3_check_and_reset @ 0x1045780e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Calls a predicate on the object and, if true, invokes a reset helper with argument 0.
 * summary:
 *   This is virtual method slot 3 of class cls_105a28b4. It calls
 *   test_flag_bit_15_of_field(param_1) to obtain a boolean condition. If the condition is
 *   true, it calls set_flag_bit_in_word_at_offset_0x10(param_1, 0). It always returns 1.
 *   The specific roles of the callees are not yet determined, so the behavior is described
 *   mechanically as a conditional reset or state change.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t virtual_slot3_check_and_reset(cls_105a28b4 *param_1)

{
  bool bVar1;
  
  bVar1 = test_flag_bit_15_of_field(param_1);
  if (bVar1) {
    set_flag_bit_in_word_at_offset_0x10(param_1,0);
  }
  return 1;
}
