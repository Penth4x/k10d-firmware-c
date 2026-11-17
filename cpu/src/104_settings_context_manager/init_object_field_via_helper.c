/* @k10d init_object_field_via_helper @ 0x10427688
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 104_settings_context_manager (unit names are model-proposed)
 * purpose:
 *   Calls a getter then a setter on an object field, returning 1 on success or 0 on
 *   failure.
 * summary:
 *   The function calls irq_dispatch_prologue() to obtain a value (likely a pointer or
 *   handle). If that value is non-zero, it calls set_if_null_and_report with that value,
 *   param_2, and param_1 + 8. If the second call returns non-zero, the function returns 1;
 *   otherwise it returns 0. This pattern is typical of initializing a specific member of an
 *   object structure passed in param_1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t init_object_field_via_helper(int param_1,uint32_t param_2)

{
  int iVar1;
  uint32_t uVar2;
  
  uVar2 = 0;
  iVar1 = irq_dispatch_prologue();
  if ((iVar1 != 0) && (iVar1 = set_if_null_and_report(iVar1,param_2,param_1 + 8), iVar1 != 0)) {
    uVar2 = 1;
  }
  return uVar2;
}
