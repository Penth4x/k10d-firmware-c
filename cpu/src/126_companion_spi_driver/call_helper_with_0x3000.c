/* @k10d call_helper_with_0x3000 @ 0x1043c0fe
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls sci_strobe_ctrl with the given parameters and a fixed third argument of 0x3000.
 * summary:
 *   This is a thin wrapper that forwards param_1 and param_2 to sci_strobe_ctrl, appending
 *   the constant 0x3000 as the third argument. No other operations or side effects are
 *   visible in this function itself.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_0x3000(void *param_1,ushort param_2)

{
  sci_strobe_ctrl(param_1,param_2,0x3000);
  return;
}
