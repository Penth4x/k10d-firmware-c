/* @k10d wait_for_state_two_with_optional_delay @ 0x10471bba
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 165_sr_calibration_control (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void wait_for_state_two_with_optional_delay(int param_1,int param_2)

{
  int iVar1;
  
  store_value_at_offset_0x48(param_1,0);
  invoke_virtual_slot_six_10471338(param_1,5);
  release_object_at_offset_0x24_104717d4(param_1);
  iVar1 = get_field_at_offset_0x48(param_1);
  while (iVar1 != 2) {
    poll_state_and_dispatch(param_1);
    if (param_2 != 0) {
      call_helper_on_struct_field_104718d0(param_1);
      invoke_virtual_method_on_nested_object_1047131a(param_1,500);
      release_object_at_offset_0x2c_104718e2(param_1);
      invoke_virtual_method_on_nested_object_1047131a(param_1,500);
    }
    iVar1 = get_field_at_offset_0x48(param_1);
  }
  return;
}
