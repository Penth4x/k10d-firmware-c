/* @k10d free_pointer_at_offset_0x10c_1043d7ca @ 0x1043d7ca
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void free_pointer_at_offset_0x10c_1043d7ca(int param_1)

{
  if (*(void **)(param_1 + 0x10c) != 0) {
    set_flag2_with_notify(*(void **)(param_1 + 0x10c));
  }
  return;
}
