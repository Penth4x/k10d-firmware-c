/* @k10d free_heap_block_if_nonzero @ 0x1045b9c4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 129_settings_pair_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void free_heap_block_if_nonzero(uint32_t param_1,int param_2)

{
  if (param_2 != 0) {
    heap_free(param_2);
  }
  return;
}
