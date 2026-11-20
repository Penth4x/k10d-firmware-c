/* @k10d reset_two_word_state @ 0x000cc4a2
 * name: model (proposed by the local model from the decompile, confidence 0.55)
 * purpose:
 *   Clears two 16-bit state words to 0xffff and one byte to 0, then calls two helper
 *   functions.
 * summary:
 *   The function writes 0 to _DAT_0003cef4, sets _DAT_0003ce32 and _DAT_0003cc6a to 0xffff,
 *   then calls update_state_flags_and_offset with argument 0xffff and FUN_000cc4cc. The
 *   roles of the DAT globals and the two callees are not established, so the broader
 *   subsystem context is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void reset_two_word_state(void)

{
  _DAT_0003cef4 = 0;
  _DAT_0003ce32 = 0xffff;
  _DAT_0003cc6a = 0xffff;
  update_state_flags_and_offset(0xffff);
  FUN_000cc4cc();
  return;
}
