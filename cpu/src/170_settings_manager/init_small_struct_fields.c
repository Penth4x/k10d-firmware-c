/* @k10d init_small_struct_fields @ 0x1047e0ae
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 170_settings_manager (unit names are model-proposed)
 * purpose:
 *   Initializes a 24-byte heap-allocated structure with fixed default values.
 * summary:
 *   If the input pointer is null, it allocates 0x18 bytes via heap_alloc. It then sets the
 *   first word to 0, the second word to 1, and the remaining words to 0. The function
 *   returns void, so the allocated pointer is not returned to the caller, implying the
 *   caller manages the pointer or this is a helper for a specific initialization pattern.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_small_struct_fields(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x18), param_1 != (uint32_t *)0x0)) {
    *param_1 = 0;
    param_1[1] = 1;
    *(uint16_t *)(param_1 + 2) = 0;
    *(uint16_t *)((int)param_1 + 10) = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
  }
  return;
}
