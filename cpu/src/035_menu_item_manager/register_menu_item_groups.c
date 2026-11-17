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

void register_menu_item_groups(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint32_t uStack_c;
  
  iVar2 = 1;
  do {
    iVar1 = menu_item_register(param_1);
    (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
    iVar1 = menu_item_register(param_1);
    (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
    iVar1 = menu_item_register(param_1);
    (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  iVar2 = 0;
  uStack_c = 1;
  do {
    iVar1 = menu_item_register(param_1);
    (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
    iVar3 = param_1 + 0xa2;
    *(uint8_t *)(iVar3 + iVar2) = 0;
    iVar1 = menu_item_register(param_1);
    (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
    *(uint8_t *)(iVar3 + iVar2 + 1) = 0;
    iVar1 = menu_item_register(param_1);
    (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
    *(uint8_t *)(iVar3 + iVar2 + 2) = 0;
    iVar2 = iVar2 + 3;
    uStack_c = uStack_c + -1;
  } while (-1 < uStack_c);
  iVar2 = 1;
  do {
    iVar1 = menu_item_register(param_1);
    (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
    iVar1 = menu_item_register(param_1);
    (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
    iVar1 = menu_item_register(param_1);
    (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  iVar2 = 1;
  do {
    iVar1 = menu_item_register(param_1);
    (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
    iVar1 = menu_item_register(param_1);
    (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
    iVar1 = menu_item_register(param_1);
    (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  iVar2 = 1;
  do {
    iVar1 = menu_item_register(param_1);
    (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
    iVar1 = menu_item_register(param_1);
    (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
    iVar1 = menu_item_register(param_1);
    (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  iVar2 = menu_item_register(param_1);
  (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
  iVar2 = menu_item_register(param_1);
  (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
  iVar2 = menu_item_register(param_1);
  (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
  iVar2 = menu_item_register(param_1);
  (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
  iVar2 = menu_item_register(param_1);
  (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
  *(uint32_t *)(param_1 + 0x5c) = 0;
  return;
}
