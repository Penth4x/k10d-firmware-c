/* @k10d read_byte_from_offset @ 0x10428d04
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 107_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint8_t read_byte_from_offset(int param_1,int param_2)

{
  return *(uint8_t *)(param_1 + 0x98 + param_2);
}
