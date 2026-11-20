/* @k10d init_object_with_offset_0x20 @ 0x1037199c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 032_sr_fl_capture_settings (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_with_offset_0x20(void *param_1)

{
  call_helper_on_struct_field_1036c46c();
  compute_and_send_two_point_offsets_10403366((cls_10598538 *)((int)param_1 + 0x20));
  call_helper_on_struct_field_1036c41a(param_1,(cls_10598538 *)((int)param_1 + 0x20),1);
  return;
}
