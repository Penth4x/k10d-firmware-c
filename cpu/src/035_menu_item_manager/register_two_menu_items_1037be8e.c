/* @k10d register_two_menu_items_1037be8e @ 0x1037be8e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Stores two 16-bit values to SDRAM and sends them via a helper function.
 * summary:
 *   The function writes param_2 and param_3 to SDRAM addresses 0x800044b8 and 0x800044ba.
 *   It then calls menu_item_register twice with param_1, passing the results to
 *   menu_list_build along with the SDRAM addresses, lengths 3 and 4, and a zero flag. The
 *   specific roles of the callees are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void register_two_menu_items_1037be8e(int param_1,uint16_t param_2,uint16_t param_3)

{
  uint32_t uVar1;
  
  uRam800044b8 = param_2;
  uRam800044ba = param_3;
  uVar1 = menu_item_register(param_1);
  menu_list_build((void *)uVar1,(void *)0x800044b8/*SDRAM*/,3,0);
  uVar1 = menu_item_register(param_1);
  menu_list_build((void *)uVar1,(void *)0x800044ba/*SDRAM*/,4,0);
  return;
}
