/* @k10d clear_flag_and_call_helper_10486efe @ 0x10486efe
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 181_test_mode_init (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_flag_and_call_helper_10486efe(int param_1)

{
  *(uint8_t *)(param_1 + 0x58) = 0;
  check_kernel_object_id_valid((void *)(param_1 + 0x4c));
  return;
}
