/* @k10d iterate_byte_array_with_callback @ 0x000e18d2
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Iterates over a byte array, calling a callback on each element until a termination
 *   condition is met.
 * summary:
 *   The function loops through the memory pointed to by param_1 for param_2 iterations,
 *   calling update_state_and_wait_flag on each byte. It checks DAT_0003c122 to break the
 *   loop early. After the loop, it calls either poll_status_flag_and_set_ready or
 *   busy_wait_on_mode_flag based on flags in DAT_0003c128 and DAT_0003c121. Finally, it
 *   modifies DAT_0003c122 if non-zero and returns it.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

char iterate_byte_array_with_callback(uint8_t *param_1,short param_2)

{
  if ((DAT_00000484 & 3) == 2) {
    busy_wait_on_mode_flag(0x24);
  }
  bRam00000000 = bRam00000000 & 0xf7;
  do {
    update_state_and_wait_flag(*param_1);
    param_1 = param_1 + 1;
    param_2 = param_2 + -1;
    if (param_2 == 0) break;
  } while (DAT_0003c122 == '\0');
  if (((DAT_0003c128 & 0x80) == 0) || (DAT_0003c121 < 0xf0)) {
    poll_status_flag_and_set_ready();
  }
  else {
    busy_wait_on_mode_flag(0x500);
  }
  if (DAT_0003c122 != '\0') {
    DAT_0003c122 = DAT_0003c122 + 'P';
  }
  return DAT_0003c122;
}
