/* @k10d check_state_condition @ 0x000e7e0c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Returns 1 if a specific condition on four unknown state variables is met, otherwise 0.
 * summary:
 *   The function reads four global variables (DAT_0003c3ab, DAT_0003c064, DAT_0003c065,
 *   DAT_0003c062, DAT_0003c063) and evaluates a series of conditional branches. It returns
 *   1 if the state matches one of several defined patterns, otherwise it returns 0. No side
 *   effects or memory writes are observed.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_state_condition(void)

{
  uint32_t uVar1;
  
  uVar1 = 0;
  if (DAT_0003c3ab == '\x01') {
    if ((DAT_0003c064 == 1) && (DAT_0003c065 != 1)) {
      uVar1 = 1;
    }
  }
  else if (DAT_0003c3ab == '\x02') {
    if (DAT_0003c065 != 1) {
      uVar1 = 1;
    }
  }
  else if (DAT_0003c064 == DAT_0003c065) {
    if (DAT_0003c062 < DAT_0003c063) {
      uVar1 = 1;
    }
  }
  else if (DAT_0003c064 < DAT_0003c065) {
    uVar1 = 1;
  }
  return uVar1;
}
