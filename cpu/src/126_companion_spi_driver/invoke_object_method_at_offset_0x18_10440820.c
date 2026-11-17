/* @k10d invoke_object_method_at_offset_0x18_10440820 @ 0x10440820
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_object_method_at_offset_0x18_10440820(void *param_1)

{
  set_flag_with_notify(*(void **)((int)param_1 + 0x18));
  return;
}
