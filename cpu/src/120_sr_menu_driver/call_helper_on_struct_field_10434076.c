/* @k10d call_helper_on_struct_field_10434076 @ 0x10434076
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 120_sr_menu_driver (unit names are model-proposed)
 * purpose:
 *   Fetches a struct pointer and invokes a helper on its second field.
 * summary:
 *   Calls get_or_init_singleton_object_1047316c to obtain a pointer, then dereferences the
 *   second word (offset +4) of that structure and passes it as the sole argument to
 *   init_object_at_offset_0x4c. No other side effects are visible in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_on_struct_field_10434076(uint32_t param_x0)

{
  int iVar1;
  
  iVar1 = get_or_init_singleton_object_1047316c();
  init_object_at_offset_0x4c(*(void **)(iVar1 + 4));
  return;
}
