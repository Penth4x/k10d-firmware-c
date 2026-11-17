/* @k10d clear_state_block @ 0x000dbb00
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Zeroes a group of global variables and sets one to 1.
 * summary:
 *   The function writes zero to eight global variables (DAT_0003c820 through DAT_0003c888)
 *   and sets DAT_0003c884 to 1. It has no callees and no arguments. The specific role of
 *   these globals is not determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void clear_state_block(void)

{
  _DAT_0003c820 = 0;
  _DAT_0003c824 = 0;
  _DAT_0003c840 = 0;
  _DAT_0003c848 = 0;
  _DAT_0003c844 = 0;
  _DAT_0003c84c = 0;
  _DAT_0003c80a = 0;
  _DAT_0003c886 = 0;
  _DAT_0003c888 = 0;
  _DAT_0003c884 = 1;
  return;
}
