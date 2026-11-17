/* @k10d store_value_and_dispatch @ 0x10470978
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 161_sr_dma_control (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_value_and_dispatch(uint32_t param_1,int param_2)

{
  uint32_t caller_r10;
  code *UNRECOVERED_JUMPTABLE;
  int r13_in;
  
  *(uint32_t *)(r13_in + param_2) = caller_r10;
                    /* WARNING: Could not recover jumptable at 0x1047097a. Too many branches */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}
