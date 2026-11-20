/* @k10d call_two_virtual_slots @ 0x103912a0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 038_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Struct "cls_105bb314": ignoring overlapping field "field_0x8" */

uint32_t call_two_virtual_slots(cls_105bb314 *param_1)

{
  forward_virtual_slot_three(param_1);
  invoke_virtual_slot_8_on_sixteen_objects();
  return 1;
}
