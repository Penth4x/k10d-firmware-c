/* @k10d dispatch_object_state_update_103b0ac2 @ 0x103b0ac2
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 049_settings_menu_init (unit names are model-proposed)
 * purpose:
 *   Reads a state field from an object, selects a data pointer based on the value, and
 *   invokes a virtual method.
 * summary:
 *   The function calls get_setting_0xc2 with a field at offset 0x28 of param_1. If the
 *   result is 0 or 1, it retrieves a pointer via menu_item_register and calls glyph_draw
 *   with a specific constant address (0x10565e38 or 0x10565e40). Finally, it performs a
 *   virtual call on the object returned by menu_item_register, passing the value 1 as an
 *   argument. The specific subsystem role is unclear without knowledge of the callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_object_state_update_103b0ac2(void *param_1)

{
  int iVar1;
  void *pvVar2;
  byte *pbVar3;
  
  iVar1 = get_setting_0xc2(*(int *)((int)param_1 + 0x28));
  if (iVar1 == 0) {
    pvVar2 = (void *)menu_item_register((int)param_1 + 8);
    pbVar3 = (byte *)0x10565e38/*ROM*/;
  }
  else {
    if (iVar1 != 1) goto LAB_103b0b18;
    pvVar2 = (void *)menu_item_register((int)param_1 + 8);
    pbVar3 = (byte *)0x10565e40/*ROM*/;
  }
  glyph_draw(pvVar2,pbVar3);
LAB_103b0b18:
  iVar1 = menu_item_register((int)param_1 + 8);
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  return;
}
