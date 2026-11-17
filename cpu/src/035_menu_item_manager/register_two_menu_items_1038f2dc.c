/* @k10d register_two_menu_items_1038f2dc @ 0x1038f2dc
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Stores two 16-bit values to SDRAM and sends them via a helper function.
 * summary:
 *   Writes param_2 and param_3 to SDRAM addresses 0x800044d0 and 0x800044d2. Calls
 *   menu_item_register twice with param_1 to obtain pointers, then calls menu_list_build
 *   with those pointers, the SDRAM addresses, and lengths 3 and 4 respectively. The
 *   specific subsystem is not identifiable from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void register_two_menu_items_1038f2dc(int param_1,uint16_t param_2,uint16_t param_3)

{
  uint32_t uVar1;
  
  uRam800044d0 = param_2;
  uRam800044d2 = param_3;
  uVar1 = menu_item_register(param_1);
  menu_list_build((void *)uVar1,(void *)0x800044d0/*SDRAM*/,3,0);
  uVar1 = menu_item_register(param_1);
  menu_list_build((void *)uVar1,(void *)0x800044d2/*SDRAM*/,4,0);
  return;
}
