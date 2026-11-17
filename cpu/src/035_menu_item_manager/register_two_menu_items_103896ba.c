/* @k10d register_two_menu_items_103896ba @ 0x103896ba
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Stores two 16-bit parameters into SDRAM globals and copies two source buffers to those
 *   global locations.
 * summary:
 *   Writes param_2 and param_3 to SDRAM addresses 0x800044c8 and 0x800044ca. Calls
 *   menu_item_register twice with param_1 to obtain two source pointers. Calls
 *   menu_list_build twice to copy 3 bytes from the first source to 0x800044c8 and 4 bytes
 *   from the second source to 0x800044ca. The specific camera subsystem is not determinable
 *   from the provided pseudocode and unknown callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void register_two_menu_items_103896ba(int param_1,uint16_t param_2,uint16_t param_3)

{
  uint32_t uVar1;
  uint32_t uVar2;
  
  uRam800044c8 = param_2;
  uRam800044ca = param_3;
  uVar1 = menu_item_register(param_1);
  uVar2 = menu_item_register(param_1);
  menu_list_build((void *)uVar1,(void *)0x800044c8/*SDRAM*/,3,0);
  menu_list_build((void *)uVar2,(void *)0x800044ca/*SDRAM*/,4,0);
  return;
}
