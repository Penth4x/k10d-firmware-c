/* @k10d call_virtual_slot_with_arg_five @ 0x1052189a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 280_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_virtual_slot_with_arg_five(int param_1)

{
  call_helper_on_field_2c_10521922(__frv_reg_unset(4));
  (**(code **)(*(int *)(param_1 + 0xc) + 0x84))
            (*(short *)(*(int *)(param_1 + 0xc) + 0x80) + param_1,5);
  return 1;
}
