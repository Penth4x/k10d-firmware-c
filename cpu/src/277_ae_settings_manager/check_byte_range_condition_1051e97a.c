/* @k10d check_byte_range_condition_1051e97a @ 0x1051e97a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 277_ae_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool check_byte_range_condition_1051e97a(int param_1)

{
  return (uint)*(byte *)(param_1 + 4) <= (uint)*(byte *)(param_1 + 5) + (uint)*(byte *)(param_1 + 3)
  ;
}
