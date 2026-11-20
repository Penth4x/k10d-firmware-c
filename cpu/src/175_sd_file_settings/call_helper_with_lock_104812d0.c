/* @k10d call_helper_with_lock_104812d0 @ 0x104812d0
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 175_sd_file_settings (unit names are model-proposed)
 * purpose:
 *   Acquires a lock, calls a helper with two arguments, releases the lock, and returns the
 *   helper's result.
 * summary:
 *   The function calls call_kernel_with_short_id on a pointer derived from param_1 + 0xc,
 *   then calls query_object_via_virtual_call_10480050 with *(param_1 + 8) and param_2. It
 *   then calls check_kernel_call_success_10459d88 on the same pointer derived from param_1
 *   + 0xc. The return value of query_object_via_virtual_call_10480050 is returned. The
 *   pattern suggests call_kernel_with_short_id and check_kernel_call_success_10459d88 are
 *   lock/unlock or enter/exit functions for a critical section or resource associated with
 *   the object at param_1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_helper_with_lock_104812d0(void *param_1,void *param_2)

{
  uint32_t uVar1;
  
  call_kernel_with_short_id((uint32_t *)((int)param_1 + 0xc));
  uVar1 = query_object_via_virtual_call_10480050((uint32_t)(*(uint32_t *)((int)param_1 + 8)),(uint32_t)(param_2));
  check_kernel_call_success_10459d88((uint32_t *)((int)param_1 + 0xc));
  return uVar1;
}
