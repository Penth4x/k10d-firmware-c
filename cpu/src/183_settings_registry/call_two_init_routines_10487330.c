/* @k10d call_two_init_routines_10487330 @ 0x10487330
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 183_settings_registry (unit names are model-proposed)
 * purpose:
 *   Invokes two helper functions sequentially with the same single argument.
 * summary:
 *   The function takes one integer parameter and passes it to
 *   trigger_sr_cal_transfer_104867c0 followed by call_helper_with_second_field_104867ae. No
 *   local state is modified and no return value is produced. The specific roles of the
 *   callees are unknown, so the overall behavior is a simple two-step initialization or
 *   setup sequence.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_two_init_routines_10487330(int param_1)

{
  trigger_sr_cal_transfer_104867c0(param_1);
  call_helper_with_second_field_104867ae(param_1);
  return;
}
