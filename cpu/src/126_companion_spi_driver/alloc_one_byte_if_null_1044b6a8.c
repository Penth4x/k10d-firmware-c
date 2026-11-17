/* @k10d alloc_one_byte_if_null_1044b6a8 @ 0x1044b6a8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void alloc_one_byte_if_null_1044b6a8(int param_1)

{
  if (param_1 == 0) {
    heap_alloc((void *)1);
  }
  return;
}
