/* @k10d set_flag_based_on_param_1043c03a @ 0x1043c03a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Selects a 16-bit value (0 or 0x100) based on param_2 and passes it to a helper.
 * summary:
 *   The function checks if param_2 is zero. If it is, it sets a local ushort to 0;
 *   otherwise, it sets it to 0x100. It then calls sci_strobe_ctrl with param_1, the
 *   selected ushort value, and the constant 0x100. The specific role of sci_strobe_ctrl is
 *   unknown, so the camera subsystem context cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_flag_based_on_param_1043c03a(void *param_1,int param_2)

{
  ushort uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0x100;
  }
  sci_strobe_ctrl(param_1,uVar1,0x100);
  return;
}
