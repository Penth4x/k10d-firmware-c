/* @k10d set_field_at_offset_0x18_to_0xc @ 0x10442a9a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_field_at_offset_0x18_to_0xc(int param_1)

{
  **(uint16_t **)(param_1 + 0x18) = 0xc;
  return;
}
