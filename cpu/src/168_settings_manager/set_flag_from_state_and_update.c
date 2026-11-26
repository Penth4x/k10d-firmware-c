/* @k10d set_flag_from_state_and_update @ 0x1047c70e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 168_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t set_flag_from_state_and_update(int param_1,int *param_2)

{
  if (*param_2 == 0) {
    *(uint8_t *)(param_1 + 0x6c) = 1;
  }
  else {
    if (*param_2 != 1) {
      return 0;
    }
    *(uint8_t *)(param_1 + 0x6c) = 0;
  }
  set_flg_obj((uint32_t *)(param_1 + 0x24), 0x1);
  return 0;
}
