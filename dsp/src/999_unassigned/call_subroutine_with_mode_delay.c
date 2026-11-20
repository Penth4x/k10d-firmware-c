/* @k10d call_subroutine_with_mode_delay @ 0x000d5640
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Calls busy_wait_on_mode_flag once with a value selected by bits 0-1 of DAT_00000484.
 * summary:
 *   The function reads the low two bits of DAT_00000484. If they equal 2, it passes 0x3e6
 *   to busy_wait_on_mode_flag; otherwise it passes 0x3dc. The do-while loop executes
 *   exactly one iteration. The role of DAT_00000484 and busy_wait_on_mode_flag is not
 *   determinable from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_subroutine_with_mode_delay(void)

{
  int iVar1;
  uint32_t uVar2;
  
  iVar1 = 1;
  do {
    if ((DAT_00000484 & 3) == 2) {
      uVar2 = 0x3e6;
    }
    else {
      uVar2 = 0x3dc;
    }
    busy_wait_on_mode_flag(uVar2);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}
