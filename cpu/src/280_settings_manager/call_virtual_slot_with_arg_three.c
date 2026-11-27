/* @k10d call_virtual_slot_with_arg_three @ 0x1052186c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 280_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_virtual_slot_with_arg_three(cls_105d7b7c *param_1)

{
  call_helper_on_field_2c_10521922((uint32_t)param_1);
  (((vtbl_entry*)(param_1->field_0xc))[16].fn)
            ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0xc))[16].adj,3);
  return 1;
}
