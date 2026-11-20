/* @k10d FUN_000db802 @ 0x000db802
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t FUN_000db802(void)

{
  uint32_t uVar1;
  
  DAT_0003c198 = 0;
  DAT_0003c193 = DAT_0003c193 & 0xcf;
  uVar1 = clear_flag_and_reset_state();
  return uVar1;
}
