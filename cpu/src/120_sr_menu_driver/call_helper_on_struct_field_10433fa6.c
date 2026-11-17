/* @k10d call_helper_on_struct_field_10433fa6 @ 0x10433fa6
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 120_sr_menu_driver (unit names are model-proposed)
 * purpose:
 *   Fetches a pointer from sr_driver_singleton and passes its second word to
 *   invoke_virtual_slot_13_104835f0.
 * summary:
 *   The function calls sr_driver_singleton to obtain a pointer, dereferences offset +4 of
 *   that pointer, and passes the resulting 32-bit value as the sole argument to
 *   invoke_virtual_slot_13_104835f0. No other side effects or state modifications are
 *   visible in the pseudocode. The caller is dispatch_power_off_steps.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_on_struct_field_10433fa6(uint32_t param_x0)

{
  int iVar1;
  
  iVar1 = sr_driver_singleton();
  invoke_virtual_slot_13_104835f0(*(uint32_t *)(iVar1 + 4));
  return;
}
