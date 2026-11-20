/* @k10d write_three_globals @ 0x000d5e2c
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Stores the input byte and two fixed constants into three consecutive global variables.
 * summary:
 *   The function writes param_1 to DAT_0000014a, sets DAT_0000014c to 0, and sets
 *   _DAT_0000014e to 0xec04. It has no callees and performs no other operations. The roles
 *   of these global variables are not determinable from the provided pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void write_three_globals(uint8_t param_1)

{
  DAT_0000014a = param_1;
  DAT_0000014c = 0;
  _DAT_0000014e = 0xec04;
  return;
}
