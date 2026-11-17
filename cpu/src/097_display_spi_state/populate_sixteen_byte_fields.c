/* @k10d populate_sixteen_byte_fields @ 0x1040e732
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 097_display_spi_state (unit names are model-proposed)
 * purpose:
 *   Allocates a buffer, fills it via a helper, and copies its 16 bytes into 16 fixed struct
 *   fields.
 * summary:
 *   Checks a flag at offset 0x180; if set, clears it and allocates a buffer at offset 0x224
 *   sized by the value at offset 0x28. Calls read_twenty_byte_buffer to populate the
 *   buffer. On success, calls format_string_to_buffer_10545140 sixteen times to copy each
 *   byte from the buffer into consecutive 12-byte-aligned fields (offsets 0x181-0x217),
 *   then calls menu_item_register and glyph_draw for each field, and finally invokes a
 *   virtual method with argument 1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void populate_sixteen_byte_fields(int param_1,uint32_t param_2,uint32_t param_3,void *param_4)

{
  int iVar1;
  uint32_t uVar2;
  void *pvVar3;
  
  if (*(char *)(param_1 + 0x180) != '\0') {
    *(uint8_t *)(param_1 + 0x180) = 0;
    iVar1 = (*(code *)0x104f2ed6/*ROM*/)(*(uint32_t *)(param_1 + 0x28));
    uVar2 = heap_alloc_2(iVar1);
    *(uint32_t *)(param_1 + 0x224) = uVar2;
  }
  iVar1 = read_twenty_byte_buffer(*(uint32_t *)(param_1 + 0x28),(void *)(uint)*(uint32_t *)(param_1 + 0x224));
  if (iVar1 != 0) {
    format_string_to_buffer_10545140((byte *)(param_1 + 0x181),(char *)0x1059a4b4/*ROM*/,
                 (void *)(uint)**(byte **)(param_1 + 0x224),param_4);
    format_string_to_buffer_10545140((byte *)(param_1 + 0x18b),(char *)0x1059a4c0/*ROM*/,
                 (void *)(uint)*(byte *)(*(int *)(param_1 + 0x224) + 1),param_4);
    format_string_to_buffer_10545140((byte *)(param_1 + 0x195),(char *)0x1059a4cc/*ROM*/,
                 (void *)(uint)*(byte *)(*(int *)(param_1 + 0x224) + 2),param_4);
    format_string_to_buffer_10545140((byte *)(param_1 + 0x19f),(char *)0x1059a4d8/*ROM*/,
                 (void *)(uint)*(byte *)(*(int *)(param_1 + 0x224) + 3),param_4);
    format_string_to_buffer_10545140((byte *)(param_1 + 0x1a9),(char *)0x1059a4e4/*ROM*/,
                 (void *)(uint)*(byte *)(*(int *)(param_1 + 0x224) + 4),param_4);
    format_string_to_buffer_10545140((byte *)(param_1 + 0x1b3),(char *)0x1059a4f0/*ROM*/,
                 (void *)(uint)*(byte *)(*(int *)(param_1 + 0x224) + 5),param_4);
    format_string_to_buffer_10545140((byte *)(param_1 + 0x1bd),(char *)0x1059a4fc/*ROM*/,
                 (void *)(uint)*(byte *)(*(int *)(param_1 + 0x224) + 6),param_4);
    format_string_to_buffer_10545140((byte *)(param_1 + 0x1c7),(char *)0x1059a508/*ROM*/,
                 (void *)(uint)*(byte *)(*(int *)(param_1 + 0x224) + 7),param_4);
    format_string_to_buffer_10545140((byte *)(param_1 + 0x1d1),(char *)0x1059a514/*ROM*/,
                 (void *)(uint)*(byte *)(*(int *)(param_1 + 0x224) + 8),param_4);
    format_string_to_buffer_10545140((byte *)(param_1 + 0x1db),(char *)0x1059a520/*ROM*/,
                 (void *)(uint)*(byte *)(*(int *)(param_1 + 0x224) + 9),param_4);
    format_string_to_buffer_10545140((byte *)(param_1 + 0x1e5),(char *)0x1059a52c/*ROM*/,
                 (void *)(uint)*(byte *)(*(int *)(param_1 + 0x224) + 10),param_4);
    format_string_to_buffer_10545140((byte *)(param_1 + 0x1ef),(char *)0x1059a538/*ROM*/,
                 (void *)(uint)*(byte *)(*(int *)(param_1 + 0x224) + 0xb),param_4);
    format_string_to_buffer_10545140((byte *)(param_1 + 0x1f9),(char *)0x1059a544/*ROM*/,
                 (void *)(uint)*(byte *)(*(int *)(param_1 + 0x224) + 0xc),param_4);
    format_string_to_buffer_10545140((byte *)(param_1 + 0x203),(char *)0x1059a550/*ROM*/,
                 (void *)(uint)*(byte *)(*(int *)(param_1 + 0x224) + 0xd),param_4);
    format_string_to_buffer_10545140((byte *)(param_1 + 0x20d),(char *)0x1059a55c/*ROM*/,
                 (void *)(uint)*(byte *)(*(int *)(param_1 + 0x224) + 0xe),param_4);
    format_string_to_buffer_10545140((byte *)(param_1 + 0x217),(char *)0x1059a568/*ROM*/,
                 (void *)(uint)*(byte *)(*(int *)(param_1 + 0x224) + 0xf),param_4);
    iVar1 = param_1 + 8;
    pvVar3 = (void *)menu_item_register(iVar1);
    glyph_draw(pvVar3,(byte *)(param_1 + 0x181));
    pvVar3 = (void *)menu_item_register(iVar1);
    glyph_draw(pvVar3,(byte *)(param_1 + 0x18b));
    pvVar3 = (void *)menu_item_register(iVar1);
    glyph_draw(pvVar3,(byte *)(param_1 + 0x195));
    pvVar3 = (void *)menu_item_register(iVar1);
    glyph_draw(pvVar3,(byte *)(param_1 + 0x19f));
    pvVar3 = (void *)menu_item_register(iVar1);
    glyph_draw(pvVar3,(byte *)(param_1 + 0x1a9));
    pvVar3 = (void *)menu_item_register(iVar1);
    glyph_draw(pvVar3,(byte *)(param_1 + 0x1b3));
    pvVar3 = (void *)menu_item_register(iVar1);
    glyph_draw(pvVar3,(byte *)(param_1 + 0x1bd));
    pvVar3 = (void *)menu_item_register(iVar1);
    glyph_draw(pvVar3,(byte *)(param_1 + 0x1c7));
    pvVar3 = (void *)menu_item_register(iVar1);
    glyph_draw(pvVar3,(byte *)(param_1 + 0x1d1));
    pvVar3 = (void *)menu_item_register(iVar1);
    glyph_draw(pvVar3,(byte *)(param_1 + 0x1db));
    pvVar3 = (void *)menu_item_register(iVar1);
    glyph_draw(pvVar3,(byte *)(param_1 + 0x1e5));
    pvVar3 = (void *)menu_item_register(iVar1);
    glyph_draw(pvVar3,(byte *)(param_1 + 0x1ef));
    pvVar3 = (void *)menu_item_register(iVar1);
    glyph_draw(pvVar3,(byte *)(param_1 + 0x1f9));
    pvVar3 = (void *)menu_item_register(iVar1);
    glyph_draw(pvVar3,(byte *)(param_1 + 0x203));
    pvVar3 = (void *)menu_item_register(iVar1);
    glyph_draw(pvVar3,(byte *)(param_1 + 0x20d));
    pvVar3 = (void *)menu_item_register(iVar1);
    glyph_draw(pvVar3,(byte *)(param_1 + 0x217));
    iVar1 = menu_item_register(iVar1);
    (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  }
  return;
}
