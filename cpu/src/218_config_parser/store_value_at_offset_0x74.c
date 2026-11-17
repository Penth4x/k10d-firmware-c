/* @k10d store_value_at_offset_0x74 @ 0x104b69aa
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 218_config_parser (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_value_at_offset_0x74(int param_1,uint32_t param_2)

{
  *(uint32_t *)(param_1 + 0x74) = param_2;
  return;
}
