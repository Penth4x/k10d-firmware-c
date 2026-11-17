/* @k10d call_helper_with_param @ 0x1039268c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls an unnamed helper, passes its return value and param_1 to a second helper, and
 *   returns the first helper's value.
 * summary:
 *   The function calls get_or_init_global_object_1039265a with no arguments and stores the
 *   result in iVar1. It then calls store_pointer_at_offset_0x38 with iVar1 and the input
 *   param_1. Finally, it returns iVar1. The specific roles of the callees are unknown, so
 *   the operation is described mechanically as a two-step helper invocation.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int call_helper_with_param(void *param_1)

{
  int iVar1;
  
  iVar1 = get_or_init_global_object_1039265a();
  store_pointer_at_offset_0x38(iVar1,param_1);
  return iVar1;
}
