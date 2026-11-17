/* @k10d clear_flag_and_invoke_virtual_10407630 @ 0x10407630
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 090_sr_fl_menu (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_flag_and_invoke_virtual_10407630(int param_1)

{
  int iVar1;
  
  if (((*(char *)(param_1 + 0xba) != '\0') &&
      (*(uint8_t *)(param_1 + 0xba) = 0, *(char *)(param_1 + 0xb9) == '\0')) &&
     (iVar1 = check_value_in_range_9_to_11(*(uint32_t *)(param_1 + 0x28)), iVar1 != 0)) {
    iVar1 = menu_item_register(param_1 + 8);
    (**(code **)(*(int *)(iVar1 + 0xc) + 0x74))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 0x70),1);
    iVar1 = menu_item_register(param_1 + 8);
    (**(code **)(*(int *)(iVar1 + 0xc) + 0x74))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 0x70),1);
  }
  return;
}
