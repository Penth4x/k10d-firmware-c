/* @k10d validate_range_1_to_100 @ 0x1049a286
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 203_event_dispatcher (unit names are model-proposed)
 * purpose:
 *   Returns 1 if param_2 is between 1 and 100 inclusive, otherwise 0.
 * summary:
 *   The function performs a simple bounds check on the integer parameter param_2. It
 *   returns 1 (true) if the value is >= 1 and <= 100, and 0 (false) otherwise. The first
 *   parameter param_1 is unused in the logic. No callees are invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t validate_range_1_to_100(void *param_1,int param_2)

{
  uint32_t uVar1;
  
  if ((param_2 < 1) || (uVar1 = 1, 100 < param_2)) {
    uVar1 = 0;
  }
  return uVar1;
}
