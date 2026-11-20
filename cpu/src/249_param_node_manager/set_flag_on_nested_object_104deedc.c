/* @k10d set_flag_on_nested_object_104deedc @ 0x104deedc
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 249_param_node_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Struct "cls_105bb314": ignoring overlapping field "field_0x8" */

uint32_t set_flag_on_nested_object_104deedc(cls_105bb314 *param_1)

{
  set_flg_obj((void *)param_1->field_0x70);
  return 1;
}
