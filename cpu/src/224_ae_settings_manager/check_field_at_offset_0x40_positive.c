/* @k10d check_field_at_offset_0x40_positive @ 0x104bcbec
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 224_ae_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool check_field_at_offset_0x40_positive(int param_1)

{
  return 0 < *(int *)(param_1 + 0x40);
}
