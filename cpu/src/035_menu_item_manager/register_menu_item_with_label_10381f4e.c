/* @k10d register_menu_item_with_label_10381f4e @ 0x10381f4e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Stores param_2 into an object field, conditionally invokes a virtual method or helper
 *   based on a byte at an offset, then calls two cleanup functions.
 * summary:
 *   The function writes param_2 to offset 0x5c of the object pointed to by param_1. It
 *   retrieves a pointer via menu_item_register and checks a byte at offset 0x6c +
 *   param_2*9. If the byte is zero, it calls a virtual method (slot 2) with argument 0;
 *   otherwise, it calls glyph_draw with the byte address and then calls the same virtual
 *   method with argument 1. Finally, it calls register_menu_item_with_split_1038206e and
 *   empty_stub_1038226a with the original object pointer.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void register_menu_item_with_label_10381f4e(cls_10558e74 *param_1,int param_2)

{
  void *pvVar1;
  
  param_1->field_0x5c = param_2;
  pvVar1 = (void *)menu_item_register((int)param_1);
  if ((&param_1->field_0x6c)[param_2 * 9] == '\0') {
    (((vtbl_entry*)(*(int *)((int)pvVar1 + 0xc)))[1].fn)
              ((int)*(short *)(*(int *)((int)pvVar1 + 0xc) + 8) + (int)pvVar1,0);
  }
  else {
    glyph_draw(pvVar1,&param_1->field_0x6c + param_2 * 9);
    (((vtbl_entry*)(*(int *)((int)pvVar1 + 0xc)))[1].fn)
              ((int)*(short *)(*(int *)((int)pvVar1 + 0xc) + 8) + (int)pvVar1,1);
  }
  register_menu_item_with_split_1038206e((int)(param_1));
  empty_stub_1038226a((uint32_t)(param_1));
  return;
}
