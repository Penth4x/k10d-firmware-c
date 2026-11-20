/* @k10d reset_object_fields_and_call_base @ 0x104c3e6a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 231_menu_state_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void reset_object_fields_and_call_base(cls_105b9458 *param_1)

{
  param_1->field_0x38 = 0;
  param_1->field_0x3a = 0;
  param_1->field_0x210 = 0;
  param_1->field_0x20 = 0;
  param_1->field_0x24 = 0;
  param_1->field_0x28 = 0;
  store_value_to_pointer_1045c510((void *)&param_1->field_0x2c,0);
  write_field_at_offset_four_1045c518((void *)&param_1->field_0x2c,0);
  release_heap_block_and_clear_104bcd58((cls_105b934c *)param_1);
  return;
}
