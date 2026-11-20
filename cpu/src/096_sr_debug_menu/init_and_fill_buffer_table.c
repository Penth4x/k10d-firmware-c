/* @k10d init_and_fill_buffer_table @ 0x1040de84
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 096_sr_debug_menu (unit names are model-proposed)
 * purpose:
 *   Allocates a buffer if uninitialized, then populates a table of 15 entries by copying
 *   5-byte chunks with computed offsets.
 * summary:
 *   The function checks a flag at param_1+0x54. If set, it calls get_field_from_context
 *   four times to validate parameters and allocates a buffer via heap_alloc_2, storing the
 *   pointer at param_1+0x178. If not set, it calls forward_three_arg_call, performs a
 *   virtual call, and then loops 3 times to fill a structure at param_1+0x60. Each
 *   iteration processes 5 bytes from the allocated buffer, computing 16-bit values from a
 *   lookup table at param_1+0x5c and calling format_string_to_buffer_10545140 to write
 *   results to specific offsets. Finally, it calls glyph_draw 15 times with pointers to the
 *   filled structure.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x1040e49c) overlaps instruction at (ram,0x1040e49a)
    */

void init_and_fill_buffer_table(int param_1)

{
  byte bVar1;
  int iVar2;
  uint32_t uVar3;
  uint32_t uVar4;
  uint32_t uVar5;
  uint32_t uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  void *pvVar10;
  int iVar11;
  int iVar12;
  uintptr_t sp;
  int *piVar13;
  uint8_t auStack_38 [4];
  int iStack_18;
  ushort uStack_a;
  
  piVar13 = (int *)auStack_38;
  if (*(char *)(param_1 + 0x54) == '\0') {
    iVar7 = forward_three_arg_call(*(int *)(param_1 + 0x28),*(ushort *)(param_1 + 0x56) + 0x3c000,
                         *(uint16_t *)(param_1 + 0x58),*(void **)(param_1 + 0x178));
    if (iVar7 != 0) {
      iVar9 = param_1 + 8;
      iVar7 = menu_item_register(iVar9);
      (((vtbl_entry*)(*(int *)(iVar7 + 0xc)))[1].fn)(iVar7 + *(short *)(*(int *)(iVar7 + 0xc) + 8),0);
      switch(*(uint8_t *)(*(int *)(param_1 + 0x178) + (uint)*(ushort *)(param_1 + 0x5e))) {
      case 1:
        iVar7 = menu_item_register(iVar9);
        (((vtbl_entry*)(*(int *)(iVar7 + 0xc)))[1].fn)(iVar7 + *(short *)(*(int *)(iVar7 + 0xc) + 8),1);
        break;
      case 2:
        iVar7 = menu_item_register(iVar9);
        (((vtbl_entry*)(*(int *)(iVar7 + 0xc)))[1].fn)(iVar7 + *(short *)(*(int *)(iVar7 + 0xc) + 8),1);
        break;
      case 3:
        iVar7 = menu_item_register(iVar9);
        (((vtbl_entry*)(*(int *)(iVar7 + 0xc)))[1].fn)(iVar7 + *(short *)(*(int *)(iVar7 + 0xc) + 8),1);
        break;
      case 4:
        iVar7 = menu_item_register(iVar9);
        (((vtbl_entry*)(*(int *)(iVar7 + 0xc)))[1].fn)(iVar7 + *(short *)(*(int *)(iVar7 + 0xc) + 8),1);
        break;
      case 5:
        iVar7 = menu_item_register(iVar9);
        (((vtbl_entry*)(*(int *)(iVar7 + 0xc)))[1].fn)(iVar7 + *(short *)(*(int *)(iVar7 + 0xc) + 8),1);
        break;
      case 6:
        iVar7 = menu_item_register(iVar9);
        (((vtbl_entry*)(*(int *)(iVar7 + 0xc)))[1].fn)(iVar7 + *(short *)(*(int *)(iVar7 + 0xc) + 8),1);
        break;
      case 7:
        iVar7 = menu_item_register(iVar9);
        (((vtbl_entry*)(*(int *)(iVar7 + 0xc)))[1].fn)(iVar7 + *(short *)(*(int *)(iVar7 + 0xc) + 8),1);
        break;
      case 8:
        iVar7 = menu_item_register(iVar9);
        (((vtbl_entry*)(*(int *)(iVar7 + 0xc)))[1].fn)(iVar7 + *(short *)(*(int *)(iVar7 + 0xc) + 8),1);
        break;
      case 9:
        iVar7 = menu_item_register(iVar9);
        (((vtbl_entry*)(*(int *)(iVar7 + 0xc)))[1].fn)(iVar7 + *(short *)(*(int *)(iVar7 + 0xc) + 8),1);
        break;
      case 10:
        iVar7 = menu_item_register(iVar9);
        (((vtbl_entry*)(*(int *)(iVar7 + 0xc)))[1].fn)(iVar7 + *(short *)(*(int *)(iVar7 + 0xc) + 8),1);
        break;
      case 0xb:
        iVar7 = menu_item_register(iVar9);
        (((vtbl_entry*)(*(int *)(iVar7 + 0xc)))[1].fn)(iVar7 + *(short *)(*(int *)(iVar7 + 0xc) + 8),1);
        break;
      case 0xc:
        iVar7 = menu_item_register(iVar9);
        (((vtbl_entry*)(*(int *)(iVar7 + 0xc)))[1].fn)(iVar7 + *(short *)(*(int *)(iVar7 + 0xc) + 8),1);
        break;
      case 0xd:
        iVar7 = menu_item_register(iVar9);
        (((vtbl_entry*)(*(int *)(iVar7 + 0xc)))[1].fn)(iVar7 + *(short *)(*(int *)(iVar7 + 0xc) + 8),1);
        break;
      case 0xe:
        iVar7 = menu_item_register(iVar9);
        (((vtbl_entry*)(*(int *)(iVar7 + 0xc)))[1].fn)(iVar7 + *(short *)(*(int *)(iVar7 + 0xc) + 8),1);
        break;
      case 0xf:
        iVar7 = menu_item_register(iVar9);
        (((vtbl_entry*)(*(int *)(iVar7 + 0xc)))[1].fn)(iVar7 + *(short *)(*(int *)(iVar7 + 0xc) + 8),1);
        break;
      case 0x10:
        iVar7 = menu_item_register(iVar9);
        (((vtbl_entry*)(*(int *)(iVar7 + 0xc)))[1].fn)(iVar7 + *(short *)(*(int *)(iVar7 + 0xc) + 8),1);
        break;
      case 0x11:
        iVar7 = menu_item_register(iVar9);
        (((vtbl_entry*)(*(int *)(iVar7 + 0xc)))[1].fn)(iVar7 + *(short *)(*(int *)(iVar7 + 0xc) + 8),1);
        break;
      case 0x12:
        iVar7 = menu_item_register(iVar9);
        (((vtbl_entry*)(*(int *)(iVar7 + 0xc)))[1].fn)(iVar7 + *(short *)(*(int *)(iVar7 + 0xc) + 8),1);
        break;
      case 0x13:
        iVar7 = menu_item_register(iVar9);
        (((vtbl_entry*)(*(int *)(iVar7 + 0xc)))[1].fn)(iVar7 + *(short *)(*(int *)(iVar7 + 0xc) + 8),1);
        break;
      case 0x14:
        iVar7 = menu_item_register(iVar9);
        (((vtbl_entry*)(*(int *)(iVar7 + 0xc)))[1].fn)(iVar7 + *(short *)(*(int *)(iVar7 + 0xc) + 8),1);
        break;
      default:
      }
      pvVar10 = (void *)0x0;
      iStack_18 = 3;
      iVar11 = 0;
      iVar7 = 1;
      iVar9 = 0;
      do {
        iVar8 = param_1 + 0x60;
        iVar12 = *(int *)(param_1 + 0x178);
        bVar1 = *(byte *)(iVar12 + iVar7);
        iVar2 = (uint)*(ushort *)(param_1 + 0x5c) + iVar9;
        *piVar13 = (uint)*(byte *)(iVar2 + iVar12) * 0x100 + (uint)*(byte *)(iVar12 + iVar2 + 1);
        format_string_to_buffer_10545140((uint8_t *)(iVar8 + iVar11),&DAT_1059a4a0/*ROM*/,pvVar10,(void *)(uint)bVar1);
        iVar12 = *(int *)(param_1 + 0x178);
        bVar1 = *(byte *)(iVar12 + iVar7 + 1);
        iVar2 = (uint)*(ushort *)(param_1 + 0x5c) + iVar9 + 2;
        *piVar13 = (uint)*(byte *)(iVar2 + iVar12) * 0x100 + (uint)*(byte *)(iVar12 + iVar2 + 1);
        format_string_to_buffer_10545140((uint8_t *)(iVar8 + iVar11 + 0xe),&DAT_1059a4a0/*ROM*/,(void *)((int)pvVar10 + 1),
                     (void *)(uint)bVar1);
        iVar12 = *(int *)(param_1 + 0x178);
        bVar1 = *(byte *)(iVar12 + iVar7 + 2);
        iVar2 = (uint)*(ushort *)(param_1 + 0x5c) + iVar9 + 4;
        *piVar13 = (uint)*(byte *)(iVar2 + iVar12) * 0x100 + (uint)*(byte *)(iVar12 + iVar2 + 1);
        format_string_to_buffer_10545140((uint8_t *)(iVar8 + iVar11 + 0x1c),&DAT_1059a4a0/*ROM*/,(void *)((int)pvVar10 + 2),
                     (void *)(uint)bVar1);
        iVar12 = *(int *)(param_1 + 0x178);
        bVar1 = *(byte *)(iVar12 + iVar7 + 3);
        iVar2 = (uint)*(ushort *)(param_1 + 0x5c) + iVar9 + 6;
        *piVar13 = (uint)*(byte *)(iVar2 + iVar12) * 0x100 + (uint)*(byte *)(iVar12 + iVar2 + 1);
        format_string_to_buffer_10545140((uint8_t *)(iVar8 + iVar11 + 0x2a),&DAT_1059a4a0/*ROM*/,(void *)((int)pvVar10 + 3),
                     (void *)(uint)bVar1);
        iVar12 = *(int *)(param_1 + 0x178);
        bVar1 = *(byte *)(iVar12 + iVar7 + 4);
        iVar2 = (uint)*(ushort *)(param_1 + 0x5c) + iVar9 + 8;
        *piVar13 = (uint)*(byte *)(iVar2 + iVar12) * 0x100 + (uint)*(byte *)(iVar12 + iVar2 + 1);
        format_string_to_buffer_10545140((uint8_t *)(iVar8 + iVar11 + 0x38),&DAT_1059a4a0/*ROM*/,(void *)((int)pvVar10 + 4),
                     (void *)(uint)bVar1);
        pvVar10 = (void *)((int)pvVar10 + 5);
        iVar9 = iVar9 + 10;
        iVar7 = iVar7 + 5;
        iVar11 = iVar11 + 0x46;
        iStack_18 = iStack_18 + -1;
      } while (-1 < iStack_18);
      iVar9 = param_1 + 8;
      iVar7 = menu_item_register(iVar9);
      (((vtbl_entry*)(*(int *)(iVar7 + 0xc)))[1].fn)(iVar7 + *(short *)(*(int *)(iVar7 + 0xc) + 8),1);
      pvVar10 = (void *)menu_item_register(iVar9);
      glyph_draw(pvVar10,(byte *)(param_1 + 0x60));
      pvVar10 = (void *)menu_item_register(iVar9);
      glyph_draw(pvVar10,(byte *)(param_1 + 0x6e));
      pvVar10 = (void *)menu_item_register(iVar9);
      glyph_draw(pvVar10,(byte *)(param_1 + 0x7c));
      pvVar10 = (void *)menu_item_register(iVar9);
      glyph_draw(pvVar10,(byte *)(param_1 + 0x8a));
      pvVar10 = (void *)menu_item_register(iVar9);
      glyph_draw(pvVar10,(byte *)(param_1 + 0x98));
      pvVar10 = (void *)menu_item_register(iVar9);
      glyph_draw(pvVar10,(byte *)(param_1 + 0xa6));
      pvVar10 = (void *)menu_item_register(iVar9);
      glyph_draw(pvVar10,(byte *)(param_1 + 0xb4));
      pvVar10 = (void *)menu_item_register(iVar9);
      glyph_draw(pvVar10,(byte *)(param_1 + 0xc2));
      pvVar10 = (void *)menu_item_register(iVar9);
      glyph_draw(pvVar10,(byte *)(param_1 + 0xd0));
      pvVar10 = (void *)menu_item_register(iVar9);
      glyph_draw(pvVar10,(byte *)(param_1 + 0xde));
      pvVar10 = (void *)menu_item_register(iVar9);
      glyph_draw(pvVar10,(byte *)(param_1 + 0xec));
      pvVar10 = (void *)menu_item_register(iVar9);
      glyph_draw(pvVar10,(byte *)(param_1 + 0xfa));
      pvVar10 = (void *)menu_item_register(iVar9);
      glyph_draw(pvVar10,(byte *)(param_1 + 0x108));
      pvVar10 = (void *)menu_item_register(iVar9);
      glyph_draw(pvVar10,(byte *)(param_1 + 0x116));
      pvVar10 = (void *)menu_item_register(iVar9);
      glyph_draw(pvVar10,(byte *)(param_1 + 0x124));
      pvVar10 = (void *)menu_item_register(iVar9);
      glyph_draw(pvVar10,(byte *)(param_1 + 0x132));
      pvVar10 = (void *)menu_item_register(iVar9);
      glyph_draw(pvVar10,(byte *)(param_1 + 0x140));
      pvVar10 = (void *)menu_item_register(iVar9);
      glyph_draw(pvVar10,(byte *)(param_1 + 0x14e));
      pvVar10 = (void *)menu_item_register(iVar9);
      glyph_draw(pvVar10,(byte *)(param_1 + 0x15c));
      pvVar10 = (void *)menu_item_register(iVar9);
      glyph_draw(pvVar10,(byte *)(param_1 + 0x16a));
    }
  }
  else {
    uStack_a = 0;
    uVar3 = get_field_from_context(*(uint32_t *)(param_1 + 0x28),(void *)(param_1 + 0x56));
    uVar4 = get_field_from_context(*(uint32_t *)(param_1 + 0x28),(void *)(param_1 + 0x58));
    uVar5 = get_field_from_context(*(uint32_t *)(param_1 + 0x28),(void *)(param_1 + 0x5a));
    uVar6 = get_field_from_context(*(uint32_t *)(param_1 + 0x28),&uStack_a);
    if (((((char)uVar3 != '\0') && ((char)uVar4 != '\0')) && ((char)uVar5 != '\0')) &&
       ((char)uVar6 != '\0')) {
      *(uint8_t *)(param_1 + 0x54) = 0;
      uVar3 = heap_alloc_2((uint)*(ushort *)(param_1 + 0x58));
      *(uint32_t *)(param_1 + 0x178) = uVar3;
      *(ushort *)(param_1 + 0x5c) = uStack_a >> 8;
      *(ushort *)(param_1 + 0x5e) = uStack_a & 0xff;
    }
  }
  return;
}
