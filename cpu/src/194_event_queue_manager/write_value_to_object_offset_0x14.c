/* @k10d write_value_to_object_offset_0x14 @ 0x10490064
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 194_event_queue_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_value_to_object_offset_0x14(int param_1)

{
  store_param2_to_dat_400403d4(*(uint32_t *)(param_1 + 0x14),0xff00);
  return;
}
