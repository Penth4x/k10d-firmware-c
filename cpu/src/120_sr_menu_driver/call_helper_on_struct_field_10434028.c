/* @k10d call_helper_on_struct_field_10434028 @ 0x10434028
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 120_sr_menu_driver (unit names are model-proposed)
 * purpose:
 *   Fetches a pointer from sr_driver_singleton and passes its second word to
 *   iterate_three_object_groups.
 * summary:
 *   The function calls sr_driver_singleton to obtain a pointer (iVar1). It then
 *   dereferences the pointer at offset +4 and passes that 32-bit value as the sole argument
 *   to iterate_three_object_groups. No other side effects or state modifications are
 *   visible in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_on_struct_field_10434028(uint32_t param_x0)

{
  int iVar1;
  
  iVar1 = sr_driver_singleton();
  iterate_three_object_groups((void *)(*(uint32_t *)(iVar1 + 4)));
  return;
}
