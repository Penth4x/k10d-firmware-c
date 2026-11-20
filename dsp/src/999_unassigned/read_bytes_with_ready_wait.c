/* @k10d read_bytes_with_ready_wait @ 0x000e0f1a
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * purpose:
 *   Reads a sequence of bytes into a buffer, waiting for a ready flag before each read.
 * summary:
 *   The function loops param_2 times. In each iteration it waits until bit 2 of
 *   DAT_00000057 is set, then clears that bit. It calls wait_for_flag_and_store_byte with
 *   argument 0xff and stores the returned byte into the buffer pointed to by param_1,
 *   incrementing the pointer. The role of DAT_00000057 and wait_for_flag_and_store_byte is
 *   not independently verified, so the specific hardware or protocol is not named.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void read_bytes_with_ready_wait(uint8_t *param_1,short param_2)

{
  uint8_t uVar1;
  
  do {
    do {
    } while ((DAT_00000057 & 4) == 0);
    DAT_00000057 = DAT_00000057 & 0xfb;
    uVar1 = wait_for_flag_and_store_byte(0xff);
    *param_1 = uVar1;
    param_1 = param_1 + 1;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return;
}
