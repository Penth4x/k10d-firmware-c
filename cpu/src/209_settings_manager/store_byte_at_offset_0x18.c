/* @k10d store_byte_at_offset_0x18 @ 0x104aa6ea
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 209_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_byte_at_offset_0x18(int param_1,uint8_t param_2)

{
  *(uint8_t *)(param_1 + 0x18) = param_2;
  return;
}
