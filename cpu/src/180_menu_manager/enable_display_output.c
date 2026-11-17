/* @k10d enable_display_output @ 0x1048679c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 180_menu_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void enable_display_output(void *param_1)

{
  display_output_enable(*(uint32_t *)((int)param_1 + 4));
  return;
}
