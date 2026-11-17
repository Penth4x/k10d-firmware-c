/* @k10d check_two_flag_conditions_000e6ab2 @ 0x000e6ab2
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Returns 1 if a global equals 1 and at least one of two other global bit flags is clear.
 * summary:
 *   Reads three global variables: DAT_0003c4a4, DAT_0003c038, and DAT_0003c000. It returns
 *   1 when DAT_0003c4a4 is 1 and either bit 0 of DAT_0003c038 is 0 or bit 2 of DAT_0003c000
 *   is 0; otherwise it returns 0. No memory writes or function calls are performed.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_two_flag_conditions_000e6ab2(void)

{
  uint32_t uVar1;
  
  uVar1 = 0;
  if ((DAT_0003c4a4 == '\x01') && (((DAT_0003c038 & 1) == 0 || ((DAT_0003c000 & 4) == 0)))) {
    uVar1 = 1;
  }
  return uVar1;
}
