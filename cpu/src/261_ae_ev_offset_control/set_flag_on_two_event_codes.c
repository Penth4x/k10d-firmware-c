/* @k10d set_flag_on_two_event_codes @ 0x104f8d38
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 261_ae_ev_offset_control (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t set_flag_on_two_event_codes(int param_1,int param_2)

{
  if (param_2 == 0x300002) {
    set_flg_obj((uint32_t *)(param_1 + 0x2c));
  }
  else if (param_2 == 0x1010000) {
    set_flg_obj((uint32_t *)(param_1 + 0x2c));
  }
  return 0;
}
