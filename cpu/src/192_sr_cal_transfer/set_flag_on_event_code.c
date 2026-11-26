/* @k10d set_flag_on_event_code @ 0x1048f43a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 192_sr_cal_transfer (unit names are model-proposed)
 * purpose:
 *   Sets a flag in the object at offset 0x24 if the event code is 0xa00003 or 0xa00001.
 * summary:
 *   Checks if param_2 matches either 0xa00003 or 0xa00001. If so, calls set_flg_obj on the
 *   memory location at param_1 + 0x24. Returns 0. This is virtual slot 2 of cls_105b3fbc.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t set_flag_on_event_code(cls_105b3fbc *param_1,int param_2)

{
  if ((param_2 == 0xa00003) || (param_2 == 0xa00001)) {
    set_flg_obj((void *)&param_1->field_0x24, 0x20000);
  }
  return 0;
}
