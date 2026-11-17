/* @k10d update_flag_bits_based_on_param @ 0x000cc53e
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Conditionally sets or clears specific bits in two global byte variables based on
 *   param_1 and a status flag.
 * summary:
 *   The function first calls process_status_update with a bit from DAT_0003cb80. If the
 *   result is zero, it checks bit 6 (0x40) of DAT_0003c101 against param_1. If they match
 *   (both 0 or both non-zero), it clears bits 3 and 4 of DAT_0000000f and sets bit 3 (value
 *   8) in DAT_00000005. Otherwise, it clears the same bits in DAT_0000000f and sets bit 4
 *   (value 0x10) in DAT_00000005. The role of the global variables is not determinable from
 *   the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_flag_bits_based_on_param(int param_1)

{
  int iVar1;
  
  iVar1 = process_status_update(DAT_0003cb80 & 1);
  if (iVar1 == 0) {
    if (((param_1 == 0) && ((DAT_0003c101 & 0x40) != 0)) ||
       ((param_1 != 0 && ((DAT_0003c101 & 0x40) == 0)))) {
      DAT_0000000f = DAT_0000000f & 0xe7;
      DAT_00000005 = DAT_00000005 & 0xe7 | 8;
    }
    else {
      DAT_0000000f = DAT_0000000f & 0xe7;
      DAT_00000005 = DAT_00000005 & 0xe7 | 0x10;
    }
  }
  return;
}
