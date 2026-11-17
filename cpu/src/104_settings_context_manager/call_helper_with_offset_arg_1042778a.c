/* @k10d call_helper_with_offset_arg_1042778a @ 0x1042778a
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 104_settings_context_manager (unit names are model-proposed)
 * purpose:
 *   Calls irq_dispatch_prologue, then if non-zero calls set_if_null_and_report with its
 *   result, param_2, and param_1+8, returning 1 on success.
 * summary:
 *   The function first invokes irq_dispatch_prologue. If that returns a non-zero value, it
 *   passes that value along with param_2 and (param_1 + 8) to set_if_null_and_report. If
 *   set_if_null_and_report also returns non-zero, the function returns 1; otherwise it
 *   returns 0. The callees are unnamed, so the specific subsystem role is not determinable
 *   from this code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_helper_with_offset_arg_1042778a(int param_1,uint32_t param_2)

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
