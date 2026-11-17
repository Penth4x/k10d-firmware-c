/* @k10d check_and_set_state_flag_000d0cfe @ 0x000d0cfe
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Evaluates multiple global flag conditions and sets DAT_0003ce10 or modifies
 *   DAT_0003ce62-64 based on the result.
 * summary:
 *   Calls compute_clamped_offset_value_000cd256 and checks its return value against zero.
 *   If zero, it inspects bits in DAT_0003ce04, DAT_0003f2d9, DAT_0003c036, DAT_0003c198,
 *   and DAT_0003ce67. If all specific conditions are met, it calls
 *   set_bit1_of_dat_0003ce62(1) and sets DAT_0003ce10 to 1, returning 0. If conditions
 *   fail, it sets bit 0 of DAT_0003ce62 and clears DAT_0003ce63/64, returning 0x10. If the
 *   initial check fails, it clears DAT_0003ce10 and returns 0x12.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_and_set_state_flag_000d0cfe(void)

{
  int iVar1;
  uint32_t uVar2;
  
  uVar2 = 0x10;
  iVar1 = compute_clamped_offset_value_000cd256();
  if ((iVar1 == 0) && (((DAT_0003ce04 & 8) == 0 || ((DAT_0003f2d9 & 0x20) == 0)))) {
    if ((((DAT_0003ce04 & 8) == 0) || ((DAT_0003f2d9 & 0x10) == 0)) && ((DAT_0003c036 & 1) == 0)) {
      if (((DAT_0003c198 & 2) == 0) && (DAT_0003ce67 == '\0')) {
        set_bit1_of_dat_0003ce62(1);
        DAT_0003ce10 = 1;
        uVar2 = 0;
      }
      else {
        DAT_0003ce62 = DAT_0003ce62 | 1;
        DAT_0003ce63 = 0;
        DAT_0003ce64 = 0;
      }
    }
  }
  else {
    DAT_0003ce10 = 0;
    uVar2 = 0x12;
  }
  return uVar2;
}
