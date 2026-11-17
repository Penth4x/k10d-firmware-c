/* @k10d alloc_pointer_with_index @ 0x10456c6c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void alloc_pointer_with_index(uint32_t *param_1,int param_2)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)4), param_1 != (uint32_t *)0x0)) {
    *param_1 = 0;
    if (param_2 == 0) {
      *param_1 = 0x4000c600;
    }
    else if (param_2 == 1) {
      *param_1 = 0x4000c700;
    }
    else if (param_2 == 2) {
      *param_1 = 0x4000c800;
    }
    else {
      *param_1 = 0x4000c600;
    }
  }
  return;
}
