/* @k10d register_menu_item_on_state_match @ 0x103a514a
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 045_settings_menu_init (unit names are model-proposed)
 * purpose:
 *   Checks four integer state fields and invokes a virtual method with argument 0 on an
 *   object retrieved via menu_item_register.
 * summary:
 *   The function examines offsets 0x54 and 0x58 of the input structure for specific
 *   positive and negative values (-8, 8, -0x1a, 0x1a). When a match is found, it calls
 *   menu_item_register with the structure's offset 0x8 to obtain an object pointer, then
 *   performs a virtual call (slot 1) on that object with an argument of 0. The specific
 *   meaning of the state values and the target object is not determinable from the provided
 *   context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void register_menu_item_on_state_match(void *param_1)

{
  int iVar1;
  
  if (*(int *)((int)param_1 + 0x58) == -8) {
    iVar1 = menu_item_register((int)param_1 + 8);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
  }
  if (*(int *)((int)param_1 + 0x58) == 8) {
    iVar1 = menu_item_register((int)param_1 + 8);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
  }
  if (*(int *)((int)param_1 + 0x54) == -0x1a) {
    iVar1 = menu_item_register((int)param_1 + 8);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
  }
  if (*(int *)((int)param_1 + 0x54) == 0x1a) {
    iVar1 = menu_item_register((int)param_1 + 8);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
  }
  return;
}
