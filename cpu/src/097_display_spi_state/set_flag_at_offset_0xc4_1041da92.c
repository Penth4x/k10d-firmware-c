/* @k10d set_flag_at_offset_0xc4_1041da92 @ 0x1041da92
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 097_display_spi_state (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_flag_at_offset_0xc4_1041da92(int param_1)

{
  set_flg_obj((uint32_t *)(param_1 + 0xc4), 0x2);
  return;
}
