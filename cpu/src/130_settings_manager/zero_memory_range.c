/* @k10d zero_memory_range @ 0x1045ccf6
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 130_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void zero_memory_range(void *unused_ctx,uint32_t *start,uint32_t *end)

{
  /* Zero 32-bit words from start up to (but not including) end. */
  for (; start != end; start = start + 1) {
    *start = 0;
  }
  return;
}
