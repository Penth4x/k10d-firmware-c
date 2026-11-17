/* @k10d clear_struct_field_at_offset_0x24 @ 0x10411712
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 097_display_spi_state (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_struct_field_at_offset_0x24(int param_1)

{
  init_three_field_struct((uint32_t *)(param_1 + 0x24),(void *)0x0,0);
  *(uint8_t *)(param_1 + 0x22) = 0;
  return;
}
