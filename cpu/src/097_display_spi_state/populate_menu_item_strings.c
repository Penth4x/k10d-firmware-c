/* @k10d populate_menu_item_strings @ 0x1040f0a8
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 097_display_spi_state (unit names are model-proposed)
 * purpose:
 *   Reads values from an object via getters, packs them with ROM descriptors, and registers
 *   each field entry.
 * summary:
 *   The function calls a series of getter functions (extract_byte_from_virtual_query,
 *   construct_and_call_with_param_104f3368, etc.) that read values from an object at
 *   param_1+0x28. It packs these values into local buffers and passes them to
 *   format_string_to_buffer_10545140 along with fixed ROM addresses (0x1059a618, etc.) and
 *   offsets within param_1 (0x385, 0x3ad, etc.). Finally, it calls menu_item_register and
 *   glyph_draw for each offset, likely registering these fields with a system, and ends
 *   with a virtual call.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void populate_menu_item_strings(int param_1)

{
  uint uVar1;
  void *pvVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uintptr_t sp;
  uint *puVar7;
  uint8_t auStack_74 [16];
  byte bStack_31;
  byte bStack_30;
  byte bStack_2f;
  byte bStack_2e;
  byte bStack_2d;
  byte bStack_2c;
  byte bStack_2b;
  byte bStack_2a;
  byte bStack_29;
  byte bStack_28;
  byte bStack_27;
  byte bStack_26;
  byte bStack_25;
  byte bStack_24;
  byte bStack_23;
  byte bStack_22;
  byte bStack_21;
  byte bStack_20;
  byte bStack_1f;
  byte bStack_1e;
  byte bStack_1d;
  byte bStack_1c;
  byte bStack_1b;
  byte bStack_1a;
  byte bStack_19;
  byte bStack_18;
  byte bStack_17;
  byte bStack_16;
  byte bStack_15;
  byte bStack_14;
  byte bStack_13;
  byte bStack_12;
  byte bStack_11;
  byte bStack_10;
  byte bStack_f;
  byte bStack_e;
  byte bStack_d;
  byte bStack_c;
  byte bStack_b;
  byte bStack_a;
  byte bStack_9;
  
  puVar7 = (uint *)auStack_74;
  bStack_31 = 0;
  bStack_30 = 0;
  bStack_2f = 0;
  bStack_2e = 0;
  extract_byte_from_virtual_query(*(uint32_t *)(param_1 + 0x28),&bStack_31);
  uVar5 = (uint)bStack_2e;
  pvVar2 = (void *)(uint)bStack_31;
  pvVar3 = (void *)(uint)bStack_30;
  *puVar7 = (uint)bStack_2f;
  puVar7[1] = uVar5;
  format_string_to_buffer_10545140((byte *)(param_1 + 0x385),(char *)0x1059a618/*ROM*/,pvVar2,pvVar3);
  bStack_2d = 0;
  bStack_2c = 0;
  bStack_2b = 0;
  bStack_2a = 0;
  bStack_29 = 0;
  bStack_28 = 0;
  bStack_27 = 0;
  bStack_26 = 0;
  bStack_25 = 0;
  bStack_24 = 0;
  bStack_23 = 0;
  bStack_22 = 0;
  bStack_21 = 0;
  bStack_20 = 0;
  bStack_1f = 0;
  bStack_1e = 0;
  construct_and_call_with_param_104f3368(*(int *)(param_1 + 0x28),&bStack_2d);
  uVar1 = (uint)bStack_2a;
  uVar5 = (uint)bStack_29;
  uVar6 = (uint)bStack_28;
  pvVar2 = (void *)(uint)bStack_2d;
  pvVar3 = (void *)(uint)bStack_2c;
  *puVar7 = (uint)bStack_2b;
  puVar7[1] = uVar1;
  puVar7[2] = uVar5;
  puVar7[3] = uVar6;
  format_string_to_buffer_10545140((byte *)(param_1 + 0x3ad),(char *)0x1059a64c/*ROM*/,pvVar2,pvVar3);
  uVar1 = (uint)bStack_24;
  uVar5 = (uint)bStack_23;
  uVar6 = (uint)bStack_22;
  pvVar2 = (void *)(uint)bStack_27;
  pvVar3 = (void *)(uint)bStack_26;
  *puVar7 = (uint)bStack_25;
  puVar7[1] = uVar1;
  puVar7[2] = uVar5;
  puVar7[3] = uVar6;
  format_string_to_buffer_10545140((byte *)(param_1 + 0x3d5),(char *)0x1059a678/*ROM*/,pvVar2,pvVar3);
  uVar5 = (uint)bStack_1e;
  pvVar2 = (void *)(uint)bStack_21;
  pvVar3 = (void *)(uint)bStack_20;
  *puVar7 = (uint)bStack_1f;
  puVar7[1] = uVar5;
  format_string_to_buffer_10545140((byte *)(param_1 + 0x3fd),(char *)0x1059a6a4/*ROM*/,pvVar2,pvVar3);
  bStack_1d = 0;
  bStack_1c = 0;
  bStack_1b = 0;
  bStack_1a = 0;
  bStack_19 = 0;
  bStack_18 = 0;
  bStack_17 = 0;
  bStack_16 = 0;
  bStack_15 = 0;
  bStack_14 = 0;
  bStack_13 = 0;
  bStack_12 = 0;
  construct_and_call_with_param_104f33b0(*(int *)(param_1 + 0x28),&bStack_1d);
  uVar1 = (uint)bStack_1a;
  uVar5 = (uint)bStack_19;
  uVar6 = (uint)bStack_18;
  pvVar2 = (void *)(uint)bStack_1d;
  pvVar3 = (void *)(uint)bStack_1c;
  *puVar7 = (uint)bStack_1b;
  puVar7[1] = uVar1;
  puVar7[2] = uVar5;
  puVar7[3] = uVar6;
  format_string_to_buffer_10545140((byte *)(param_1 + 0x425),(char *)0x1059a6d0/*ROM*/,pvVar2,pvVar3);
  uVar1 = (uint)bStack_14;
  uVar5 = (uint)bStack_13;
  uVar6 = (uint)bStack_12;
  pvVar2 = (void *)(uint)bStack_17;
  pvVar3 = (void *)(uint)bStack_16;
  *puVar7 = (uint)bStack_15;
  puVar7[1] = uVar1;
  puVar7[2] = uVar5;
  puVar7[3] = uVar6;
  format_string_to_buffer_10545140((byte *)(param_1 + 0x44d),(char *)0x1059a6fc/*ROM*/,pvVar2,pvVar3);
  query_object_via_temp_buffer_104f33f6(*(uint32_t *)(param_1 + 0x28));
  pvVar2 = (void *)query_object_via_temp_buffer_104f33f6(*(uint32_t *)(param_1 + 0x28));
  format_string_to_buffer_10545140((byte *)(param_1 + 0x475),(char *)0x1059a728/*ROM*/,pvVar2,pvVar3);
  pvVar2 = (void *)clamp_value_to_signed_byte(*(uint32_t *)(param_1 + 0x28));
  format_string_to_buffer_10545140((byte *)(param_1 + 0x49d),(char *)0x1059a734/*ROM*/,pvVar2,pvVar3);
  bStack_11 = 0;
  bStack_10 = 0;
  bStack_f = 0;
  bStack_e = 0;
  bStack_d = 0;
  bStack_c = 0;
  bStack_b = 0;
  bStack_a = 0;
  bStack_9 = 0;
  call_two_helpers_on_stack_object(*(int *)(param_1 + 0x28),&bStack_11);
  uVar1 = (uint)bStack_e;
  uVar5 = (uint)bStack_d;
  uVar6 = (uint)bStack_c;
  pvVar2 = (void *)(uint)bStack_11;
  pvVar3 = (void *)(uint)bStack_10;
  *puVar7 = (uint)bStack_f;
  puVar7[1] = uVar1;
  puVar7[2] = uVar5;
  puVar7[3] = uVar6;
  format_string_to_buffer_10545140((byte *)(param_1 + 0x4c5),(char *)0x1059a750/*ROM*/,pvVar2,pvVar3);
  pvVar2 = (void *)(uint)bStack_b;
  pvVar3 = (void *)(uint)bStack_a;
  *puVar7 = (uint)bStack_9;
  format_string_to_buffer_10545140((byte *)(param_1 + 0x4ed),(char *)0x1059a77c/*ROM*/,pvVar2,pvVar3);
  iVar4 = param_1 + 8;
  pvVar2 = (void *)menu_item_register(iVar4);
  glyph_draw(pvVar2,(byte *)(param_1 + 0x385));
  pvVar2 = (void *)menu_item_register(iVar4);
  glyph_draw(pvVar2,(byte *)(param_1 + 0x3ad));
  pvVar2 = (void *)menu_item_register(iVar4);
  glyph_draw(pvVar2,(byte *)(param_1 + 0x3d5));
  pvVar2 = (void *)menu_item_register(iVar4);
  glyph_draw(pvVar2,(byte *)(param_1 + 0x3fd));
  pvVar2 = (void *)menu_item_register(iVar4);
  glyph_draw(pvVar2,(byte *)(param_1 + 0x425));
  pvVar2 = (void *)menu_item_register(iVar4);
  glyph_draw(pvVar2,(byte *)(param_1 + 0x44d));
  pvVar2 = (void *)menu_item_register(iVar4);
  glyph_draw(pvVar2,(byte *)(param_1 + 0x475));
  pvVar2 = (void *)menu_item_register(iVar4);
  glyph_draw(pvVar2,(byte *)(param_1 + 0x49d));
  pvVar2 = (void *)menu_item_register(iVar4);
  glyph_draw(pvVar2,(byte *)(param_1 + 0x4c5));
  pvVar2 = (void *)menu_item_register(iVar4);
  glyph_draw(pvVar2,(byte *)(param_1 + 0x4ed));
  iVar4 = menu_item_register(iVar4);
  (**(code **)(*(int *)(iVar4 + 0xc) + 0xc))(iVar4 + *(short *)(*(int *)(iVar4 + 0xc) + 8),1);
  return;
}
