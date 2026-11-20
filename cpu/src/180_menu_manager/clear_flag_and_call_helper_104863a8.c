/* @k10d clear_flag_and_call_helper_104863a8 @ 0x104863a8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 180_menu_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_flag_and_call_helper_104863a8(int param_1)

{
  *(uint8_t *)(param_1 + 0x50) = 0;
  check_kernel_object_id_valid((int *)(param_1 + 0x40));
  return;
}
