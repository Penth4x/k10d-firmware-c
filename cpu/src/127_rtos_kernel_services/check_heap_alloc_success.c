/* @k10d check_heap_alloc_success @ 0x10459400
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Validates that a heap allocation request is positive and returns true if the underlying
 *   allocator succeeds.
 * summary:
 *   Checks that both the pointer to the size and the size itself are positive. If valid, it
 *   calls store_value_in_kernel_table_slot with the size (cast to short) and returns true
 *   if the callee returns 0. Given the module context (rtos_wrappers_and_heap), this is
 *   likely a wrapper around a heap allocation or memory check routine.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"
#include "syscall_traps.h"

bool check_heap_alloc_success(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = -3;
  if ((0 < *param_1) && (0 < param_2)) {
    iVar1 = __trap_store_value_in_kernel_table_slot((int)(short)*param_1, __frv_reg_unset(5));
  }
  return iVar1 == 0;
}
