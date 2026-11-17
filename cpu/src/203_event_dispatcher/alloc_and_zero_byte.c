/* @k10d alloc_and_zero_byte @ 0x10499ffa
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 203_event_dispatcher (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void alloc_and_zero_byte(uint8_t *param_1)

{
  if ((param_1 != (uint8_t *)0x0) ||
     (param_1 = (uint8_t *)heap_alloc((void *)1), param_1 != (uint8_t *)0x0)) {
    *param_1 = 0;
  }
  return;
}
