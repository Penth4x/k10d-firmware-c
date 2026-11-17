/* @k10d query_kernel_state_flag @ 0x10010d98
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Returns a boolean indicating whether a kernel state condition is true by calling a
 *   helper and testing its result.
 * summary:
 *   The function calls check_kernel_flag_bit5 and returns true if the result is non-zero,
 *   false otherwise. It acts as a simple boolean wrapper around the callee's return value.
 *   No other side effects or state modifications are visible in this function.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool query_kernel_state_flag(void)

{
  int iVar1;
  
  iVar1 = check_kernel_flag_bit5();
  return iVar1 != 0;
}
