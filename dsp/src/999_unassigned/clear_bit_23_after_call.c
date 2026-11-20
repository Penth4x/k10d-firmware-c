/* @k10d clear_bit_23_after_call @ 0x000ed6b4
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Calls FUN_000ed66c then clears bit 23 of the 32-bit value at DAT_00000005.
 * summary:
 *   Invokes the single callee FUN_000ed66c, then performs a bitwise AND with 0xe7ffffff on
 *   the global at DAT_00000005, which clears bit 23 (0x08000000) while preserving all other
 *   bits. The CONCAT13 idiom indicates a 32-bit read-modify-write on a global variable. No
 *   other side effects are visible in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void clear_bit_23_after_call(void)

{
  FUN_000ed66c();
  _DAT_00000005 = CONCAT13((char)_DAT_00000005,_DAT_00000006) & 0xe7ffffff;
  return;
}
