/* @k10d write_two_byte_field @ 0x10428464
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 107_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_two_byte_field(int param_1,int param_2,int param_3,uint16_t param_4)

{
  *(uint16_t *)(param_1 + 0x38 + param_3 * 2 + param_2 * 8) = param_4;
  return;
}
