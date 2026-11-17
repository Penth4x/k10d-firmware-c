/* @k10d set_flag_if_byte_equals_8 @ 0x000e1458
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Sets bits 3 and 7 of DAT_0003c10f if DAT_0003c12a equals 8.
 * summary:
 *   Checks if the global byte at 0x0003c12a is 0x08. If true, it ORs the value 0x78 into
 *   the global byte at 0x0003c10f. No other side effects or callees are present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_flag_if_byte_equals_8(void)

{
  if (DAT_0003c12a == '\b') {
    DAT_0003c10f = DAT_0003c10f | 0x78;
  }
  return;
}
