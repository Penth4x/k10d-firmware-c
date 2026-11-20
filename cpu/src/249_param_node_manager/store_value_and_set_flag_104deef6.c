/* @k10d store_value_and_set_flag_104deef6 @ 0x104deef6
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 249_param_node_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Struct "cls_105bb314": ignoring overlapping field "field_0x8" */

uint32_t store_value_and_set_flag_104deef6(cls_105bb314 *param_1,int param_2)

{
  param_1->field_0x88 = param_2;
  set_flg_obj((void *)param_1->field_0x70);
  return 1;
}
