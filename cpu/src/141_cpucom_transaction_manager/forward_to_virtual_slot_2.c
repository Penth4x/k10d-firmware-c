/* @k10d forward_to_virtual_slot_2 @ 0x104647fe
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 141_cpucom_transaction_manager (unit names are model-proposed)
 * purpose:
 *   Forwards three arguments to a callee with two fixed zero parameters and returns the
 *   result.
 * summary:
 *   This function is a thin wrapper that calls cpucom_send_transaction with param_1,
 *   param_2, 0, param_3, and 0. It is located in the same module as virtual methods for
 *   class cls_105a7a9c, but the specific role of cpucom_send_transaction is not verified.
 *   The fixed zero arguments suggest a specific transaction type or mode, but the exact
 *   meaning is not determinable from the provided pseudocode and callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t forward_to_virtual_slot_2(int *param_1,void *param_2,void *param_3)

{
  uint32_t uVar1;
  
  uVar1 = cpucom_send_transaction(param_1,(int)param_2,0,param_3,0);
  return uVar1;
}
