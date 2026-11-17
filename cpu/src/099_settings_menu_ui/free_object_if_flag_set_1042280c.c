/* @k10d free_object_if_flag_set_1042280c @ 0x1042280c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 099_settings_menu_ui (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void free_object_if_flag_set_1042280c(int param_1,uint param_2)

{
  if ((param_1 != 0) && (*(uint32_t *)(param_1 + 8) = 0x1059d730/*ROM*/, (param_2 & 1) != 0)) {
    heap_free(param_1);
  }
  return;
}
