/* @k10d virtual_slot3_forward_105203cc @ 0x105203cc
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 278_sr_calibration_ui (unit names are model-proposed)
 * purpose:
 *   Forwards its two arguments to invoke_virtual_slot_8_and_store_ref and returns.
 * summary:
 *   This is virtual method slot 3 of class cls_105d70f0. It takes param_1 and an implicit
 *   stack value (in_stack_00000000) and passes both to the single callee
 *   invoke_virtual_slot_8_and_store_ref. No other logic, state changes, or camera-specific
 *   operations are visible in this function itself.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void virtual_slot3_forward_105203cc(uint32_t param_1)

{
  uint32_t in_stack_00000000;
  
  invoke_virtual_slot_8_and_store_ref(param_1,(void *)in_stack_00000000);
  return;
}
