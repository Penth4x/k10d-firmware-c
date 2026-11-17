/* @k10d store_word_at_offset_0x1500 @ 0x104165b6
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 097_display_spi_state (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_word_at_offset_0x1500(int param_1,uint32_t param_2)

{
  *(uint32_t *)(param_1 + 0x1500) = param_2;
  return;
}
