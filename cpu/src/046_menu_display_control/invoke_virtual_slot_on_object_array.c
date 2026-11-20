/* @k10d invoke_virtual_slot_on_object_array @ 0x103a80c0
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 046_menu_display_control (unit names are model-proposed)
 * purpose:
 *   Iterates through a struct's member pointers and invokes virtual slot 1 on each, passing
 *   0 as the second argument.
 * summary:
 *   The function reads pointers from offsets 0x4c through 0xbc of the object in param_1.
 *   For each pointer, it dereferences the vtable at offset 0xc to find the function pointer
 *   at offset 0xc (slot 1) and calls it with the adjusted object pointer and 0. It also
 *   calls menu_item_register four times with param_1+8 and invokes the same virtual slot on
 *   the results. Finally, it calls call_helper_on_fetched_pointer. The pattern suggests a
 *   cleanup or reset operation on a collection of sub-objects.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_on_object_array(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0x50) + 0xc);
  (((vtbl_entry*)(iVar2))[1].fn)(*(int *)(param_1 + 0x50) + (int)*(short *)(iVar2 + 8),0);
  iVar2 = *(int *)(*(int *)(param_1 + 0x4c) + 0xc);
  (((vtbl_entry*)(iVar2))[1].fn)(*(int *)(param_1 + 0x4c) + (int)*(short *)(iVar2 + 8),0);
  iVar2 = *(int *)(*(int *)(param_1 + 0x54) + 0xc);
  (((vtbl_entry*)(iVar2))[1].fn)(*(int *)(param_1 + 0x54) + (int)*(short *)(iVar2 + 8),0);
  iVar2 = *(int *)(*(int *)(param_1 + 0x58) + 0xc);
  (((vtbl_entry*)(iVar2))[1].fn)(*(int *)(param_1 + 0x58) + (int)*(short *)(iVar2 + 8),0);
  iVar2 = *(int *)(*(int *)(param_1 + 0x5c) + 0xc);
  (((vtbl_entry*)(iVar2))[1].fn)(*(int *)(param_1 + 0x5c) + (int)*(short *)(iVar2 + 8),0);
  iVar2 = *(int *)(*(int *)(param_1 + 0x60) + 0xc);
  (((vtbl_entry*)(iVar2))[1].fn)(*(int *)(param_1 + 0x60) + (int)*(short *)(iVar2 + 8),0);
  iVar2 = *(int *)(*(int *)(param_1 + 100) + 0xc);
  (((vtbl_entry*)(iVar2))[1].fn)(*(int *)(param_1 + 100) + (int)*(short *)(iVar2 + 8),0);
  iVar2 = *(int *)(*(int *)(param_1 + 0xec) + 0xc);
  (((vtbl_entry*)(iVar2))[1].fn)(*(int *)(param_1 + 0xec) + (int)*(short *)(iVar2 + 8),0);
  iVar2 = *(int *)(*(int *)(param_1 + 0x68) + 0xc);
  (((vtbl_entry*)(iVar2))[1].fn)(*(int *)(param_1 + 0x68) + (int)*(short *)(iVar2 + 8),0);
  iVar2 = *(int *)(*(int *)(param_1 + 0x6c) + 0xc);
  (((vtbl_entry*)(iVar2))[1].fn)(*(int *)(param_1 + 0x6c) + (int)*(short *)(iVar2 + 8),0);
  iVar2 = *(int *)(*(int *)(param_1 + 0x70) + 0xc);
  (((vtbl_entry*)(iVar2))[1].fn)(*(int *)(param_1 + 0x70) + (int)*(short *)(iVar2 + 8),0);
  iVar2 = *(int *)(*(int *)(param_1 + 0x74) + 0xc);
  (((vtbl_entry*)(iVar2))[1].fn)(*(int *)(param_1 + 0x74) + (int)*(short *)(iVar2 + 8),0);
  iVar2 = *(int *)(*(int *)(param_1 + 0x78) + 0xc);
  (((vtbl_entry*)(iVar2))[1].fn)(*(int *)(param_1 + 0x78) + (int)*(short *)(iVar2 + 8),0);
  iVar2 = *(int *)(*(int *)(param_1 + 0x7c) + 0xc);
  (((vtbl_entry*)(iVar2))[1].fn)(*(int *)(param_1 + 0x7c) + (int)*(short *)(iVar2 + 8),0);
  iVar2 = *(int *)(*(int *)(param_1 + 0x80) + 0xc);
  (((vtbl_entry*)(iVar2))[1].fn)(*(int *)(param_1 + 0x80) + (int)*(short *)(iVar2 + 8),0);
  iVar2 = *(int *)(*(int *)(param_1 + 0x84) + 0xc);
  (((vtbl_entry*)(iVar2))[1].fn)(*(int *)(param_1 + 0x84) + (int)*(short *)(iVar2 + 8),0);
  iVar2 = *(int *)(*(int *)(param_1 + 0x90) + 0xc);
  (((vtbl_entry*)(iVar2))[1].fn)(*(int *)(param_1 + 0x90) + (int)*(short *)(iVar2 + 8),0);
  iVar2 = *(int *)(*(int *)(param_1 + 0x88) + 0xc);
  (((vtbl_entry*)(iVar2))[1].fn)(*(int *)(param_1 + 0x88) + (int)*(short *)(iVar2 + 8),0);
  iVar2 = *(int *)(*(int *)(param_1 + 0x8c) + 0xc);
  (((vtbl_entry*)(iVar2))[1].fn)(*(int *)(param_1 + 0x8c) + (int)*(short *)(iVar2 + 8),0);
  iVar2 = *(int *)(*(int *)(param_1 + 0x94) + 0xc);
  (((vtbl_entry*)(iVar2))[1].fn)(*(int *)(param_1 + 0x94) + (int)*(short *)(iVar2 + 8),0);
  iVar2 = *(int *)(*(int *)(param_1 + 0x98) + 0xc);
  (((vtbl_entry*)(iVar2))[1].fn)(*(int *)(param_1 + 0x98) + (int)*(short *)(iVar2 + 8),0);
  iVar2 = *(int *)(*(int *)(param_1 + 0x9c) + 0xc);
  (((vtbl_entry*)(iVar2))[1].fn)(*(int *)(param_1 + 0x9c) + (int)*(short *)(iVar2 + 8),0);
  iVar2 = *(int *)(*(int *)(param_1 + 0xa0) + 0xc);
  (((vtbl_entry*)(iVar2))[1].fn)(*(int *)(param_1 + 0xa0) + (int)*(short *)(iVar2 + 8),0);
  iVar1 = param_1 + 8;
  iVar2 = menu_item_register(iVar1);
  (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
  iVar2 = menu_item_register(iVar1);
  (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
  iVar2 = menu_item_register(iVar1);
  (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
  iVar2 = menu_item_register(iVar1);
  (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
  iVar2 = *(int *)(*(int *)(param_1 + 0xa4) + 0xc);
  (((vtbl_entry*)(iVar2))[1].fn)(*(int *)(param_1 + 0xa4) + (int)*(short *)(iVar2 + 8),0);
  iVar2 = *(int *)(*(int *)(param_1 + 0xa8) + 0xc);
  (((vtbl_entry*)(iVar2))[1].fn)(*(int *)(param_1 + 0xa8) + (int)*(short *)(iVar2 + 8),0);
  iVar2 = *(int *)(*(int *)(param_1 + 0xac) + 0xc);
  (((vtbl_entry*)(iVar2))[1].fn)(*(int *)(param_1 + 0xac) + (int)*(short *)(iVar2 + 8),0);
  iVar2 = *(int *)(*(int *)(param_1 + 0xb0) + 0xc);
  (((vtbl_entry*)(iVar2))[1].fn)(*(int *)(param_1 + 0xb0) + (int)*(short *)(iVar2 + 8),0);
  iVar2 = *(int *)(*(int *)(param_1 + 0xb4) + 0xc);
  (((vtbl_entry*)(iVar2))[1].fn)(*(int *)(param_1 + 0xb4) + (int)*(short *)(iVar2 + 8),0);
  iVar2 = *(int *)(*(int *)(param_1 + 0xb8) + 0xc);
  (((vtbl_entry*)(iVar2))[1].fn)(*(int *)(param_1 + 0xb8) + (int)*(short *)(iVar2 + 8),0);
  iVar2 = *(int *)(*(int *)(param_1 + 0xbc) + 0xc);
  (((vtbl_entry*)(iVar2))[1].fn)(*(int *)(param_1 + 0xbc) + (int)*(short *)(iVar2 + 8),0);
  call_helper_on_fetched_pointer();
  return;
}
