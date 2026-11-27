/* @k10d call_helper_and_set_flag_104b3462 @ 0x104b3462
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 214_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_and_set_flag_104b3462(cls_105b7f68 *param_1)

{
  invoke_virtual_slot_two_on_two_objects_104b3bca((uint32_t)param_1);
  set_flg_obj((void *)param_1->field_0x44, 0x400000);
  return;
}
