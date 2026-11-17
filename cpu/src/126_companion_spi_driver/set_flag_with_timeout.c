/* @k10d set_flag_with_timeout @ 0x1043c054
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Sets a flag value (0x40 or 0) on param_1 via a helper with a 0x40 timeout.
 * summary:
 *   The function selects a 16-bit value based on param_2: 0x40 if param_2 is non-zero,
 *   otherwise 0. It then calls sci_strobe_ctrl with param_1, the selected value, and a
 *   constant 0x40 as the third argument. The specific role of param_1 and the helper is
 *   unknown, but the pattern suggests configuring a state or flag with a timeout or limit.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_flag_with_timeout(void *param_1,int param_2)

{
  ushort uVar1;
  
  uVar1 = 0x40;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  sci_strobe_ctrl(param_1,uVar1,0x40);
  return;
}
