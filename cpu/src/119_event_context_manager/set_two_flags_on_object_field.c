/* @k10d set_two_flags_on_object_field @ 0x10433b80
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 119_event_context_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t set_two_flags_on_object_field(void *param_1)

{
  write_object_field_byte((int *)(*(uint32_t *)((int)param_1 + 0x1c)),(int)(0xe),(uint)(1));
  write_object_field_byte((int *)(*(uint32_t *)((int)param_1 + 0x1c)),(int)(2),(uint)(1));
  return 1;
}
