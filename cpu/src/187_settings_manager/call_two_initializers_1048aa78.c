/* @k10d call_two_initializers_1048aa78 @ 0x1048aa78
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 187_settings_manager (unit names are model-proposed)
 * purpose:
 *   Invokes two helper functions sequentially with the same object pointer argument.
 * summary:
 *   This function takes a single pointer argument and passes it to
 *   trigger_sr_cal_transfer_104867c0 followed by call_helper_with_second_field_104867ae. It
 *   is virtual method slot 4 of class cls_105b3ae4. The specific roles of the two callees
 *   are unknown, so the behavior is described mechanically as a sequential call to two
 *   helpers.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_two_initializers_1048aa78(cls_105b3ae4 *param_1)

{
  trigger_sr_cal_transfer_104867c0((int)param_1);
  call_helper_with_second_field_104867ae((int)param_1);
  return;
}
