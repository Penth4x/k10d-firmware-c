/* @k10d alloc_and_zero_small_struct_10433120 @ 0x10433120
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 119_event_context_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void alloc_and_zero_small_struct_10433120(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0xc), param_1 != (uint32_t *)0x0)) {
    *param_1 = 0;
    param_1[1] = 0;
    *(uint8_t *)(param_1 + 2) = 0;
  }
  return;
}
