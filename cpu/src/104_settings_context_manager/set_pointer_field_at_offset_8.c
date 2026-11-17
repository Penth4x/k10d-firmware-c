/* @k10d set_pointer_field_at_offset_8 @ 0x104278c4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 104_settings_context_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_pointer_field_at_offset_8(void *param_1,int param_2)

{
  if (param_2 != 0) {
    *(int *)((int)param_1 + 8) = param_2;
  }
  return;
}
