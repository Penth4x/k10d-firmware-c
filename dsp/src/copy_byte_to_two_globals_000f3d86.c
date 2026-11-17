/* @k10d copy_byte_to_two_globals_000f3d86 @ 0x000f3d86
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Copies the value of DAT_0003c479 into DAT_0003c478 and DAT_0003c477.
 * summary:
 *   The function performs two simple memory assignments, reading from DAT_0003c479 and
 *   writing to DAT_0003c478 and DAT_0003c477. No other operations, branches, or function
 *   calls are present. The roles of these specific data symbols are not determinable from
 *   the provided pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_byte_to_two_globals_000f3d86(void)

{
  DAT_0003c478 = DAT_0003c479;
  DAT_0003c477 = DAT_0003c479;
  return;
}
