/* @k10d reset_field_at_offset_0x44 @ 0x1046d566
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 156_settings_context_init (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t reset_field_at_offset_0x44(int param_1)

{
  wait_flg_obj((void *)(param_1 + 0x44),0);
  return 1;
}
