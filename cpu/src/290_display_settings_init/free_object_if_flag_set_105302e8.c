/* @k10d free_object_if_flag_set_105302e8 @ 0x105302e8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 290_display_settings_init (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void free_object_if_flag_set_105302e8(int param_1,uint param_2)

{
  if ((param_1 != 0) && (*(uint32_t *)(param_1 + 0x14) = 0x10602e64, (param_2 & 1) != 0)) {
    heap_free(param_1);
  }
  return;
}
