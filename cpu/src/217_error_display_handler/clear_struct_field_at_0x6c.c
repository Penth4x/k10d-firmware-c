/* @k10d clear_struct_field_at_0x6c @ 0x104b5c00
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 217_error_display_handler (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_struct_field_at_0x6c(int param_1)

{
  *(uint32_t *)(param_1 + 0x6c) = 0;
  return;
}
