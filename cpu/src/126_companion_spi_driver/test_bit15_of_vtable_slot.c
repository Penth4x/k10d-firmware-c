/* @k10d test_bit15_of_vtable_slot @ 0x104420f0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool test_bit15_of_vtable_slot(int param_1)

{
  return (**(ushort **)(param_1 + 0x14) & 0x8000) != 0;
}
