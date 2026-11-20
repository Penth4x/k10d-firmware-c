/* @k10d dispatch_settings_handler_1045edb2 @ 0x1045edb2
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 131_settings_manager (unit names are model-proposed)
 * purpose:
 *   Invokes a settings handler on an object, either directly or via a virtual call,
 *   bracketed by two helper calls.
 * summary:
 *   The function calls call_kernel_with_short_id on a pointer derived from param_1+0xa4. It
 *   then retrieves an object pointer from param_1+0x68. If param_3 is zero, it calls
 *   scatter_bytes_via_offset_table_1045fd2e with the object and param_2; otherwise, it
 *   performs a virtual call to slot 8 (offset 0x44) of the object's vtable. Finally, it
 *   calls check_kernel_call_success_10459d88 on the same pointer derived from param_1+0xa4.
 *   The caller is a settings command dispatcher, suggesting this function handles a
 *   specific settings update or state change.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_settings_handler_1045edb2(int param_1,int param_2,int param_3)

{
  int *piVar1;
  
  call_kernel_with_short_id((uint32_t *)(param_1 + 0xa4));
  piVar1 = *(int **)(param_1 + 0x68);
  if (param_3 == 0) {
    scatter_bytes_via_offset_table_1045fd2e(piVar1,param_2);
  }
  else {
    (((vtbl_entry*)(*piVar1))[8].fn)((int)piVar1 + (int)((vtbl_entry*)(*piVar1))[8].adj);
  }
  check_kernel_call_success_10459d88((uint32_t *)(param_1 + 0xa4));
  return;
}
