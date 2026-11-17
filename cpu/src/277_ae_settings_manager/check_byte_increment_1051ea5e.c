/* @k10d check_byte_increment_1051ea5e @ 0x1051ea5e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 277_ae_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool check_byte_increment_1051ea5e(int param_1)

{
  return (uint)*(byte *)(param_1 + 5) == *(byte *)(param_1 + 4) - 1;
}
