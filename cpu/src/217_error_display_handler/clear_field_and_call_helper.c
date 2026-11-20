/* @k10d clear_field_and_call_helper @ 0x104b59fe
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 217_error_display_handler (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_field_and_call_helper(int param_1)

{
  call_three_step_helper((uint32_t *)(*(uint32_t *)(param_1 + 4)));
  *(uint32_t *)(param_1 + 0x28) = 0;
  return;
}
