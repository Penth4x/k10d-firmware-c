/* @k10d dispatch_settings_handler_1045ef74 @ 0x1045ef74
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 131_settings_manager (unit names are model-proposed)
 * purpose:
 *   Invokes a settings handler on an object, either directly or via a virtual call,
 *   bracketed by two helper calls.
 * summary:
 *   The function takes an object pointer (param_1) and a handler ID (param_2). It calls
 *   call_kernel_with_short_id on a sub-structure at offset 0xa4. It then retrieves a
 *   pointer from offset 0x84. If param_3 is 0, it calls
 *   scatter_bytes_via_offset_table_104605c6 with the object and param_2. Otherwise, it
 *   performs a virtual function call on the object at offset 0x44 (slot 8). Finally, it
 *   calls check_kernel_call_success_10459d88 on the sub-structure at offset 0xa4. The
 *   caller is a settings command dispatcher, suggesting this function executes a specific
 *   settings action.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_settings_handler_1045ef74(int param_1,int param_2,int param_3)

{
  int *piVar1;
  
  call_kernel_with_short_id((uint32_t *)(param_1 + 0xa4));
  piVar1 = *(int **)(param_1 + 0x84);
  if (param_3 == 0) {
    scatter_bytes_via_offset_table_104605c6(piVar1,param_2);
  }
  else {
    (**(code **)(*piVar1 + 0x44))((int)piVar1 + (int)*(short *)(*piVar1 + 0x40));
  }
  check_kernel_call_success_10459d88((uint32_t *)(param_1 + 0xa4));
  return;
}
