/* @k10d call_helper_with_0xe00 @ 0x1043c008
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Forwards its two arguments to sci_strobe_ctrl, appending the constant 0xe00 as a third
 *   parameter.
 * summary:
 *   A thin wrapper that invokes sci_strobe_ctrl with param_1, param_2, and the fixed value
 *   0xe00. No local state is modified and no other side effects are visible. The role of
 *   sci_strobe_ctrl is unknown, so the subsystem cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_0xe00(void *param_1,ushort param_2)

{
  sci_strobe_ctrl(param_1,param_2,0xe00);
  return;
}
