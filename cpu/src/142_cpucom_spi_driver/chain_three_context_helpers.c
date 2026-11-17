/* @k10d chain_three_context_helpers @ 0x10464c6e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 142_cpucom_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls three helper functions sequentially on a context pointer, passing the second's
 *   return value to the third.
 * summary:
 *   The function takes a context pointer (param_1) and calls
 *   run_three_step_operation_10464c4c, then run_three_step_operation_10464bee, and finally
 *   pack_two_word_value_10465232, passing the return value of the second call as an
 *   argument to the third. It returns the result of the final call. The specific subsystem
 *   role is not determinable from the pseudocode alone, as the callees lack verified names.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint chain_three_context_helpers(int *param_1)

{
  uint extraout_r4;
  int iVar1;
  uint uVar2;
  
  run_three_step_operation_10464c4c(param_1);
  iVar1 = run_three_step_operation_10464bee(param_1);
  uVar2 = pack_two_word_value_10465232(param_1,extraout_r4,iVar1);
  return uVar2;
}
