/* @k10d process_object_state_change_10391310 @ 0x10391310
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 038_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void process_object_state_change_10391310(int param_1,uint32_t param_2)

{
  int *piVar1;
  
  if (*(char *)(param_1 + 0x2c4c) != '\0') {
    *(uint8_t *)(param_1 + 0x2c4e) = 1;
    add_offset_to_pointer_104df392(param_1);
    clear_flag_and_call_two_helpers_104d8346(__frv_reg_unset(4));
    piVar1 = *(int **)(param_1 + 0x2c48);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x74))((int)*(short *)(*piVar1 + 0x70) + (int)piVar1);
    }
    call_single_helper_104df450(param_1,*(uint32_t *)(param_1 + 0x2c2c));
  }
  call_single_helper_104df384(param_1,param_2);
  return;
}
