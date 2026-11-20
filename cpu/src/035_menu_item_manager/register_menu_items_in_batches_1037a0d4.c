/* @k10d register_menu_items_in_batches_1037a0d4 @ 0x1037a0d4
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Repeatedly fetches an object via a helper and invokes a virtual method on it, clearing
 *   a byte in the first pass.
 * summary:
 *   The function loops six times, calling menu_item_register to obtain an object pointer
 *   and invoking virtual slot 1 (offset 0xc) with argument 0. In the first loop, it also
 *   writes 0 to a byte array at param_1+0x34. It then performs 20 additional single
 *   invocations of the same virtual call pattern. The specific role of menu_item_register
 *   and the virtual method is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void register_menu_items_in_batches_1037a0d4(cls_10558830 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < (int)param_1->field_0x64) {
    do {
      iVar1 = menu_item_register((int)param_1);
      (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
      (&param_1->field_0x34)[iVar2] = 0;
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)param_1->field_0x64);
  }
  iVar2 = 0;
  if (0 < (int)param_1->field_0x64) {
    do {
      iVar1 = menu_item_register((int)param_1);
      (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)param_1->field_0x64);
  }
  iVar2 = 0;
  if (0 < (int)param_1->field_0x64) {
    do {
      iVar1 = menu_item_register((int)param_1);
      (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)param_1->field_0x64);
  }
  iVar2 = 0;
  if (0 < (int)param_1->field_0x64) {
    do {
      iVar1 = menu_item_register((int)param_1);
      (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)param_1->field_0x64);
  }
  iVar2 = 0;
  if (0 < (int)param_1->field_0x64) {
    do {
      iVar1 = menu_item_register((int)param_1);
      (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)param_1->field_0x64);
  }
  iVar2 = 0;
  if (0 < (int)param_1->field_0x64) {
    do {
      iVar1 = menu_item_register((int)param_1);
      (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)param_1->field_0x64);
  }
  iVar2 = menu_item_register((int)param_1);
  (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
  iVar2 = menu_item_register((int)param_1);
  (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
  iVar2 = menu_item_register((int)param_1);
  (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
  iVar2 = menu_item_register((int)param_1);
  (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
  iVar2 = menu_item_register((int)param_1);
  (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
  iVar2 = menu_item_register((int)param_1);
  (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
  iVar2 = menu_item_register((int)param_1);
  (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
  iVar2 = menu_item_register((int)param_1);
  (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
  iVar2 = menu_item_register((int)param_1);
  (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
  iVar2 = menu_item_register((int)param_1);
  (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
  iVar2 = menu_item_register((int)param_1);
  (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
  iVar2 = menu_item_register((int)param_1);
  (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
  iVar2 = menu_item_register((int)param_1);
  (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
  iVar2 = menu_item_register((int)param_1);
  (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
  iVar2 = menu_item_register((int)param_1);
  (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
  return;
}
