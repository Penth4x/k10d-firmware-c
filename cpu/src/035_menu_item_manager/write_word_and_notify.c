/* @k10d write_word_and_notify @ 0x10381e64
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Writes a 16-bit value to an object array and triggers two virtual notifications.
 * summary:
 *   Stores param_3 into the object at offset 0x60 + param_2*2. Calls menu_item_register to
 *   retrieve a context pointer, then calls menu_list_build with that context, the address
 *   of the written field, and constants 3 and 0. Finally, it invokes a virtual method (slot
 *   1) twice on an object derived from the context, passing the value 1 as an argument.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_word_and_notify(int param_1,int param_2,uint16_t param_3)

{
  uint32_t uVar1;
  int iVar2;
  
  *(uint16_t *)(param_1 + 0x60 + param_2 * 2) = param_3;
  uVar1 = menu_item_register(param_1);
  menu_list_build((int *)(uVar1),(uint16_t *)(param_1 + 0x60 + param_2 * 2),(uint8_t)(3),(uint8_t)(0));
  iVar2 = menu_item_register(param_1);
  (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),1);
  iVar2 = menu_item_register(param_1);
  (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),1);
  return;
}
