/* @k10d call_two_init_helpers_10486c68 @ 0x10486c68
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 180_menu_manager (unit names are model-proposed)
 * purpose:
 *   Invokes two helper functions sequentially with the same object pointer argument.
 * summary:
 *   This function is a thin wrapper that passes its single parameter to
 *   trigger_sr_cal_transfer_104867c0 and then call_helper_with_second_field_104867ae. It is
 *   virtual method slot 4 of class cls_105b2ed8. No side effects are visible beyond the
 *   calls to the two unnamed callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_two_init_helpers_10486c68(cls_105b2ed8 *param_1)

{
  trigger_sr_cal_transfer_104867c0((int)param_1);
  call_helper_with_second_field_104867ae((int)param_1);
  return;
}
