/* @k10d free_object_if_flag_set_1040f668 @ 0x1040f668
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 097_display_spi_state (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void free_object_if_flag_set_1040f668(int param_1,uint param_2)

{
  if ((param_1 != 0) && (*(uint32_t *)(param_1 + 8) = 0x1059be60/*ROM*/, (param_2 & 1) != 0)) {
    heap_free(param_1);
  }
  return;
}
