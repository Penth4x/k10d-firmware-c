/* @k10d check_offset_c_nonzero_10390edc @ 0x10390edc
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 038_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool check_offset_c_nonzero_10390edc(void *param_1)

{
  return *(int *)((int)param_1 + 0xc) != 0;
}
