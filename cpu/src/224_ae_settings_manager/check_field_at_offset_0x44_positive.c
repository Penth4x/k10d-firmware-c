/* @k10d check_field_at_offset_0x44_positive @ 0x104bcbbc
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 224_ae_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool check_field_at_offset_0x44_positive(void *param_1)

{
  return 0 < *(int *)((int)param_1 + 0x44);
}
