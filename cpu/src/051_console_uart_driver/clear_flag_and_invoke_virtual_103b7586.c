/* @k10d clear_flag_and_invoke_virtual_103b7586 @ 0x103b7586
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 051_console_uart_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t clear_flag_and_invoke_virtual_103b7586(cls_10566724 *param_1,int param_2)

{
  int iVar1;
  
  if ((((param_1->field_0x54 != '\0') && (param_2 == 0x1160002)) &&
      (param_1->field_0x54 = 0, param_1->field_0x55 == '\0')) && (param_1->field_0x54 == '\0')) {
    iVar1 = menu_item_register((int)&param_1->field5_0x8);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[14].fn)(iVar1 + ((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[14].adj,1);
    iVar1 = menu_item_register((int)&param_1->field5_0x8);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[14].fn)(iVar1 + ((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[14].adj,1);
  }
  return 0;
}
