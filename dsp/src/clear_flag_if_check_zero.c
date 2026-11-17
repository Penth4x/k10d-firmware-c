/* @k10d clear_flag_if_check_zero @ 0x000cc696
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Clears specific bits in four global byte variables and sets a bit in a fifth if a
 *   callee returns zero.
 * summary:
 *   Calls read_and_clear_flag_pair and, if the result is 0, performs bitwise AND/OR
 *   operations on DAT_000000ef, DAT_0000000f, DAT_00000005, and DAT_0003ce01, while setting
 *   DAT_0003ce21 to 100. The specific roles of these global variables are not determinable
 *   from the provided pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_flag_if_check_zero(void)

{
  int iVar1;
  
  iVar1 = read_and_clear_flag_pair();
  if (iVar1 == 0) {
    DAT_000000ef = DAT_000000ef & 0xfd;
    DAT_0003ce21 = 100;
    DAT_0000000f = DAT_0000000f & 0xe7;
    DAT_00000005 = DAT_00000005 & 0xe7;
    DAT_0003ce01 = DAT_0003ce01 & 0xfb | 2;
  }
  return;
}
