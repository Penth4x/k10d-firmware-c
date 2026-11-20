/* @k10d set_index_and_dispatch_event @ 0x10381fc0
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Stores an index into a struct field and dispatches a virtual event based on a per-index
 *   flag.
 * summary:
 *   Writes param_2 to offset 0x5c of the object. Calls menu_item_register to obtain a sub-
 *   object pointer. Checks a byte at offset 0x6c + param_2*9; if zero, invokes virtual slot
 *   2 with argument 0, otherwise calls glyph_draw with the byte address and invokes virtual
 *   slot 2 with argument 1. The specific camera subsystem is not identifiable from the
 *   provided callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_index_and_dispatch_event(cls_10558e74 *param_1,int param_2)

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
  return;
}
