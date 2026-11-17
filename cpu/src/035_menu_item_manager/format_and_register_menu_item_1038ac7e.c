/* @k10d format_and_register_menu_item_1038ac7e @ 0x1038ac7e
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Selects a string pointer based on a threshold comparison of param_2 and writes it to
 *   SDRAM via a helper.
 * summary:
 *   The function compares param_2 against NULL and 0x2710 to choose one of three hardcoded
 *   string pointers (0x10559958, 0x10559968, or 0x10559960). It calls
 *   format_string_to_buffer_10545140 to write the selected string and parameters to the
 *   SDRAM address 0x800197cd. It then calls menu_item_register with param_1 and passes the
 *   result to glyph_draw along with the SDRAM address. The specific role of the strings and
 *   the SDRAM location is not determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void format_and_register_menu_item_1038ac7e(int param_1,void *param_2,uint32_t param_3,void *param_4)

{
  void *pvVar1;
  char *pcVar2;
  
  if (param_2 == (void *)0x0) {
    pcVar2 = (char *)0x10559958/*ROM*/;
  }
  else if (param_2 < (void *)0x2710) {
    pcVar2 = (char *)0x10559968/*ROM*/;
  }
  else {
    pcVar2 = (char *)0x10559960/*ROM*/;
  }
  format_string_to_buffer_10545140((uint8_t *)0x800197cd/*SDRAM*/,pcVar2,param_2,param_4);
  pvVar1 = (void *)menu_item_register(param_1);
  glyph_draw(pvVar1,(byte *)0x800197cd/*SDRAM*/);
  return;
}
