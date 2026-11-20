/* @k10d register_menu_items_in_batches_10384872 @ 0x10384872
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Repeatedly fetches an object via menu_item_register and invokes its virtual slot 1 with
 *   argument 0.
 * summary:
 *   The function loops three times over a count stored at param_1+0xa8, calling
 *   menu_item_register to obtain an object pointer and invoking virtual slot 1 (offset 0xc)
 *   with a this-adjustment and argument 0. In the first loop, it also clears a byte at
 *   param_1+0x74+i. After the loops, it performs nine additional single calls to the same
 *   virtual slot. The specific role of menu_item_register and the virtual method is
 *   unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void register_menu_items_in_batches_10384872(cls_105590b8 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < (int)param_1->field_0xa8) {
    do {
      iVar1 = menu_item_register((int)param_1);
      (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
      (&param_1->field_0x74)[iVar2] = 0;
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)param_1->field_0xa8);
  }
  iVar2 = 0;
  if (0 < (int)param_1->field_0xa8) {
    do {
      iVar1 = menu_item_register((int)param_1);
      (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)param_1->field_0xa8);
  }
  iVar2 = 0;
  if (0 < (int)param_1->field_0xa8) {
    do {
      iVar1 = menu_item_register((int)param_1);
      (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)param_1->field_0xa8);
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
  return;
}
