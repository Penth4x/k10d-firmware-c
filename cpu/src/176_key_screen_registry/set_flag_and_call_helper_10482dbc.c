/* @k10d set_flag_and_call_helper_10482dbc @ 0x10482dbc
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 176_key_screen_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t set_flag_and_call_helper_10482dbc(int param_1)

{
  *(uint8_t *)(param_1 + 0x28) = 1;
  eventflag_clr_flg((uint32_t *)(param_1 + 0x20),(uint)(3));
  return 1;
}
