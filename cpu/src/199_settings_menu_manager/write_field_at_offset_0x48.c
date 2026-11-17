/* @k10d write_field_at_offset_0x48 @ 0x104947cc
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 199_settings_menu_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_field_at_offset_0x48(void *param_1,uint32_t param_2)

{
  *(uint32_t *)((int)param_1 + 0x48) = param_2;
  return;
}
