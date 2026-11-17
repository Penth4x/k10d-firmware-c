/* @k10d call_two_helpers_with_offsets @ 0x10390fc0
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 038_settings_manager (unit names are model-proposed)
 * purpose:
 *   Invokes a helper on a pointer derived from param_1+4 and another on a pointer from a
 *   global getter.
 * summary:
 *   The function takes an object pointer in param_1, adds 0x1c to the value stored at
 *   param_1+4, and passes that to kernel_diag_taskstack. It then calls
 *   get_or_init_singleton_1036e58a to obtain a pointer, adds 0x14 to it, and passes the
 *   result to kernel_diag_taskstack again. No other side effects or data manipulations are
 *   visible in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_two_helpers_with_offsets(int param_1)

{
  int iVar1;
  
  kernel_diag_taskstack((void *)(*(int *)(param_1 + 4) + 0x1c));
  iVar1 = get_or_init_singleton_1036e58a();
  kernel_diag_taskstack((void *)(iVar1 + 0x14));
  return;
}
