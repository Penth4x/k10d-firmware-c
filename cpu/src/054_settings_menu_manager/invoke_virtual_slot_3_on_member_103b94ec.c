/* @k10d invoke_virtual_slot_3_on_member_103b94ec @ 0x103b94ec
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 054_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Calls virtual slot 3 of the object stored at offset 4 of param_1 with argument 0.
 * summary:
 *   The function dereferences the pointer at param_1+4 to get an object pointer, then
 *   performs a virtual call to slot 3 (offset 0x1c) of that object's vtable. The this-
 *   pointer is adjusted by the short value at offset 0x18 of the object. No other side
 *   effects or callees are present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_3_on_member_103b94ec(int param_1)

{
  int iVar1;
  
  iVar1 = **(int **)(param_1 + 4);
  (**(code **)(iVar1 + 0x1c))((int)*(int **)(param_1 + 4) + (int)*(short *)(iVar1 + 0x18),0);
  return;
}
