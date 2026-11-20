/* @k10d alloc_if_null @ 0x1052e410
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 289_test_mode_ui (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void alloc_if_null(void *param_1)

{
  if (param_1 == 0) {
    heap_alloc((void *)1);
  }
  return;
}
