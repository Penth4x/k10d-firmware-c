/* @k10d set_flag_from_byte_state @ 0x000efe98
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Writes 0 or 0x60 to the first word of param_1 based on the value of DAT_0003c447.
 * summary:
 *   The function initializes the first 16-bit field of param_1 to 0. It then checks the
 *   global byte DAT_0003c447; if it equals 0x02 (and is not 0x03, which is redundant), it
 *   overwrites the field with 0x60. No other side effects or callees are present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_flag_from_byte_state(uint16_t *param_1)

{
  *param_1 = 0;
  if ((DAT_0003c447 != '\x03') && (DAT_0003c447 == '\x02')) {
    *param_1 = 0x60;
  }
  return;
}
