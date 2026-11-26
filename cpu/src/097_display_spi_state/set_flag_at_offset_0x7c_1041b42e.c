/* @k10d set_flag_at_offset_0x7c_1041b42e @ 0x1041b42e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 097_display_spi_state (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_flag_at_offset_0x7c_1041b42e(int param_1)

{
  set_flg_obj((uint32_t *)(param_1 + 0x7c), 0x80);
  return;
}
