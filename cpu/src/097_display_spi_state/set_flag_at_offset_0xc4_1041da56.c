/* @k10d set_flag_at_offset_0xc4_1041da56 @ 0x1041da56
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 097_display_spi_state (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_flag_at_offset_0xc4_1041da56(void *param_1)

{
  eventflag_clr_flg((void *)((char *)param_1 + 0xc4),1);
  return;
}
