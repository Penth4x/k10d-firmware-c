/* @k10d initialize_object_header @ 0x1047f57e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 170_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void initialize_object_header(cls_105aaf60 *param_1)

{
  fill_byte_array((void *)param_1->field_0x0,0,0x200);
  copy_three_bytes((void *)param_1,0x105aaf40/*ROM*/);
  copy_eight_bytes_from_source((void *)param_1,0x105aaf43/*ROM*/);
  set_byte_at_offset_0x15((void *)param_1,0xf8);
  *(uint8_t *)((int)param_1->field_0x0 + 0x1fe) = 0x55;
  *(uint8_t *)((int)param_1->field_0x0 + 0x1ff) = 0xaa;
  return;
}
