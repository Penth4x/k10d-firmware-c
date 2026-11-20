/* @k10d register_menu_items_by_type_103a37ae @ 0x103a37ae
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 044_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Invokes a virtual method on an object retrieved via a helper, passing a sequence of
 *   integer arguments (0, 1, 1, 1) and conditionally more based on flag checks.
 * summary:
 *   The function retrieves an object pointer using menu_item_register with an offset from
 *   param_1. It then calls a virtual method (slot 2) on that object multiple times with
 *   arguments 0, 1, 1, and 1. It subsequently checks specific flags (0xd, 0x11, 0x15, 0x19)
 *   using check_buffer_size_by_type and calls the same virtual method with argument 1 for
 *   each check, regardless of the result. The final check is gated by a byte at offset 0x4e
 *   in param_1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void register_menu_items_by_type_103a37ae(void *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (int)param_1 + 8;
  iVar1 = menu_item_register(iVar2);
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
  iVar1 = menu_item_register(iVar2);
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  iVar1 = menu_item_register(iVar2);
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  iVar1 = menu_item_register(iVar2);
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  iVar1 = check_buffer_size_by_type(*(uint32_t *)((int)param_1 + 0x28),0xd);
  if (iVar1 == 0) {
    iVar1 = menu_item_register(iVar2);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  }
  else {
    iVar1 = menu_item_register(iVar2);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  }
  iVar1 = check_buffer_size_by_type(*(uint32_t *)((int)param_1 + 0x28),0x11);
  if (iVar1 == 0) {
    iVar1 = menu_item_register(iVar2);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  }
  else {
    iVar1 = menu_item_register(iVar2);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  }
  iVar1 = check_buffer_size_by_type(*(uint32_t *)((int)param_1 + 0x28),0x15);
  if (iVar1 == 0) {
    iVar1 = menu_item_register(iVar2);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  }
  else {
    iVar1 = menu_item_register(iVar2);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  }
  if (*(char *)((int)param_1 + 0x4e) != '\0') {
    iVar1 = check_buffer_size_by_type(*(uint32_t *)((int)param_1 + 0x28),0x19);
    if (iVar1 == 0) {
      iVar1 = menu_item_register(iVar2);
      (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
    }
    else {
      iVar1 = menu_item_register(iVar2);
      (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
    }
  }
  return;
}
