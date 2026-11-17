/* @k10d clear_struct_fields_104af000 @ 0x104af000
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 213_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t clear_struct_fields_104af000(int param_1)

{
  *(uint32_t *)(param_1 + 4) = 0;
  *(uint32_t *)(param_1 + 8) = 0;
  *(uint32_t *)(param_1 + 0x10) = 0;
  *(uint8_t *)(param_1 + 0x14) = 0;
  return 1;
}
