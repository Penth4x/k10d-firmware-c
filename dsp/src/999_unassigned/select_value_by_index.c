/* @k10d select_value_by_index @ 0x000ed484
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Copies one of five consecutive 4-byte values into a global based on a 0-4 index.
 * summary:
 *   The function takes an integer index and, if it is between 0 and 4, assigns the
 *   corresponding 4-byte value from the block starting at 0x0003c22c to the global at
 *   0x0003c228. It performs no other operations and has no callees. The role of the global
 *   and the meaning of the index are not determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void select_value_by_index(int param_1)

{
  if (param_1 == 0) {
    _DAT_0003c228 = _DAT_0003c230;
  }
  else if (param_1 == 1) {
    _DAT_0003c228 = _DAT_0003c234;
  }
  else if (param_1 == 2) {
    _DAT_0003c228 = _DAT_0003c238;
  }
  else if (param_1 == 3) {
    _DAT_0003c228 = _DAT_0003c23c;
  }
  else if (param_1 == 4) {
    _DAT_0003c228 = _DAT_0003c22c;
  }
  return;
}
