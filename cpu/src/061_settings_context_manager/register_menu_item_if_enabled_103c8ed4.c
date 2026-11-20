/* @k10d register_menu_item_if_enabled_103c8ed4 @ 0x103c8ed4
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 061_settings_context_manager (unit names are model-proposed)
 * purpose:
 *   Clears a byte flag at offset 0x27 of a struct if specific conditions are met and calls
 *   a virtual function.
 * summary:
 *   Checks if the byte at param_1+0x27 is non-zero, bit 1 of the ushort at param_1+3 is
 *   set, and param_2 equals 0x1160002. If all conditions are true, it calls
 *   menu_item_register with the first field of param_1, then invokes a virtual method (slot
 *   14) on the object returned by menu_item_register, passing 1 as an argument. Finally, it
 *   sets the byte at param_1+0x27 to 0. The function always returns 0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t register_menu_item_if_enabled_103c8ed4(cls_10595818 *param_1,int param_2)

{
  int iVar1;
  
  if (((param_1->field_0x27 != '\0') && ((param_1->field_0xc & 2) != 2)) &&
     (iVar1 = menu_item_register((int)param_1->field_0x0), param_2 == 0x1160002)) {
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[14].fn)(((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[14].adj + iVar1,1);
    param_1->field_0x27 = 0;
  }
  return 0;
}
