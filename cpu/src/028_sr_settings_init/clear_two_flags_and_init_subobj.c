/* @k10d clear_two_flags_and_init_subobj @ 0x103702b2
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 028_sr_settings_init (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_two_flags_and_init_subobj(void *param_1)

{
  *(uint8_t *)((int)param_1 + 0xc4) = 0;
  *(uint8_t *)((int)param_1 + 199) = 0;
  eventflag_clr_flg((uint32_t *)((int)param_1 + 0xbc),2);
  set_flg_obj((uint32_t *)((int)param_1 + 0xbc));
  return;
}
