/* @k10d toggle_state_flag_with_callback @ 0x104b5ff8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 218_config_parser (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void toggle_state_flag_with_callback(int param_1,int param_2,uint32_t param_3)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    if (param_2 != 0) {
      store_value_at_offset_0x74(param_1,param_3);
      *(uint8_t *)(param_1 + 0x18) = 0;
      *(uint32_t *)(param_1 + 0x1c) = 0;
    }
  }
  else {
    *(uint8_t *)(param_1 + 0x18) = 1;
    *(uint32_t *)(param_1 + 0x1c) = 2;
  }
  return;
}
