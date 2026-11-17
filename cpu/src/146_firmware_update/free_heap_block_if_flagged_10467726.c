/* @k10d free_heap_block_if_flagged_10467726 @ 0x10467726
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 146_firmware_update (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void free_heap_block_if_flagged_10467726(int param_1,uint param_2)

{
  if ((param_1 != 0) && ((param_2 & 1) != 0)) {
    heap_free(param_1);
  }
  return;
}
