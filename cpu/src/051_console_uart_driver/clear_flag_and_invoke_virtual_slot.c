/* @k10d clear_flag_and_invoke_virtual_slot @ 0x103b693c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 051_console_uart_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_flag_and_invoke_virtual_slot(int param_1)

{
  int iVar1;
  
  if ((*(char *)(param_1 + 0x55) != '\0') &&
     (*(uint8_t *)(param_1 + 0x55) = 0, *(char *)(param_1 + 0x54) == '\0')) {
    iVar1 = menu_item_register(param_1 + 8);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[14].fn)(iVar1 + ((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[14].adj,1);
    iVar1 = menu_item_register(param_1 + 8);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[14].fn)(iVar1 + ((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[14].adj,1);
  }
  return;
}
