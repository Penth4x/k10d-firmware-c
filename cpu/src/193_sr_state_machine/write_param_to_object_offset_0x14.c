/* @k10d write_param_to_object_offset_0x14 @ 0x1048f95c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 193_sr_state_machine (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_param_to_object_offset_0x14(int param_1,uint param_2)

{
  write_three_config_values(*(uint32_t *)(param_1 + 0x14),param_2);
  return;
}
