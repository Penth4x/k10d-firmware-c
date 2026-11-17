/* @k10d store_two_values_and_set_flag_104deea0 @ 0x104deea0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 249_param_node_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t store_two_values_and_set_flag_104deea0(int param_1,uint32_t param_2,uint32_t param_3)

{
  *(uint32_t *)(param_1 + 0x84) = param_2;
  *(uint32_t *)(param_1 + 0x80) = param_3;
  set_flg_obj(*(uint32_t **)(param_1 + 0x70));
  return 1;
}
