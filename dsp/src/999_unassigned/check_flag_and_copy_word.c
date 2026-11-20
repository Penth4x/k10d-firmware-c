/* @k10d check_flag_and_copy_word @ 0x000f6dc0
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Tests bit 6 of a global flag and conditionally calls a helper, then copies a 32-bit
 *   value to another global.
 * summary:
 *   The function checks if bit 6 (0x40) is set in DAT_0003c128. If set, it calls
 *   poll_input_and_fill_buffer with arguments 0x82, 9, a pointer to DAT_0003c13c, and 2.
 *   Regardless of the flag state, it copies the value from DAT_0003c13c to DAT_0003c134.
 *   The role of the globals and the callee is not determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void check_flag_and_copy_word(void)

{
  if ((DAT_0003c128 & 0x40) != 0) {
    poll_input_and_fill_buffer(0x82,9,(void *)&DAT_0003c13c,2);
  }
  _DAT_0003c134 = _DAT_0003c13c;
  return;
}
