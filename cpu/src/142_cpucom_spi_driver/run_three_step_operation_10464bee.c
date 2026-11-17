/* @k10d run_three_step_operation_10464bee @ 0x10464bee
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 142_cpucom_spi_driver (unit names are model-proposed)
 * purpose:
 *   Executes a three-stage operation by calling three helper functions in sequence and
 *   returning the final result.
 * summary:
 *   The function calls invoke_virtual_slot_11_with_0xff with the input pointer, then
 *   invoke_virtual_slot_11_10464bb2 to obtain a 16-bit value, and finally
 *   pack_two_byte_value_10465228 passing the pointer, an extra output value, and the 16-bit
 *   result. The return value of the third call is returned to the caller. The specific
 *   subsystem or protocol is not determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint run_three_step_operation_10464bee(int *param_1)

{
  ushort extraout_r4;
  uint32_t uVar1;
  ushort uVar2;
  
  invoke_virtual_slot_11_with_0xff(param_1);
  uVar1 = invoke_virtual_slot_11_10464bb2(param_1);
  uVar2 = pack_two_byte_value_10465228(param_1,extraout_r4,(short)uVar1);
  return (uint)uVar2;
}
