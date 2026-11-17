/* @k10d call_virtual_slot_and_fallback_104ea4d6 @ 0x104ea4d6
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 255_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Invokes a virtual method on an object and calls a fallback function if the result is
 *   not 5.
 * summary:
 *   The function dereferences a pointer at offset 4 of param_1 to get an object pointer. It
 *   then performs a virtual call to slot 7 (offset 0x3c) of that object's vtable, passing
 *   the object as the first argument. If the return value of this virtual call is not 5, it
 *   calls dispatch_on_state_field_104ea53c with the original param_1 and returns that
 *   result. Otherwise, it returns 5.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int call_virtual_slot_and_fallback_104ea4d6(int param_1)

{
  int iVar1;
  
  iVar1 = **(int **)(param_1 + 4);
  iVar1 = (**(code **)(iVar1 + 0x3c))((int)*(int **)(param_1 + 4) + (int)*(short *)(iVar1 + 0x38));
  if (iVar1 != 5) {
    iVar1 = dispatch_on_state_field_104ea53c(param_1);
  }
  return iVar1;
}
