/* @k10d register_three_menu_items_10404a44 @ 0x10404a44
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 090_sr_fl_menu (unit names are model-proposed)
 * purpose:
 *   Stores two 16-bit values to SDRAM, retrieves three object pointers, and invokes a
 *   virtual method on each.
 * summary:
 *   The function writes param_2 and param_3 to global variables at 0x8000fb00 and
 *   0x8000fb02. It calls menu_item_register three times with param_1 to obtain three
 *   pointers (iVar1, iVar2, iVar3). It then calls menu_list_build twice, passing the first
 *   and third pointers along with the stored data addresses and lengths (3 and 4 bytes
 *   respectively). Finally, it performs virtual calls on all three objects, invoking the
 *   method at vtable offset 0xc with an argument of 1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void register_three_menu_items_10404a44(void *param_1,uint16_t param_2,uint16_t param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  _DAT_8000fb00/*SDRAM*/ = param_2;
  _DAT_8000fb02/*SDRAM*/ = param_3;
  iVar1 = menu_item_register((int)param_1);
  iVar2 = menu_item_register((int)param_1);
  iVar3 = menu_item_register((int)param_1);
  menu_list_build((void *)iVar1,(void *)&DAT_8000fb00/*SDRAM*/,3,0);
  menu_list_build((void *)iVar3,(void *)&DAT_8000fb02/*SDRAM*/,4,0);
  (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),1);
  (**(code **)(*(int *)(iVar3 + 0xc) + 0xc))(iVar3 + *(short *)(*(int *)(iVar3 + 0xc) + 8),1);
  return;
}
