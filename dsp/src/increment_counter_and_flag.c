/* @k10d increment_counter_and_flag @ 0x000e214e
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Increments a global counter, sets a bit in a status byte, and conditionally updates a
 *   flag based on a callee's return value.
 * summary:
 *   The function sets bit 3 of bRam00000000 and clears bit 1 of DAT_00000003. It calls
 *   poll_flag_and_set_state(5); if the result is 0, it sets bit 4 of DAT_00000003, calls
 *   wait_and_write_byte_000e0fec(0xff) to store a value in param_1, and calls
 *   poll_flag_and_set_status(5). Finally, it increments DAT_0003c122 by 0x40 if non-zero
 *   and returns it.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

char increment_counter_and_flag(uint8_t *param_1)

{
  int iVar1;
  uint8_t uVar2;
  
  bRam00000000 = bRam00000000 | 8;
  DAT_00000003 = DAT_00000003 & 0xef;
  iVar1 = poll_flag_and_set_state(5);
  if (iVar1 == 0) {
    DAT_00000003 = DAT_00000003 | 0x10;
    uVar2 = wait_and_write_byte_000e0fec(0xff);
    *param_1 = uVar2;
    poll_flag_and_set_status(5);
  }
  if (DAT_0003c122 != '\0') {
    DAT_0003c122 = DAT_0003c122 + '@';
  }
  return DAT_0003c122;
}
