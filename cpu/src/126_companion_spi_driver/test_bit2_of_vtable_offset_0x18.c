/* @k10d test_bit2_of_vtable_offset_0x18 @ 0x1043c0c8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool test_bit2_of_vtable_offset_0x18(int param_1)

{
  return (**(ushort **)(param_1 + 0x18) & 4) != 0;
}
