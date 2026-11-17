/* @k10d invoke_virtual_slot_8_after_init @ 0x1036a6c0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 014_io_settings_control (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_8_after_init(int *param_1)

{
  toggle_flag_at_offset_0x2ac(__frv_reg_unset(4));
  (**(code **)(*param_1 + 0x44))((int)*(short *)(*param_1 + 0x40) + (int)param_1);
  return;
}
