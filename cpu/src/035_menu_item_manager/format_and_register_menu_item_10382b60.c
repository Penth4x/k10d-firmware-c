/* @k10d format_and_register_menu_item_10382b60 @ 0x10382b60
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Formats the hundreds and tens digits of param_2 into a buffer at 0x8001959c using
 *   string templates.
 * summary:
 *   The function extracts the hundreds digit (clamped to 0x63) and tens digit from param_2.
 *   It selects a base string pointer (0x105590a4 or 0x105590ac) based on whether the tens
 *   digit is zero, then calls format_string_to_buffer_10545140 to write the components into
 *   the buffer. It subsequently calls count_string_bytes and copy_string_with_limit to
 *   adjust the buffer content, and finally passes the buffer to glyph_draw via a handle
 *   from menu_item_register.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void format_and_register_menu_item_10382b60(int param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  void *pvVar3;
  void *pvVar4;
  
  pvVar3 = (void *)(param_2 / 100 & 0xffff);
  if ((void *)0x63 < pvVar3) {
    pvVar3 = (void *)0x63;
  }
  pvVar4 = (void *)((param_2 % 100 & 0xffffU) / 10);
  if (pvVar4 == 0) {
    pcVar2 = (char *)0x105590ac/*ROM*/;
  }
  else {
    pcVar2 = (char *)0x105590a4/*ROM*/;
  }
  format_string_to_buffer_10545140((uint8_t *)0x8001959c/*SDRAM*/,pcVar2,pvVar3,pvVar4);
  iVar1 = count_string_bytes((char *)0x8001959c/*SDRAM*/);
  copy_string_with_limit((char *)0x8001959c/*SDRAM*/,(void *)0x105590b0/*ROM*/,5 - iVar1);
  pvVar3 = (void *)menu_item_register(param_1);
  glyph_draw(pvVar3,(byte *)0x8001959c/*SDRAM*/);
  return;
}
