/* @k10d increment_or_reset_counter_field @ 0x103fdc60
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 089_settings_menu_ui (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void increment_or_reset_counter_field(int param_1,uint8_t param_2)

{
  int iVar1;
  
  **(uint8_t **)(param_1 + 4) = param_2;
  iVar1 = check_counter_at_limit(param_1,*(uint32_t *)(param_1 + 4));
  if (iVar1 == 0) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  }
  else {
    *(uint32_t *)(param_1 + 4) = *(uint32_t *)(param_1 + 8);
  }
  return;
}
