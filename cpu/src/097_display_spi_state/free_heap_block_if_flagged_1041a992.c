/* @k10d free_heap_block_if_flagged_1041a992 @ 0x1041a992
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 097_display_spi_state (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void free_heap_block_if_flagged_1041a992(void *param_1,uint param_2)

{
  if ((param_1 != (void *)0x0) && ((param_2 & 1) != 0)) {
    heap_free((int)param_1);
  }
  return;
}
