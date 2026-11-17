/* @k10d store_value_at_offset_0x70 @ 0x1053df10
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t store_value_at_offset_0x70(int param_1,uint32_t param_2)

{
  **(uint32_t **)(param_1 + 0x70) = param_2;
  return 0;
}
