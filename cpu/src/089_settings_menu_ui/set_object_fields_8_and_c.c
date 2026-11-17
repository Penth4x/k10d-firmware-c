/* @k10d set_object_fields_8_and_c @ 0x103fdc56
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 089_settings_menu_ui (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_object_fields_8_and_c(void *param_1,void *param_2,uint16_t param_3)

{
  *(uint16_t *)((int)param_1 + 0xc) = param_3;
  *(void **)((int)param_1 + 8) = param_2;
  return;
}
