/* @k10d forward_with_mode_three @ 0x10464840
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 141_cpucom_transaction_manager (unit names are model-proposed)
 * purpose:
 *   Forwards four arguments to a callee, inserting the constant 3 as the third parameter.
 * summary:
 *   This function is a thin wrapper that calls cpucom_send_transaction with param_1,
 *   param_2, the constant 3, param_4, and param_3. It returns the result of the callee
 *   directly. The specific role of the constant 3 and the callee's behavior are not
 *   determinable from the provided pseudocode and unverified callee names.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t forward_with_mode_three(int *param_1,void *param_2,uint param_3,void *param_4)

{
  uint32_t uVar1;
  
  uVar1 = cpucom_send_transaction(param_1,(int)param_2,3,param_4,param_3);
  return uVar1;
}
