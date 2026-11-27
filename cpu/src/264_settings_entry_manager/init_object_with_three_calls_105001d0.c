/* @k10d init_object_with_three_calls_105001d0 @ 0x105001d0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 264_settings_entry_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Struct "cls_105d4c70": ignoring multiple overlapping fields */

void init_object_with_three_calls_105001d0(cls_105d4c70 *param_1)

{
  toggle_pointer_field_flags((uint32_t)param_1);
  check_kernel_object_id_valid(&((uint32_t *)&(param_1->field_0x4))[2]);
  invoke_virtual_slot_two_104272e4(&param_1->field_0x1c,0xe00004,9);
  return;
}
