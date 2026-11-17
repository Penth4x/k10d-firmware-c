/* @k10d call_helper_with_conditional_flag @ 0x1043c068
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Selects a 16-bit flag value based on param_2 and passes it to a helper function.
 * summary:
 *   The function sets a local ushort to 0x20, or 0 if param_2 is zero. It then calls
 *   sci_strobe_ctrl with param_1, the selected flag, and the constant 0x20. The specific
 *   role of the helper and the meaning of the flag are not determinable from the provided
 *   context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_conditional_flag(void *param_1,int param_2)

{
  ushort uVar1;
  
  uVar1 = 0x20;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  sci_strobe_ctrl(param_1,uVar1,0x20);
  return;
}
