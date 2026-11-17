/* @k10d alloc_one_byte_if_null_1052b6d0 @ 0x1052b6d0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 286_sr_calibration (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void alloc_one_byte_if_null_1052b6d0(int param_1)

{
  if (param_1 == 0) {
    heap_alloc((void *)1);
  }
  return;
}
