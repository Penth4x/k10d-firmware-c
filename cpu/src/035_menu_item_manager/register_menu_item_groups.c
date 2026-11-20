/* @k10d register_menu_item_groups @ 0x103819a4
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Invokes a virtual method on a sequence of objects and clears specific state bytes and a
 *   32-bit field.
 * summary:
 *   The function repeatedly calls menu_item_register to obtain object pointers and invokes
 *   a virtual method (slot 3) on each with a zero argument. It also zeroes three bytes at
 *   offset 0xa2 and a 32-bit value at offset 0x5c of the input parameter. The specific
 *   subsystem or object type is not identifiable from the provided pseudocode and single
 *   unnamed callee.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void register_menu_item_groups(cls_10558e74 *param_1)

{
  int iVar1;
  int iVar2;
  int iStack_c;
  
  iVar2 = 1;
  do {
    iVar1 = menu_item_register((int)param_1);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
    iVar1 = menu_item_register((int)param_1);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
    iVar1 = menu_item_register((int)param_1);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  iVar2 = 0;
  iStack_c = 1;
  do {
    iVar1 = menu_item_register((int)param_1);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
    ((uint8_t *)&param_1[1] + 0x35)[iVar2] = 0;
    iVar1 = menu_item_register((int)param_1);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
    ((uint8_t *)&param_1[1] + 0x36)[iVar2] = 0;
    iVar1 = menu_item_register((int)param_1);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
    ((uint8_t *)&param_1[1] + 0x37)[iVar2] = 0;
    iVar2 = iVar2 + 3;
    iStack_c = iStack_c + -1;
  } while (-1 < iStack_c);
  iVar2 = 1;
  do {
    iVar1 = menu_item_register((int)param_1);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
    iVar1 = menu_item_register((int)param_1);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
    iVar1 = menu_item_register((int)param_1);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  iVar2 = 1;
  do {
    iVar1 = menu_item_register((int)param_1);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
    iVar1 = menu_item_register((int)param_1);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
    iVar1 = menu_item_register((int)param_1);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  iVar2 = 1;
  do {
    iVar1 = menu_item_register((int)param_1);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
    iVar1 = menu_item_register((int)param_1);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
    iVar1 = menu_item_register((int)param_1);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
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
  param_1->field_0x5c = 0;
  return;
}
