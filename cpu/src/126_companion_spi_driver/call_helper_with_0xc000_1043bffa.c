/* @k10d call_helper_with_0xc000_1043bffa @ 0x1043bffa
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls sci_strobe_ctrl with the two input parameters and a fixed third argument of
 *   0xc000.
 * summary:
 *   This is a thin wrapper that forwards param_1 and param_2 to sci_strobe_ctrl, appending
 *   the constant 0xc000 as the third argument. No local state is modified and no other side
 *   effects are visible in the pseudocode. The role of sci_strobe_ctrl is unknown, so the
 *   camera subsystem cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_0xc000_1043bffa(void *param_1,ushort param_2)

{
  sci_strobe_ctrl(param_1,param_2,0xc000);
  return;
}
