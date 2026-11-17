/* @k10d set_flag_if_event_id_matches_10471116 @ 0x10471116
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 163_sr_actuator_control (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t set_flag_if_event_id_matches_10471116(int param_1,int param_2)

{
  if (param_2 == 0x1070001) {
    set_flg_obj((uint32_t *)(param_1 + 0x4c));
  }
  return 0;
}
