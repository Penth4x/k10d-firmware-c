/* @k10d build_and_register_menu_items @ 0x1040ef5c
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 097_display_spi_state (unit names are model-proposed)
 * purpose:
 *   Initializes four string fields in a struct by allocating a buffer, copying default
 *   values, and registering them.
 * summary:
 *   The function checks a flag at offset 0x2d8; if set, it clears it and allocates an
 *   8-byte buffer stored at 0x37c. It calls extract_four_short_fields with a pointer from
 *   0x28 and the new buffer. It then calls format_string_to_buffer_10545140 four times to
 *   copy default strings from 0x1059a5f4 into struct offsets 0x2d9, 0x2e3, 0x2ed, and
 *   0x2f7, using values from the allocated buffer. Finally, it calls menu_item_register and
 *   glyph_draw four times to register these fields, and performs a virtual call on the last
 *   object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void build_and_register_menu_items(int param_1,uint32_t param_2,uint32_t param_3,void *param_4)

{
  uint32_t uVar1;
  void *pvVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x2d8) != '\0') {
    *(uint8_t *)(param_1 + 0x2d8) = 0;
    uVar1 = heap_alloc_2(8);
    *(uint32_t *)(param_1 + 0x37c) = uVar1;
  }
  extract_four_short_fields((int)(*(uint32_t *)(param_1 + 0x28)),(uint16_t *)(*(uint32_t *)(param_1 + 0x37c)));
  format_string_to_buffer_10545140((byte *)(param_1 + 0x2d9),(char *)0x1059a5f4/*ROM*/,
               (void *)(uint)**(ushort **)(param_1 + 0x37c),param_4);
  format_string_to_buffer_10545140((byte *)(param_1 + 0x2e3),(char *)0x1059a5fc/*ROM*/,
               (void *)(uint)*(ushort *)(*(int *)(param_1 + 0x37c) + 2),param_4);
  format_string_to_buffer_10545140((byte *)(param_1 + 0x2ed),(char *)0x1059a604/*ROM*/,
               (void *)(uint)*(ushort *)(*(int *)(param_1 + 0x37c) + 4),param_4);
  format_string_to_buffer_10545140((byte *)(param_1 + 0x2f7),(char *)0x1059a60c/*ROM*/,
               (void *)(uint)*(ushort *)(*(int *)(param_1 + 0x37c) + 6),param_4);
  iVar3 = param_1 + 8;
  pvVar2 = (void *)menu_item_register(iVar3);
  glyph_draw(pvVar2,(byte *)(param_1 + 0x2d9));
  pvVar2 = (void *)menu_item_register(iVar3);
  glyph_draw(pvVar2,(byte *)(param_1 + 0x2e3));
  pvVar2 = (void *)menu_item_register(iVar3);
  glyph_draw(pvVar2,(byte *)(param_1 + 0x2ed));
  pvVar2 = (void *)menu_item_register(iVar3);
  glyph_draw(pvVar2,(byte *)(param_1 + 0x2f7));
  iVar3 = menu_item_register(iVar3);
  (((vtbl_entry*)(*(int *)(iVar3 + 0xc)))[1].fn)(iVar3 + *(short *)(*(int *)(iVar3 + 0xc) + 8),1);
  return;
}
