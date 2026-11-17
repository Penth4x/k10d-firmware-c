/* @k10d call_helper_on_struct_field_1036c46c @ 0x1036c46c
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 020_settings_manager (unit names are model-proposed)
 * purpose:
 *   Fetches a pointer from get_or_create_singleton_object_10390eea and passes its second
 *   word to check_and_reset_object_field.
 * summary:
 *   The function calls get_or_create_singleton_object_10390eea to obtain a pointer,
 *   dereferences offset +4 of that pointer, and passes the resulting 32-bit value as the
 *   sole argument to check_and_reset_object_field. No other side effects or globals are
 *   touched. The specific subsystem role is not determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_on_struct_field_1036c46c(void)

{
  int iVar1;
  
  iVar1 = get_or_create_singleton_object_10390eea();
  check_and_reset_object_field(*(uint32_t *)(iVar1 + 4));
  return;
}
