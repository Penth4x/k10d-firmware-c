/* @k10d increment_and_call_with_struct_fields @ 0x104b5b60
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 217_error_display_handler (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void increment_and_call_with_struct_fields(int param_1,void *param_2)

{
  if (9 < *(uint *)(param_1 + 0x28)) {
    *(uint32_t *)(param_1 + 0x28) = 0;
  }
  build_and_dispatch_parameter_block(*(uint32_t **)(param_1 + 4),*(uint *)(param_1 + 0x28) & 0xffff,0,param_2,
               *(uint16_t *)(param_1 + 0x24),*(uint16_t *)(param_1 + 0x22),
               *(char *)(param_1 + 0x20));
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  return;
}
