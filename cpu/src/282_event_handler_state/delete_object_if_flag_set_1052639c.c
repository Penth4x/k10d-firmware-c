/* @k10d delete_object_if_flag_set_1052639c @ 0x1052639c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 282_event_handler_state (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void delete_object_if_flag_set_1052639c(uint32_t *param_1,uint param_2)

{
  if ((param_1 != (uint32_t *)0x0) && (*param_1 = 0x105d9168/*ROM*/, (param_2 & 1) != 0)) {
    heap_free((int)param_1);
  }
  return;
}
