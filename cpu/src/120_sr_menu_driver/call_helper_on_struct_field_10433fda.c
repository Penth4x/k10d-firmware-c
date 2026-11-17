/* @k10d call_helper_on_struct_field_10433fda @ 0x10433fda
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 120_sr_menu_driver (unit names are model-proposed)
 * purpose:
 *   Retrieves a pointer from sr_driver_singleton and passes its second word to
 *   invoke_virtual_slot_15_1048360c.
 * summary:
 *   The function calls sr_driver_singleton to obtain a pointer (stored in iVar1). It then
 *   dereferences the pointer at offset +4 and passes that 32-bit value as an argument to
 *   invoke_virtual_slot_15_1048360c. No other side effects or global state modifications
 *   are visible in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_on_struct_field_10433fda(uint32_t param_x0)

{
  int iVar1;
  
  iVar1 = sr_driver_singleton();
  invoke_virtual_slot_15_1048360c(*(uint32_t *)(iVar1 + 4));
  return;
}
