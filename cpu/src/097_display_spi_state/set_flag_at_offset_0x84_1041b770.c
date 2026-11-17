/* @k10d set_flag_at_offset_0x84_1041b770 @ 0x1041b770
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 097_display_spi_state (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_flag_at_offset_0x84_1041b770(void *param_1)

{
  eventflag_clr_flg((void *)((int)param_1 + 0x84),1);
  return;
}
