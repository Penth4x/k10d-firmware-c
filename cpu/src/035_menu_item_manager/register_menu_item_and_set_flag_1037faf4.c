/* @k10d register_menu_item_and_set_flag_1037faf4 @ 0x1037faf4
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Stores a short flag to a global, copies 2 bytes from an object, and calls a virtual
 *   method with the flag's boolean value.
 * summary:
 *   The function writes param_2 to the global sRam800044c0. It calls menu_item_register
 *   twice with param_1, likely to obtain an object pointer or handle. It then calls
 *   menu_list_build to copy 2 bytes from the result of the first call to address
 *   0x800044c0. Finally, it performs a virtual call on the object returned by the second
 *   call, passing the boolean result of (sRam800044c0 != 0) as an argument.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void register_menu_item_and_set_flag_1037faf4(int param_1,short param_2)

{
  uint32_t uVar1;
  int iVar2;
  
  sRam800044c0 = param_2;
  uVar1 = menu_item_register(param_1);
  menu_list_build((void *)uVar1,(void *)0x800044c0/*SDRAM*/,2,0);
  iVar2 = menu_item_register(param_1);
  (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))
            (iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),sRam800044c0 != 0);
  return;
}
