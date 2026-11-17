/* @k10d free_object_if_flag_set_104355c4 @ 0x104355c4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void free_object_if_flag_set_104355c4(int param_1,uint param_2)

{
  if ((param_1 != 0) && (*(void **)(param_1 + 8) = &DAT_1059f5d4/*ROM*/, (param_2 & 1) != 0)) {
    heap_free(param_1);
  }
  return;
}
