/* @k10d set_flag_on_event_id @ 0x1046d584
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 157_sr_event_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t set_flag_on_event_id(int param_1,int param_2)

{
  if (param_2 != 0x1050005) {
    if (param_2 < 0x1050006) {
      if (((param_2 != 0x1050001) && (param_2 != 0x1050002)) &&
         ((param_2 != 0x1050003 && (param_2 != 0x1050004)))) {
        return 0;
      }
    }
    else if (((param_2 != 0x1050006) && (param_2 != 0x1050007)) && (param_2 != 0x1070001)) {
      if (param_2 != 0x1140002) {
        return 0;
      }
      *(uint8_t *)(param_1 + 0x10) = 1;
      return 0;
    }
  }
  set_flg_obj((uint32_t *)(param_1 + 0x44));
  return 0;
}
