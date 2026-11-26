/* @k10d set_flag_on_object_at_offset_0x70_104deec2 @ 0x104deec2
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 249_param_node_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Struct "cls_105bb314": ignoring overlapping field "field_0x8" */

uint32_t set_flag_on_object_at_offset_0x70_104deec2(cls_105bb314 *param_1)

{
  set_flg_obj((void *)param_1->field_0x70, *(uint32_t *)((int)param_1 + 0x5c));
  return 1;
}
