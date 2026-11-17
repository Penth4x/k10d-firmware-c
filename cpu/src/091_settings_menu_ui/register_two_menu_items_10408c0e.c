/* @k10d register_two_menu_items_10408c0e @ 0x10408c0e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 091_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Stores two 16-bit parameters to SDRAM and copies two source buffers to fixed SDRAM
 *   destinations.
 * summary:
 *   Writes param_2 and param_3 to SDRAM addresses 0x8000fb04 and 0x8000fb06. Calls
 *   menu_item_register twice with param_1 to obtain source pointers, then calls
 *   menu_list_build to copy 3 and 4 bytes respectively to the corresponding SDRAM
 *   locations. The specific role of the buffers and the meaning of the lengths are not
 *   determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void register_two_menu_items_10408c0e(int param_1,uint16_t param_2,uint16_t param_3)

{
  uint32_t uVar1;
  uint32_t uVar2;
  
  uRam8000fb04 = param_2;
  uRam8000fb06 = param_3;
  uVar1 = menu_item_register(param_1);
  uVar2 = menu_item_register(param_1);
  menu_list_build((void *)uVar1,(void *)0x8000fb04/*SDRAM*/,3,0);
  menu_list_build((void *)uVar2,(void *)0x8000fb06/*SDRAM*/,4,0);
  return;
}
