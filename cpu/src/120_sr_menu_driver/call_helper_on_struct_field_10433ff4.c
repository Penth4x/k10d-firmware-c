/* @k10d call_helper_on_struct_field_10433ff4 @ 0x10433ff4
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 120_sr_menu_driver (unit names are model-proposed)
 * purpose:
 *   Retrieves a pointer from get_or_create_singleton_object_10470d84 and passes its second
 *   word to deactivate_app_mode_context.
 * summary:
 *   The function calls get_or_create_singleton_object_10470d84 to obtain a base pointer. It
 *   then dereferences the pointer at offset +4 and passes that value as an argument to
 *   deactivate_app_mode_context. No other side effects or global writes are visible in the
 *   pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_on_struct_field_10433ff4(uint32_t param_x0)

{
  int iVar1;
  
  iVar1 = get_or_create_singleton_object_10470d84();
  deactivate_app_mode_context(*(uint32_t *)(iVar1 + 4));
  return;
}
