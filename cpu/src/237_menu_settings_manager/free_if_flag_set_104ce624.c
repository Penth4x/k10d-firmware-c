/* @k10d free_if_flag_set_104ce624 @ 0x104ce624
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 237_menu_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void free_if_flag_set_104ce624(void *param_1,uint param_2)

{
  if ((param_1 != (void *)0x0) && ((param_2 & 1) != 0)) {
    heap_free((int)param_1);
  }
  return;
}
