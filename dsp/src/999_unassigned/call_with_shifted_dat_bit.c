/* @k10d call_with_shifted_dat_bit @ 0x000cc500
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Extracts bits 5-6 of DAT_0003ce02 and passes the result to set_status_flag_and_notify.
 * summary:
 *   The function reads the global DAT_0003ce02, masks out the lower 5 bits, and shifts
 *   right by 5 to isolate a 2-bit field. This value is passed as the sole argument to
 *   set_status_flag_and_notify. No other side effects or memory writes are visible in this
 *   function.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_with_shifted_dat_bit(void)

{
  set_status_flag_and_notify((DAT_0003ce02 & 0x3f) >> 5);
  return;
}
