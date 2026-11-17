/* @k10d set_object_field_at_offset_0x10 @ 0x10491ef6
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 194_event_queue_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_object_field_at_offset_0x10(void *param_1,void *param_2)

{
  *(void **)((int)param_1 + 0x10) = param_2;
  return;
}
