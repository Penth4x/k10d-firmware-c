/* @k10d reset_four_subobjects @ 0x10395e04
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 040_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void reset_four_subobjects(uint32_t param_1)

{
  call_helper_with_offset_pointer_10395d84(param_1,0);
  call_helper_with_offset_pointer_10395da4(param_1,0);
  call_helper_with_offset_pointer_10395dc4(param_1,0);
  call_helper_with_offset_pointer_10395de4(param_1,0);
  return;
}
