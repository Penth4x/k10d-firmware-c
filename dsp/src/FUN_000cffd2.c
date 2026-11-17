/* @k10d FUN_000cffd2 @ 0x000cffd2
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void FUN_000cffd2(int param_1,char param_2)

{
  compute_indexed_status_word(param_1);
  if (param_1 < 4) {
    DAT_0000007a = 0x23;
    DAT_00000078 = 4;
    DAT_00000079 = DAT_00000079 & 0x7f;
    clear_bit3_and_halt(*(uint16_t *)(param_1 * 2 + 0x3cfb0));
    DAT_00000048 = param_2 + -1;
    DAT_0000004e = 3;
    DAT_00000079 = DAT_00000079 & 0x3f;
  }
  else {
    clear_bit3_and_halt(*(uint16_t *)(param_1 * 2 + 0x3cfb0));
  }
  return;
}
