/* @k10d clear_and_set_flag_in_struct @ 0x104ab090
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 210_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_and_set_flag_in_struct(uint32_t *param_1)

{
  *(uint16_t *)param_1[9] = 0x800;
  *(uint16_t *)param_1[7] = 0;
  *(uint32_t *)param_1[10] = 0;
  *(uint32_t *)param_1[0xb] = 0;
  *(uint32_t *)param_1[0xc] = 0;
  *(uint32_t *)param_1[0xd] = 0;
  *(uint32_t *)param_1[0xe] = 0;
  do {
  } while ((*(ushort *)param_1[8] & 0x8000) != 0);
  *(ushort *)param_1[8] = 0;
  *(uint *)*param_1 = *(uint *)*param_1 & 0xfffbffff | 4;
  return;
}
