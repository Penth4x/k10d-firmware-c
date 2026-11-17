/* @k10d write_field_at_offset_104c281e @ 0x104c281e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 228_config_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_field_at_offset_104c281e(int param_1,int param_2,uint32_t param_3)

{
  *(uint32_t *)(param_1 + 0x118 + param_2 * 4) = param_3;
  return;
}
