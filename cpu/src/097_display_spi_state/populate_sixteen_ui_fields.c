/* @k10d populate_sixteen_ui_fields @ 0x1040eb4c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 097_display_spi_state (unit names are model-proposed)
 * purpose:
 *   Allocates a 16-entry buffer and populates 16 struct fields with values derived from
 *   that buffer and static strings.
 * summary:
 *   The function checks a flag at offset 0x22c; if set, it clears it and allocates a buffer
 *   of size 2*(*(param_1+0x28)) bytes, storing the pointer at offset 0x2d0. It then calls
 *   extract_sixteen_shorts_from_object to initialize the buffer. It proceeds to call
 *   format_string_to_buffer_10545140 sixteen times, copying 16-bit values from the
 *   allocated buffer into struct fields at offsets 0x22d through 0x2c3, using static string
 *   pointers as arguments. Finally, it iterates through these 16 fields, calling
 *   menu_item_register and glyph_draw for each, and performs a virtual call on the last
 *   object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void populate_sixteen_ui_fields(int param_1,uint32_t param_2,uint32_t param_3,void *param_4)

{
  int iVar1;
  uint32_t uVar2;
  void *pvVar3;
  
  if (*(char *)(param_1 + 0x22c) != '\0') {
    *(uint8_t *)(param_1 + 0x22c) = 0;
    iVar1 = (*(code *)0x104f30aa/*ROM*/)(*(uint32_t *)(param_1 + 0x28));
    uVar2 = heap_alloc_2(iVar1 << 1);
    *(uint32_t *)(param_1 + 0x2d0) = uVar2;
  }
  extract_sixteen_shorts_from_object(*(uint32_t *)(param_1 + 0x28),(void *)(uint)*(uint32_t *)(param_1 + 0x2d0));
  format_string_to_buffer_10545140((byte *)(param_1 + 0x22d),(char *)0x1059a574/*ROM*/,
               (void *)(uint)**(ushort **)(param_1 + 0x2d0),param_4);
  format_string_to_buffer_10545140((byte *)(param_1 + 0x237),(char *)0x1059a57c/*ROM*/,
               (void *)(uint)*(ushort *)(*(int *)(param_1 + 0x2d0) + 2),param_4);
  format_string_to_buffer_10545140((byte *)(param_1 + 0x241),(char *)0x1059a584/*ROM*/,
               (void *)(uint)*(ushort *)(*(int *)(param_1 + 0x2d0) + 4),param_4);
  format_string_to_buffer_10545140((byte *)(param_1 + 0x24b),(char *)0x1059a58c/*ROM*/,
               (void *)(uint)*(ushort *)(*(int *)(param_1 + 0x2d0) + 6),param_4);
  format_string_to_buffer_10545140((byte *)(param_1 + 0x255),(char *)0x1059a594/*ROM*/,
               (void *)(uint)*(ushort *)(*(int *)(param_1 + 0x2d0) + 8),param_4);
  format_string_to_buffer_10545140((byte *)(param_1 + 0x25f),(char *)0x1059a59c/*ROM*/,
               (void *)(uint)*(ushort *)(*(int *)(param_1 + 0x2d0) + 10),param_4);
  format_string_to_buffer_10545140((byte *)(param_1 + 0x269),(char *)0x1059a5a4/*ROM*/,
               (void *)(uint)*(ushort *)(*(int *)(param_1 + 0x2d0) + 0xc),param_4);
  format_string_to_buffer_10545140((byte *)(param_1 + 0x273),(char *)0x1059a5ac/*ROM*/,
               (void *)(uint)*(ushort *)(*(int *)(param_1 + 0x2d0) + 0xe),param_4);
  format_string_to_buffer_10545140((byte *)(param_1 + 0x27d),(char *)0x1059a5b4/*ROM*/,
               (void *)(uint)*(ushort *)(*(int *)(param_1 + 0x2d0) + 0x10),param_4);
  format_string_to_buffer_10545140((byte *)(param_1 + 0x287),(char *)0x1059a5bc/*ROM*/,
               (void *)(uint)*(ushort *)(*(int *)(param_1 + 0x2d0) + 0x12),param_4);
  format_string_to_buffer_10545140((byte *)(param_1 + 0x291),(char *)0x1059a5c4/*ROM*/,
               (void *)(uint)*(ushort *)(*(int *)(param_1 + 0x2d0) + 0x14),param_4);
  format_string_to_buffer_10545140((byte *)(param_1 + 0x29b),(char *)0x1059a5cc/*ROM*/,
               (void *)(uint)*(ushort *)(*(int *)(param_1 + 0x2d0) + 0x16),param_4);
  format_string_to_buffer_10545140((byte *)(param_1 + 0x2a5),(char *)0x1059a5d4/*ROM*/,
               (void *)(uint)*(ushort *)(*(int *)(param_1 + 0x2d0) + 0x18),param_4);
  format_string_to_buffer_10545140((byte *)(param_1 + 0x2af),(char *)0x1059a5dc/*ROM*/,
               (void *)(uint)*(ushort *)(*(int *)(param_1 + 0x2d0) + 0x1a),param_4);
  format_string_to_buffer_10545140((byte *)(param_1 + 0x2b9),(char *)0x1059a5e4/*ROM*/,
               (void *)(uint)*(ushort *)(*(int *)(param_1 + 0x2d0) + 0x1c),param_4);
  format_string_to_buffer_10545140((byte *)(param_1 + 0x2c3),(char *)0x1059a5ec/*ROM*/,
               (void *)(uint)*(ushort *)(*(int *)(param_1 + 0x2d0) + 0x1e),param_4);
  iVar1 = param_1 + 8;
  pvVar3 = (void *)menu_item_register(iVar1);
  glyph_draw(pvVar3,(byte *)(param_1 + 0x22d));
  pvVar3 = (void *)menu_item_register(iVar1);
  glyph_draw(pvVar3,(byte *)(param_1 + 0x237));
  pvVar3 = (void *)menu_item_register(iVar1);
  glyph_draw(pvVar3,(byte *)(param_1 + 0x241));
  pvVar3 = (void *)menu_item_register(iVar1);
  glyph_draw(pvVar3,(byte *)(param_1 + 0x24b));
  pvVar3 = (void *)menu_item_register(iVar1);
  glyph_draw(pvVar3,(byte *)(param_1 + 0x255));
  pvVar3 = (void *)menu_item_register(iVar1);
  glyph_draw(pvVar3,(byte *)(param_1 + 0x25f));
  pvVar3 = (void *)menu_item_register(iVar1);
  glyph_draw(pvVar3,(byte *)(param_1 + 0x269));
  pvVar3 = (void *)menu_item_register(iVar1);
  glyph_draw(pvVar3,(byte *)(param_1 + 0x273));
  pvVar3 = (void *)menu_item_register(iVar1);
  glyph_draw(pvVar3,(byte *)(param_1 + 0x27d));
  pvVar3 = (void *)menu_item_register(iVar1);
  glyph_draw(pvVar3,(byte *)(param_1 + 0x287));
  pvVar3 = (void *)menu_item_register(iVar1);
  glyph_draw(pvVar3,(byte *)(param_1 + 0x291));
  pvVar3 = (void *)menu_item_register(iVar1);
  glyph_draw(pvVar3,(byte *)(param_1 + 0x29b));
  pvVar3 = (void *)menu_item_register(iVar1);
  glyph_draw(pvVar3,(byte *)(param_1 + 0x2a5));
  pvVar3 = (void *)menu_item_register(iVar1);
  glyph_draw(pvVar3,(byte *)(param_1 + 0x2af));
  pvVar3 = (void *)menu_item_register(iVar1);
  glyph_draw(pvVar3,(byte *)(param_1 + 0x2b9));
  pvVar3 = (void *)menu_item_register(iVar1);
  glyph_draw(pvVar3,(byte *)(param_1 + 0x2c3));
  iVar1 = menu_item_register(iVar1);
  (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  return;
}
