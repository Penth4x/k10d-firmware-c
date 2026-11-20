/* @k10d invoke_virtual_slot_3_on_member_1039fb08 @ 0x1039fb08
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 044_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Dereferences a member pointer at offset 4 of param_1 and invokes its virtual slot 3
 *   with argument 0.
 * summary:
 *   The function reads an object pointer from *(param_1 + 4), then performs a Cfront-style
 *   virtual call to slot 3 (vtable offset 0x1c) of that object, passing 0 as the sole
 *   argument. The this-pointer is adjusted by the short at vtable offset 0x18. No other
 *   side effects or camera-specific behavior are visible in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t invoke_virtual_slot_3_on_member_1039fb08(cls_105642d8 *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)param_1->field_0x4;
  (((vtbl_entry*)(iVar1))[3].fn)((int)param_1->field_0x4 + (int)((vtbl_entry*)(iVar1))[3].adj,0);
  return 1;
}
