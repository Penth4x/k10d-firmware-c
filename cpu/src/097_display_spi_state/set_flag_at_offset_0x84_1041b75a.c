/* @k10d set_flag_at_offset_0x84_1041b75a @ 0x1041b75a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 097_display_spi_state (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_flag_at_offset_0x84_1041b75a(void *param_1)

{
  set_flg_obj((uint32_t *)((int)param_1 + 0x84));
  return;
}
