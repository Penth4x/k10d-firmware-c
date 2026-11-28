/* @k10d free_heap_if_flagged_1045c402 @ 0x1045c402
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 129_settings_pair_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void free_heap_if_flagged_1045c402(void *heap_ptr, uint flags)

{
  if ((heap_ptr != 0) && ((flags & 1) != 0)) {
    heap_free((int)heap_ptr);
  }
  return;
}
