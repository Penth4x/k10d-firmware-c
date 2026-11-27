/* @k10d call_helper_if_field_nonzero_1048f060 @ 0x1048f060
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 191_sr_calibration_setup (unit names are model-proposed)
 * purpose:
 *   Invokes format_and_send_message_1048f158 when the object's 4-byte field at offset 4 is
 *   non-zero.
 * summary:
 *   Checks the int at param_1+4; if it is not zero, calls the single callee
 *   format_and_send_message_1048f158 with no arguments. It is virtual slot 2 of
 *   cls_105b3f00. No other side effects are visible in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_if_field_nonzero_1048f060(cls_105b3f00 *param_1, uint32_t param_2, uint32_t param_3, uint32_t param_4)
{
  if (param_1->field_0x4 != 0) {
    format_and_send_message_1048f158((uint16_t *)(uint32_t)param_1,(uint32_t)param_2,(uint32_t)param_3,(void *)(uint32_t)param_4);
  }
  return;
}
