/* @k10d poll_status_with_retry_1044a574 @ 0x1044a574
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Polls a status function up to 200 times, breaking on success or a specific flag, and
 *   sets a timeout or state byte on exit.
 * summary:
 *   The function enters a loop that calls sdhc_send_cmd_258 with a constant argument
 *   0x40ff8000. It checks the return value and bit 7 of the byte at offset 0x190 (400) in
 *   the object pointed to by param_1. If the condition is met, it exits the loop early.
 *   Otherwise, it calls write_buffer_via_virtual_io with argument 5 and decrements the
 *   counter. If the counter reaches 0, it writes 3 to offset 0x120. If it exits early, it
 *   checks bits 6-7 of the status byte and sets offset 0xf6 to 1 if the value is 2. Returns
 *   true if the loop exited early (success), false if it timed out.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool poll_status_with_retry_1044a574(void *param_1)

{
  short sVar1;
  int iVar2;
  
  sVar1 = 200;
  do {
    iVar2 = sdhc_send_cmd_258(param_1,0x40ff8000);
    if ((iVar2 != 0) && ((*(byte *)((int)param_1 + 400) & 0x80) != 0)) break;
    write_buffer_via_virtual_io(param_1,5);
    sVar1 = sVar1 + -1;
  } while (sVar1 != 0);
  if (sVar1 == 0) {
    *(uint32_t *)((int)param_1 + 0x120) = 3;
  }
  else if ((((*(byte *)((int)param_1 + 400) & 0x7f) >> 6) << 1 |
           (*(byte *)((int)param_1 + 400) & 0x3f) >> 5) == 2) {
    *(uint8_t *)((int)param_1 + 0xf6) = 1;
  }
  return sVar1 != 0;
}
