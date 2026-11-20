/* @k10d populate_menu_with_eight_items @ 0x1040f44a
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 097_display_spi_state (unit names are model-proposed)
 * purpose:
 *   Initializes eight consecutive data fields within a struct using static templates and
 *   registers them for display.
 * summary:
 *   The function zeroes a local 8-byte buffer and passes it to extract_eight_byte_record,
 *   likely to retrieve or initialize state. It then iterates through eight offsets (0x51d
 *   to 0x635) in the object pointed to by param_1, calling format_string_to_buffer_10545140
 *   with corresponding static string pointers (0x1059a79c to 0x1059a838) and the local
 *   buffer values. Following this, it calls menu_item_register eight times with param_1+8,
 *   passing the result to glyph_draw along with the same field offsets, suggesting a
 *   registration or binding step. Finally, it performs a virtual call on the last object
 *   returned by menu_item_register with argument 1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void populate_menu_with_eight_items(int param_1,uint32_t param_2,uint32_t param_3,void *param_4)

{
  void *pvVar1;
  int iVar2;
  uintptr_t sp;
  byte bStack_10;
  byte bStack_f;
  byte bStack_e;
  byte bStack_d;
  byte bStack_c;
  byte bStack_b;
  byte bStack_a;
  byte bStack_9;
  
  bStack_10 = 0;
  bStack_f = 0;
  bStack_e = 0;
  bStack_d = 0;
  bStack_c = 0;
  bStack_b = 0;
  bStack_a = 0;
  bStack_9 = 0;
  extract_eight_byte_record(*(uint32_t *)(param_1 + 0x28),&bStack_10);
  format_string_to_buffer_10545140((byte *)(param_1 + 0x51d),(char *)0x1059a79c/*ROM*/,(void *)(uint)bStack_10,param_4);
  format_string_to_buffer_10545140((byte *)(param_1 + 0x545),(char *)0x1059a7b8/*ROM*/,(void *)(uint)bStack_f,param_4);
  format_string_to_buffer_10545140((byte *)(param_1 + 0x56d),(char *)0x1059a7d0/*ROM*/,(void *)(uint)bStack_e,param_4);
  format_string_to_buffer_10545140((byte *)(param_1 + 0x595),(char *)0x1059a7ec/*ROM*/,(void *)(uint)bStack_d,param_4);
  format_string_to_buffer_10545140((byte *)(param_1 + 0x5bd),(char *)0x1059a7f8/*ROM*/,(void *)(uint)bStack_c,param_4);
  format_string_to_buffer_10545140((byte *)(param_1 + 0x5e5),(char *)0x1059a804/*ROM*/,(void *)(uint)bStack_b,param_4);
  format_string_to_buffer_10545140((byte *)(param_1 + 0x60d),(char *)0x1059a820/*ROM*/,(void *)(uint)bStack_a,param_4);
  format_string_to_buffer_10545140((byte *)(param_1 + 0x635),(char *)0x1059a838/*ROM*/,(void *)(uint)bStack_9,param_4);
  iVar2 = param_1 + 8;
  pvVar1 = (void *)menu_item_register(iVar2);
  glyph_draw(pvVar1,(byte *)(param_1 + 0x51d));
  pvVar1 = (void *)menu_item_register(iVar2);
  glyph_draw(pvVar1,(byte *)(param_1 + 0x545));
  pvVar1 = (void *)menu_item_register(iVar2);
  glyph_draw(pvVar1,(byte *)(param_1 + 0x56d));
  pvVar1 = (void *)menu_item_register(iVar2);
  glyph_draw(pvVar1,(byte *)(param_1 + 0x595));
  pvVar1 = (void *)menu_item_register(iVar2);
  glyph_draw(pvVar1,(byte *)(param_1 + 0x5bd));
  pvVar1 = (void *)menu_item_register(iVar2);
  glyph_draw(pvVar1,(byte *)(param_1 + 0x5e5));
  pvVar1 = (void *)menu_item_register(iVar2);
  glyph_draw(pvVar1,(byte *)(param_1 + 0x60d));
  pvVar1 = (void *)menu_item_register(iVar2);
  glyph_draw(pvVar1,(byte *)(param_1 + 0x635));
  iVar2 = menu_item_register(iVar2);
  (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),1);
  return;
}
