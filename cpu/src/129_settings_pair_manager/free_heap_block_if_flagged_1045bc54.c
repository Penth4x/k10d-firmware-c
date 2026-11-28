/* @k10d free_heap_block_if_flagged_1045bc54 @ 0x1045bc54
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 129_settings_pair_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void free_heap_block_if_flagged_1045bc54(void *block_ptr,uint flags)

{
  // Free the heap block only when the pointer is non-null and bit 0 of flags is set.
  if ((block_ptr != 0) && ((flags & 1) != 0)) {
    heap_free((int)block_ptr);
  }
  return;
}
