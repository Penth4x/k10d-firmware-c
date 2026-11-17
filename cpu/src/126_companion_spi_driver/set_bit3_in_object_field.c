/* @k10d set_bit3_in_object_field @ 0x1043fddc
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_bit3_in_object_field(int param_1)

{
  **(byte **)(param_1 + 0x1c) = **(byte **)(param_1 + 0x1c) | 8;
  return;
}
