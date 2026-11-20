/* @k10d register_menu_item_with_label_103b85e0 @ 0x103b85e0
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 051_console_uart_driver (unit names are model-proposed)
 * purpose:
 *   Copies a 20-byte header, initializes an object via a helper, and releases three
 *   references.
 * summary:
 *   The function copies 20 bytes from 0x1056ad23 to the stack. It calls
 *   format_string_to_buffer_10545140 with parameters derived from param_1+0x44. It then
 *   calls menu_item_register three times with param_1+8, passing the first result to
 *   glyph_draw. Finally, it performs three virtual calls (slot 2) on the objects returned
 *   by menu_item_register, likely releasing references or decrementing counts.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void register_menu_item_with_label_103b85e0(void *param_1)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  uintptr_t sp;
  byte abStack_1c [20];
  
  iVar2 = 0x14;
  do {
    iVar3 = iVar2 + -1;
    (&stack0xffffffe3)[iVar2] = *(uint8_t *)(iVar2 + 0x1056ad23/*ROM*/);
    iVar2 = iVar3;
  } while (iVar3 != 0);
  format_string_to_buffer_10545140(abStack_1c,&DAT_1056ad38/*ROM*/,(void *)(*(uint *)((int)param_1 + 0x44) >> 0x10),
               (void *)(*(uint *)((int)param_1 + 0x44) & 0xffff));
  iVar3 = (int)param_1 + 8;
  pvVar1 = (void *)menu_item_register(iVar3);
  glyph_draw(pvVar1,abStack_1c);
  (((vtbl_entry*)(*(int *)((int)pvVar1 + 0xc)))[1].fn)
            ((int)pvVar1 + (int)*(short *)(*(int *)((int)pvVar1 + 0xc) + 8),1);
  iVar2 = menu_item_register(iVar3);
  (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),1);
  iVar2 = menu_item_register(iVar3);
  (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),1);
  return;
}
