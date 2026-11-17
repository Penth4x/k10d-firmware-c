/* @k10d release_object_at_offset_0x18_10506c1e @ 0x10506c1e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 268_spi_context_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_object_at_offset_0x18_10506c1e(int param_1)

{
  release_context_two_fields(*(void **)(param_1 + 0x18));
  return;
}
