/* @k10d register_two_menu_items_10382b02 @ 0x10382b02
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Stores two 16-bit parameters to SDRAM and copies two buffer contents to fixed SDRAM
 *   addresses.
 * summary:
 *   Writes param_2 and param_3 to SDRAM locations 0x800044c4 and 0x800044c6. Calls
 *   menu_item_register twice with param_1 to obtain two source pointers, then calls
 *   menu_list_build to copy 3 bytes from the first pointer to 0x800044c4 and 4 bytes from
 *   the second pointer to 0x800044c6. The specific camera subsystem is not determinable
 *   from the available information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void register_two_menu_items_10382b02(int param_1,uint16_t param_2,uint16_t param_3)

{
  uint32_t uVar1;
  uint32_t uVar2;
  
  uRam800044c4 = param_2;
  uRam800044c6 = param_3;
  uVar1 = menu_item_register(param_1);
  uVar2 = menu_item_register(param_1);
  menu_list_build((void *)uVar1,(void *)0x800044c4/*SDRAM*/,3,0);
  menu_list_build((void *)uVar2,(void *)0x800044c6/*SDRAM*/,4,0);
  return;
}
