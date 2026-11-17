/* @k10d store_param_and_dispatch @ 0x10011002
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_param_and_dispatch(uint16_t param_1)

{
  int caller_r10;
  code *UNRECOVERED_JUMPTABLE;
  int r13_in;
  
  *(uint16_t *)(r13_in + caller_r10) = param_1;
                    /* WARNING: Could not recover jumptable at 0x10011004. Too many branches */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}
