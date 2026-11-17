/* @k10d dispatch_on_magic_id @ 0x104261d0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 101_parameter_event_handler (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_on_magic_id(int param_1,int param_2)

{
  if (param_2 == 0x10d0001) {
    set_flag_if_param_in_range(param_1,*(uint32_t *)(param_1 + 0x28));
  }
  return 0;
}
