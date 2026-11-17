/* @k10d set_flag_at_offset_0x34_10462b22 @ 0x10462b22
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 139_cpucom_dispatch (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t set_flag_at_offset_0x34_10462b22(int param_1)

{
  set_flg_obj((uint32_t *)(param_1 + 0x34));
  return 0;
}
