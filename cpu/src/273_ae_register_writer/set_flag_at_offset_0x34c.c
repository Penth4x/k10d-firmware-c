/* @k10d set_flag_at_offset_0x34c @ 0x10514ce2
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 273_ae_register_writer (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_flag_at_offset_0x34c(int param_1)

{
  set_flg_obj((uint32_t *)(param_1 + 0x34c));
  return;
}
