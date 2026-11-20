/* @k10d evaluate_state_flag_condition @ 0x000cd602
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * purpose:
 *   Computes a boolean status flag based on multiple DAT global state bits and one callee
 *   result.
 * summary:
 *   The function reads numerous DAT_0003xxxx globals and calls
 *   check_two_flag_conditions_000e6c7e to determine a return value of 0, 1, or -1. It sets
 *   bit 7 (0x80) of DAT_0003ce06 under specific conditions involving DAT_0003f283,
 *   DAT_0003c041, and DAT_0003c394. The logic combines bitwise tests on various state
 *   registers without any MMIO writes or complex data processing.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int evaluate_state_flag_condition(void)

{
  int iVar1;
  
  if (((((DAT_0003c021 & 2) == 0) && (((DAT_0003c391 & 4) != 0 || ((DAT_0003c000 & 8) != 0)))) &&
      (((iVar1 = check_two_flag_conditions_000e6c7e(), iVar1 == 0 &&
        ((((DAT_0003c390 == '\x01' && (DAT_0003c392 != '\x01')) && (DAT_0003c392 != '\x04')) ||
         (DAT_0003c390 == '\x02')))) ||
       (((DAT_0003c390 == '\0' && ((DAT_00000005 & 4) == 0)) || ((DAT_0003cbef & 0x20) != 0)))))) ||
     ((DAT_0003c4dd & 1) != 0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = 1;
  }
  if ((iVar1 == 1) && ((DAT_0003ce06 & 0x40) != 0)) {
    iVar1 = 0;
  }
  if (((DAT_0003f283 & 1) == 0) && (DAT_0003c041 != '\0')) {
    DAT_0003ce06 = DAT_0003ce06 | 0x80;
    iVar1 = -1;
  }
  if ((DAT_0003c394 & 0xf) >> 2 == 2) {
    DAT_0003ce06 = DAT_0003ce06 | 0x80;
  }
  if ((DAT_0003f284 & 8) != 0) {
    iVar1 = 1;
  }
  if (((DAT_0003c122 == '\b') || (DAT_0003c122 == '\t')) ||
     (((DAT_0003c143 & 0x40) != 0 && (((DAT_00000008 & 2) != 0 && ((DAT_0003c128 & 0x40) == 0))))))
  {
    iVar1 = 1;
  }
  return iVar1;
}
