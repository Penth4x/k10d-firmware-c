/* @k10d register_menu_item_with_label_1038ace0 @ 0x1038ace0
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Selects a message payload pointer based on param_2 and forwards it with param_1 through
 *   two helper functions.
 * summary:
 *   The function chooses one of three fixed addresses in ROM (0x1055996c, 0x10559974, or
 *   0x1055997c) depending on whether param_2 is 1, 2, or something else. It calls
 *   format_string_to_buffer_10545140 with a fixed SDRAM address (0x800197d2), the selected
 *   pointer, and the remaining parameters. It then calls menu_item_register with param_1
 *   and passes the result to glyph_draw along with the same SDRAM address. The specific
 *   roles of the callees and the data at the fixed addresses are not provided, so the
 *   higher-level camera subsystem context is not determinable.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void register_menu_item_with_label_1038ace0(int param_1,int param_2,void *param_3,void *param_4)

{
  void *pvVar1;
  char *pcVar2;
  
  if (param_2 == 1) {
    pcVar2 = (char *)0x1055996c/*ROM*/;
  }
  else if (param_2 == 2) {
    pcVar2 = (char *)0x10559974/*ROM*/;
  }
  else {
    pcVar2 = (char *)0x1055997c/*ROM*/;
  }
  format_string_to_buffer_10545140((uint8_t *)0x800197d2/*SDRAM*/,pcVar2,param_3,param_4);
  pvVar1 = (void *)menu_item_register(param_1);
  glyph_draw(pvVar1,(byte *)0x800197d2/*SDRAM*/);
  return;
}
