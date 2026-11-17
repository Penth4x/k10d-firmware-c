/* @k10d call_helper_on_struct_field_10434042 @ 0x10434042
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 120_sr_menu_driver (unit names are model-proposed)
 * purpose:
 *   Retrieves a pointer from sr_driver_singleton and passes its second word to
 *   invoke_virtual_slot_on_five_objects_1048389c.
 * summary:
 *   The function calls sr_driver_singleton to obtain a pointer, dereferences the offset 4
 *   field of that structure, and passes the resulting value as an argument to
 *   invoke_virtual_slot_on_five_objects_1048389c. No other side effects or global state
 *   modifications are visible in the pseudocode. The specific roles of the callees and the
 *   data structure are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_on_struct_field_10434042(uint32_t param_x0)

{
  int iVar1;
  
  iVar1 = sr_driver_singleton();
  invoke_virtual_slot_on_five_objects_1048389c((void *)(*(uint32_t *)(iVar1 + 4)));
  return;
}
