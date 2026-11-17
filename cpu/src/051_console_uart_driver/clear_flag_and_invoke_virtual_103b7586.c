/* @k10d clear_flag_and_invoke_virtual_103b7586 @ 0x103b7586
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 051_console_uart_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t clear_flag_and_invoke_virtual_103b7586(int param_1,int param_2)

{
  int iVar1;
  
  if ((((*(char *)(param_1 + 0x54) != '\0') && (param_2 == 0x1160002)) &&
      (*(uint8_t *)(param_1 + 0x54) = 0, *(char *)(param_1 + 0x55) == '\0')) &&
     (*(char *)(param_1 + 0x54) == '\0')) {
    iVar1 = menu_item_register(param_1 + 8);
    (**(code **)(*(int *)(iVar1 + 0xc) + 0x74))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 0x70),1);
    iVar1 = menu_item_register(param_1 + 8);
    (**(code **)(*(int *)(iVar1 + 0xc) + 0x74))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 0x70),1);
  }
  return 0;
}
