/* @k10d allocate_and_init_object_104d7a2a @ 0x104d7a2a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 245_param_table_access (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * allocate_and_init_object_104d7a2a(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x11c), param_1 != (uint32_t *)0x0)) {
    *param_1 = 0;
    initialize_lens_update_object(param_1 + 1,0x100);
    param_1[0x41] = 0;
    param_1[0x42] = 0;
    param_1[0x43] = 0;
    param_1[0x44] = 0;
    *(uint8_t *)(param_1 + 0x45) = 0;
    *(uint8_t *)((int)param_1 + 0x115) = 0;
    *(uint8_t *)((int)param_1 + 0x116) = 0;
    *(uint8_t *)((int)param_1 + 0x117) = 0;
    *(uint8_t *)(param_1 + 0x46) = 0;
    zero_struct_fields_104d7aa6(param_1);
  }
  return param_1;
}
