/* @k10d invoke_transaction_with_length_two @ 0x10464812
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 141_cpucom_transaction_manager (unit names are model-proposed)
 * purpose:
 *   Calls a transaction handler with a fixed length argument of 2.
 * summary:
 *   This function is a thin wrapper that forwards its three parameters to
 *   cpucom_send_transaction, inserting a constant value of 2 as the third argument. It
 *   returns the result of that call directly. The specific role of the underlying
 *   transaction is not determinable from this function's code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t invoke_transaction_with_length_two(int *param_1,void *param_2,void *param_3)

{
  uint32_t uVar1;
  
  uVar1 = cpucom_send_transaction(param_1,(int)param_2,2,param_3,0);
  return uVar1;
}
