/* @k10d allocate_and_zero_struct_104e0340 @ 0x104e0340
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 251_buffer_state_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * allocate_and_zero_struct_104e0340(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x28), param_1 != (uint32_t *)0x0)) {
    *param_1 = 0;
    *(uint16_t *)(param_1 + 1) = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *(uint16_t *)(param_1 + 4) = 0;
    initialize_lens_update_object(param_1 + 5,0x14);
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
  }
  return param_1;
}
