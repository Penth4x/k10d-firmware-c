/* @k10d alloc_one_byte_if_null_10530a18 @ 0x10530a18
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 290_display_settings_init (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void alloc_one_byte_if_null_10530a18(int param_1)

{
  if (param_1 == 0) {
    heap_alloc((void *)1);
  }
  return;
}
