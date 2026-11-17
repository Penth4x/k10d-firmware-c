/* @k10d set_object_field_from_flag @ 0x1036dfb2
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 024_mode_transition_control (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_object_field_from_flag(void *param_1)

{
  if (*(char *)((int)param_1 + 0x2b4) == '\0') {
    *(int *)((int)param_1 + 0x14) = (int)param_1 + 0x18;
  }
  else {
    *(uint32_t *)((int)param_1 + 0x14) = 0x80018060/*SDRAM*/;
  }
  return;
}
