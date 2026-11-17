/* @k10d format_two_menu_items @ 0x1038a7ce
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Formats two signed integer parameters into fixed-length strings using a helper
 *   function.
 * summary:
 *   The function validates and normalizes two integer inputs (param_2 and param_3),
 *   handling negative values and out-of-range cases by selecting specific string pointers
 *   and adjusting the value. It calls format_string_to_buffer_10545140 twice to write the
 *   formatted results to memory locations 0x800197c2 and 0x800197c5, then updates state via
 *   menu_item_register and glyph_draw. The logic suggests a display or logging routine for
 *   two numeric values, possibly related to camera settings or status indicators.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void format_two_menu_items(int param_1,void *param_2,void *param_3,void *param_4)

{
  void *pvVar1;
  char *pcVar2;
  
  if (((int)param_2 < 1) || (7 < (int)param_2)) {
    if (((int)param_2 < -7) || (param_2 < (void *)0x80000000/*SDRAM*/)) {
      pcVar2 = (char *)0x10559920/*ROM*/;
      param_2 = param_3;
    }
    else {
      pcVar2 = (char *)0x10559918/*ROM*/;
      param_2 = (void *)-(int)param_2;
    }
  }
  else {
    pcVar2 = (char *)0x10559910/*ROM*/;
  }
  format_string_to_buffer_10545140((uint8_t *)0x800197c2/*SDRAM*/,pcVar2,param_2,param_4);
  pvVar1 = (void *)menu_item_register(param_1);
  glyph_draw(pvVar1,(byte *)0x800197c2/*SDRAM*/);
  if (((int)param_3 < 1) || (7 < (int)param_3)) {
    if (((int)param_3 < -7) || (param_3 < (void *)0x80000000/*SDRAM*/)) {
      pcVar2 = (char *)0x10559934/*ROM*/;
    }
    else {
      pcVar2 = (char *)0x1055992c/*ROM*/;
      param_2 = (void *)-(int)param_3;
    }
  }
  else {
    pcVar2 = (char *)0x10559924/*ROM*/;
    param_2 = param_3;
  }
  format_string_to_buffer_10545140((uint8_t *)0x800197c5/*SDRAM*/,pcVar2,param_2,param_4);
  pvVar1 = (void *)menu_item_register(param_1);
  glyph_draw(pvVar1,(byte *)0x800197c5/*SDRAM*/);
  return;
}
