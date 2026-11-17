/* @k10d format_menu_item_string @ 0x1038b440
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Builds two formatted message strings in SDRAM by selecting ROM templates based on input
 *   flags and appending retrieved values.
 * summary:
 *   The function retrieves several values from param_3 via small accessor functions
 *   (read_first_word_1045c66c, read_byte_at_offset_two, etc.) and selects one of multiple
 *   string templates located in ROM (0x10559984-0x105599fc) based on param_2, param_4, and
 *   param_5. It uses format_string_to_buffer_10545140 to write the formatted result to two
 *   SDRAM buffers (0x800197d8 and 0x800197e3). Finally, it passes these buffers to
 *   glyph_draw via a handle obtained from menu_item_register, likely for display or
 *   transmission.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void format_menu_item_string(int param_1,int param_2,uint16_t *param_3,uint param_4,char param_5)

{
  uint16_t *puVar1;
  uint16_t *puVar2;
  uint16_t *puVar3;
  int iVar4;
  uint uVar5;
  uint16_t *puVar6;
  uint16_t *puVar7;
  void *pvVar8;
  char *pcVar11;
  uint16_t *puVar12;
  uint16_t *puVar13;
  uintptr_t sp;
  uint *puVar14;
  uint8_t auStack_38 [4];
  uint8_t auStack_b [3];
  byte bVar9;
  byte bVar10;
  
  puVar14 = (uint *)auStack_38;
  puVar12 = param_3;
  puVar13 = (uint16_t *)param_4;
  puVar1 = (uint16_t *)read_first_word_1045c66c(param_3);
  bVar9 = read_byte_at_offset_two(param_3);
  puVar2 = (uint16_t *)(uint)bVar9;
  bVar9 = read_byte_at_offset_three(param_3);
  puVar3 = (uint16_t *)(uint)bVar9;
  bVar9 = read_byte_at_offset_5(param_3);
  iVar4 = (*(code *)0x1045c808/*ROM*/)(param_3);
  if (iVar4 == 0) {
    uVar5 = 0xc;
  }
  else {
    uVar5 = (*(code *)0x1045c808/*ROM*/)(param_3);
  }
  puVar6 = (uint16_t *)(uVar5 & 0xff);
  bVar10 = read_byte_at_offset_six(param_3);
  puVar7 = (uint16_t *)(uint)bVar10;
  iVar4 = (*(code *)0x1045c816/*ROM*/)(param_3);
  if (param_4 == 0) {
    if (param_2 == 0) {
      pcVar11 = (char *)0x10559984/*ROM*/;
      puVar2 = puVar13;
    }
    else {
      pcVar11 = (char *)0x10559990/*ROM*/;
      *puVar14 = (uint)puVar3;
      puVar12 = puVar1;
    }
  }
  else if (param_4 == 1) {
    if (param_2 == 0) {
      pcVar11 = (char *)0x105599a0/*ROM*/;
      puVar2 = puVar13;
    }
    else {
      pcVar11 = (char *)0x105599ac/*ROM*/;
      *puVar14 = (uint)puVar1;
      puVar12 = puVar2;
      puVar2 = puVar3;
    }
  }
  else if (param_2 == 0) {
    pcVar11 = (char *)0x105599bc/*ROM*/;
    puVar2 = puVar13;
  }
  else {
    pcVar11 = (char *)0x105599c8/*ROM*/;
    *puVar14 = (uint)puVar1;
    puVar12 = puVar3;
  }
  format_string_to_buffer_10545140((uint8_t *)0x800197d8/*SDRAM*/,pcVar11,puVar12,puVar2);
  if (param_5 == '\0') {
    if (param_2 == 0) {
      pcVar11 = (char *)0x105599d8/*ROM*/;
      puVar6 = puVar12;
      puVar7 = puVar2;
    }
    else {
      pcVar11 = (char *)0x105599e0/*ROM*/;
      puVar6 = (uint16_t *)(uint)bVar9;
    }
  }
  else {
    if (iVar4 == 0) {
      pcVar11 = (char *)0x105599ec/*ROM*/;
    }
    else {
      pcVar11 = (char *)0x105599f0/*ROM*/;
    }
    format_string_to_buffer_10545140(auStack_b,pcVar11,puVar12,puVar2);
    if (param_2 == 0) {
      pcVar11 = (char *)0x105599f4/*ROM*/;
      puVar6 = puVar12;
      puVar7 = puVar2;
    }
    else {
      pcVar11 = (char *)0x105599fc/*ROM*/;
      *puVar14 = (uint)auStack_b;
    }
  }
  format_string_to_buffer_10545140((uint8_t *)0x800197e3/*SDRAM*/,pcVar11,puVar6,puVar7);
  pvVar8 = (void *)menu_item_register(param_1);
  glyph_draw(pvVar8,(byte *)0x800197d8/*SDRAM*/);
  pvVar8 = (void *)menu_item_register(param_1);
  glyph_draw(pvVar8,(byte *)0x800197e3/*SDRAM*/);
  return;
}
