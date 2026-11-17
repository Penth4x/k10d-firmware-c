/* @k10d store_two_values_and_copy @ 0x1038e008
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Stores two 16-bit parameters to SDRAM and copies data from a source object to those
 *   locations.
 * summary:
 *   Writes param_2 and param_3 to SDRAM addresses 0x800044cc and 0x800044ce. Calls
 *   menu_item_register twice with param_1 to obtain source pointers, then calls
 *   menu_list_build to copy 3 and 4 bytes respectively from those sources to the stored
 *   locations. The specific role of the data is not determinable from the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_two_values_and_copy(int param_1,uint16_t param_2,uint16_t param_3)

{
  uint32_t uVar1;
  uint32_t uVar2;
  
  uRam800044cc = param_2;
  uRam800044ce = param_3;
  uVar1 = menu_item_register(param_1);
  uVar2 = menu_item_register(param_1);
  menu_list_build((void *)uVar1,(void *)0x800044cc/*SDRAM*/,3,0);
  menu_list_build((void *)uVar2,(void *)0x800044ce/*SDRAM*/,4,0);
  return;
}
