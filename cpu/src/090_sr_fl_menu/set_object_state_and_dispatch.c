/* @k10d set_object_state_and_dispatch @ 0x103ffa3e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 090_sr_fl_menu (unit names are model-proposed)
 * purpose:
 *   Stores a state code in the object and dispatches to a handler based on the code value.
 * summary:
 *   Writes param_2 to offset 0x18 of the object. If the code is 0x184000e, calls
 *   update_two_values_with_digit_count. For codes 0x1840018, 0x184001b, and 0x184001e, it
 *   stores a corresponding byte from global memory (0x10598384-0x10598386) at offset 0x21
 *   and calls register_and_configure_menu_item_103ffe78 with an index (0, 1, or 2). Other
 *   codes result in no further action.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_object_state_and_dispatch(int *param_1,int param_2)

{
  uint8_t uVar1;
  uint32_t uVar2;
  
  param_1[6] = param_2;
  if (param_2 == 0x184000e) {
    update_two_values_with_digit_count((int *)__frv_reg_unset(4));
  }
  else {
    if (param_2 == 0x1840018) {
      uVar2 = 0;
      uVar1 = uRam10598384;
    }
    else if (param_2 == 0x184001b) {
      uVar2 = 1;
      uVar1 = uRam10598385;
    }
    else {
      if (param_2 != 0x184001e) {
        return;
      }
      uVar2 = 2;
      uVar1 = uRam10598386;
    }
    *(uint8_t *)((int)param_1 + 0x21) = uVar1;
    register_and_configure_menu_item_103ffe78(param_1,uVar2);
  }
  return;
}
