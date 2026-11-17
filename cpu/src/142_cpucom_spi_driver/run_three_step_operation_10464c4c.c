/* @k10d run_three_step_operation_10464c4c @ 0x10464c4c
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 142_cpucom_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls three helper functions in sequence, passing the second's return value to the
 *   third.
 * summary:
 *   The function takes a single pointer argument and invokes
 *   invoke_virtual_slot_11_10464c2e, then invoke_virtual_slot_11_10464c10, and finally
 *   pack_two_byte_value_10465228. The return value of invoke_virtual_slot_11_10464c10 is
 *   cast to a short and passed as the third argument to pack_two_byte_value_10465228. The
 *   specific roles of these callees are not verified, so the operation is described
 *   mechanically as a three-step sequence.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void run_three_step_operation_10464c4c(int *param_1)

{
  ushort extraout_r4;
  uint32_t uVar1;
  
  invoke_virtual_slot_11_10464c2e(param_1);
  uVar1 = invoke_virtual_slot_11_10464c10(param_1);
  pack_two_byte_value_10465228(param_1,extraout_r4,(short)uVar1);
  return;
}
