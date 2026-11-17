/* @k10d check_bitmask_overlap @ 0x100119bc
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_bitmask_overlap(uint param_1,uint param_2,uint param_3)

{
  if ((param_3 & 1) == 0) {
    if ((param_1 & param_2) != param_2) {
      return 0;
    }
  }
  else if ((param_1 & param_2) == 0) {
    return 0;
  }
  return 1;
}
