/* @k10d call_helper_and_set_flag_104b3462 @ 0x104b3462
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 214_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_and_set_flag_104b3462(int param_1)

{
  invoke_virtual_slot_two_on_two_objects_104b3bca(__frv_reg_unset(4));
  set_flg_obj(*(uint32_t **)(param_1 + 0x44));
  return;
}
