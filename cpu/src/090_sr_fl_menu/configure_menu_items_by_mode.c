/* @k10d configure_menu_items_by_mode @ 0x10407786
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 090_sr_fl_menu (unit names are model-proposed)
 * purpose:
 *   Invokes virtual methods on objects retrieved via menu_item_register, branching on a
 *   mode byte at offset 0x54.
 * summary:
 *   The function retrieves an object pointer using menu_item_register(param_1 + 8) and
 *   calls virtual slot 1 (offset 0xc) with argument 0 three times. It then switches on the
 *   byte at param_1 + 0x54; for values 9-11, it performs additional virtual calls (slots 1
 *   and 9) and updates a boolean flag at param_1 + 0xb9 based on get_field_at_offset_0x28.
 *   Finally, it calls virtual slot 1 with argument 1 twice.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void configure_menu_items_by_mode(void *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (int)param_1 + 8;
  iVar1 = menu_item_register(iVar2);
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
  iVar1 = menu_item_register(iVar2);
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
  iVar1 = menu_item_register(iVar2);
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
  switch(*(uint8_t *)((int)param_1 + 0x54)) {
  case 0:
    break;
  case 1:
    break;
  case 2:
    break;
  case 3:
    break;
  case 4:
    break;
  case 5:
    break;
  case 6:
    break;
  case 7:
    break;
  case 8:
    break;
  case 9:
  case 10:
  case 0xb:
    iVar1 = menu_item_register(iVar2);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
    iVar1 = menu_item_register(iVar2);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[14].fn)(iVar1 + ((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[14].adj,0);
    iVar1 = menu_item_register(iVar2);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
    iVar1 = menu_item_register(iVar2);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[14].fn)(iVar1 + ((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[14].adj,0);
    iVar1 = get_or_create_singleton_object_1050b118();
    iVar1 = get_field_at_offset_0x28(iVar1);
    *(bool *)((int)param_1 + 0xb9) = iVar1 != 0;
    if ((iVar1 == 0) && (*(char *)((int)param_1 + 0xba) == '\0')) {
      iVar1 = menu_item_register(iVar2);
      (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[14].fn)
                (iVar1 + ((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[14].adj,1);
      iVar1 = menu_item_register(iVar2);
      (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[14].fn)
                (iVar1 + ((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[14].adj,1);
    }
    break;
  case 0xc:
  case 0xd:
  case 0xe:
    break;
  default:
  }
  iVar1 = menu_item_register(iVar2);
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  iVar1 = menu_item_register(iVar2);
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  return;
}
