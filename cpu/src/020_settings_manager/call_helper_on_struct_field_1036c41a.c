/* @k10d call_helper_on_struct_field_1036c41a @ 0x1036c41a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 020_settings_manager (unit names are model-proposed)
 * purpose:
 *   Fetches a struct pointer, calls a helper on its second field with two args, and
 *   conditionally calls a cleanup routine.
 * summary:
 *   Calls get_or_create_singleton_object_10390eea to obtain a pointer (likely a global
 *   object or context). It then calls check_mode_transition_allowed, passing the value at
 *   offset 4 of that pointer along with param_2 and param_3. If the initial pointer from
 *   get_or_create_singleton_object_10390eea is non-zero, it calls
 *   call_helper_on_fetched_pointer. The return value of check_mode_transition_allowed is
 *   returned to the caller. The specific roles of the callees are unknown, so the operation
 *   is described mechanically.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int call_helper_on_struct_field_1036c41a(void *param_1,void *param_2,uint32_t param_3)

{
  int iVar1;
  
  iVar1 = get_or_create_singleton_object_10390eea();
  iVar1 = check_mode_transition_allowed(*(uint32_t *)(iVar1 + 4),param_2,param_3);
  if (iVar1 != 0) {
    call_helper_on_fetched_pointer();
  }
  return iVar1;
}
