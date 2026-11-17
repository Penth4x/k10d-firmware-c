/* @k10d clear_flag_and_call_helper_10482dda @ 0x10482dda
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 176_key_screen_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t clear_flag_and_call_helper_10482dda(void *param_1)

{
  *(uint8_t *)((int)param_1 + 0x28) = 0;
  eventflag_clr_flg((void *)((int)param_1 + 0x20),3);
  return 1;
}
