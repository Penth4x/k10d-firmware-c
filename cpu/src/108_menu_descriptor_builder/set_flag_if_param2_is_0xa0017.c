/* @k10d set_flag_if_param2_is_0xa0017 @ 0x10429c7a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 108_menu_descriptor_builder (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t set_flag_if_param2_is_0xa0017(int param_1,int param_2)

{
  if (param_2 == 0xa0017) {
    set_flg_obj((uint32_t *)(param_1 + 0x18), 0x1);
  }
  return 0;
}
