/* @k10d set_flag_on_event_10008 @ 0x1042e246
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 110_io_control_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t set_flag_on_event_10008(int param_1,int param_2,int *param_3)

{
  if ((param_2 == 0x10008) && (*param_3 == 0)) {
    set_flg_obj((uint32_t *)(param_1 + 0x2c), 0x1);
  }
  return 0;
}
