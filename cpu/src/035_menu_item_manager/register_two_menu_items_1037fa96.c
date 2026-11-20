/* @k10d register_two_menu_items_1037fa96 @ 0x1037fa96
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Stores two 16-bit parameters into SDRAM globals and copies two buffers from param_1
 *   into those locations.
 * summary:
 *   Writes param_2 to 0x800044bc and param_3 to 0x800044be. Calls menu_item_register twice
 *   with param_1 to obtain two pointers, then calls menu_list_build to copy 3 bytes from
 *   the first pointer to 0x800044bc and 4 bytes from the second pointer to 0x800044be. The
 *   specific camera subsystem is not identifiable from the available information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void register_two_menu_items_1037fa96(int param_1,uint16_t param_2,uint16_t param_3)

{
  uint32_t uVar1;
  uint32_t uVar2;
  
  uRam800044bc = param_2;
  uRam800044be = param_3;
  uVar1 = menu_item_register(param_1);
  uVar2 = menu_item_register(param_1);
  menu_list_build((void *)uVar1,(void *)0x800044bc/*SDRAM*/,3,0);
  menu_list_build((void *)uVar2,(void *)0x800044be/*SDRAM*/,4,0);
  return;
}
