/* @k10d set_flag_on_event_0x10f0001 @ 0x1051ba6c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t set_flag_on_event_0x10f0001(uint32_t param_1,int param_2)

{
  if (param_2 == 0x10f0001) {
    set_flg_obj((uint32_t *)0x8005a15c/*SDRAM*/, 0x1);
  }
  return 0;
}
