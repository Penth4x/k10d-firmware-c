/* @k10d wait_for_flag_then_acknowledge @ 0x10447b9e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Polls a boolean flag via a helper until true, then calls a second helper on the same
 *   object pointer.
 * summary:
 *   Reads a pointer from offset 0x110 of param_1 and repeatedly calls layout_ready_chk on
 *   it until it returns true. Once the condition is met, it calls
 *   check_bit_19_of_nested_ptr on the same pointer. The specific subsystem is unknown
 *   because the callees are unnamed, but the pattern is a wait-for-condition followed by an
 *   action/acknowledge step.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void wait_for_flag_then_acknowledge(cls_105a1a84 *param_1)

{
  bool bVar1;
  
  bVar1 = layout_ready_chk((char*)(param_1) ->field_0x110);
  while (!bVar1) {
    bVar1 = layout_ready_chk((char*)(param_1) ->field_0x110);
  }
  check_bit_19_of_nested_ptr((char*)(param_1) ->field_0x110);
  return;
}
