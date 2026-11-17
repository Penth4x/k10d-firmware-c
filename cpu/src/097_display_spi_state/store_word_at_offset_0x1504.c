/* @k10d store_word_at_offset_0x1504 @ 0x10416f2c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 097_display_spi_state (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_word_at_offset_0x1504(int param_1,uint32_t param_2)

{
  *(uint32_t *)(param_1 + 0x1504) = param_2;
  return;
}
