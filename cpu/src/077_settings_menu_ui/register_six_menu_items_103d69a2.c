/* @k10d register_six_menu_items_103d69a2 @ 0x103d69a2
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 077_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Invokes a virtual method on an object to set two flags to 1 and four flags to 0.
 * summary:
 *   The function retrieves an object pointer via menu_item_register and calls virtual slot
 *   2 (offset 0xc) six times. The first two calls pass an argument of 1, and the subsequent
 *   four calls pass an argument of 0. The object pointer is re-fetched before each call,
 *   suggesting the underlying state or object identity may change between invocations. The
 *   specific meaning of the flags and the object type are not determinable from the
 *   provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void register_six_menu_items_103d69a2(int *param_1)

{
  int iVar1;
  
  iVar1 = menu_item_register(*param_1);
  (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  iVar1 = menu_item_register(*param_1);
  (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  iVar1 = menu_item_register(*param_1);
  (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
  iVar1 = menu_item_register(*param_1);
  (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
  iVar1 = menu_item_register(*param_1);
  (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
  iVar1 = menu_item_register(*param_1);
  (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
  return;
}
