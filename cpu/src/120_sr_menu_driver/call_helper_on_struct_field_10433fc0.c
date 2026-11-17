/* @k10d call_helper_on_struct_field_10433fc0 @ 0x10433fc0
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 120_sr_menu_driver (unit names are model-proposed)
 * purpose:
 *   Fetches a pointer from sr_driver_singleton and passes its second field to
 *   dispatch_object_state_change_10483628.
 * summary:
 *   The function calls sr_driver_singleton to obtain a pointer, dereferences the pointer at
 *   offset +4, and passes that value as an argument to
 *   dispatch_object_state_change_10483628. It acts as a thin wrapper or dispatcher that
 *   routes a specific object field to another routine. No camera-specific subsystem
 *   behavior is evident from the available pseudocode or callee names.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_on_struct_field_10433fc0(uint32_t param_x0)

{
  int iVar1;
  
  iVar1 = sr_driver_singleton();
  dispatch_object_state_change_10483628(*(void **)(iVar1 + 4));
  return;
}
