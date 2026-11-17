/* @k10d set_flag_on_object_at_offset_0x70_104deec2 @ 0x104deec2
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 249_param_node_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t set_flag_on_object_at_offset_0x70_104deec2(int param_1)

{
  set_flg_obj(*(uint32_t **)(param_1 + 0x70));
  return 1;
}
