/* @k10d wait_and_write_byte_000f2912 @ 0x000f2912
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Waits for a status flag, writes a byte to a data register, then waits for a second
 *   status flag.
 * summary:
 *   The function first stores the value of DAT_00000061 into DAT_0003c215. It then busy-
 *   waits until bit 3 (value 8) of DAT_00000060 is set. Next, it writes the input parameter
 *   param_1 into DAT_00000061 and busy-waits until bit 4 (value 0x10) of DAT_00000060 is
 *   set. Finally, it returns param_1. The pattern suggests a simple synchronous I/O or
 *   handshake operation using two status bits and a data register.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint8_t wait_and_write_byte_000f2912(uint8_t param_1)

{
  DAT_0003c215 = DAT_00000061;
  do {
  } while ((DAT_00000060 & 8) == 0);
  DAT_00000061 = param_1;
  do {
  } while ((DAT_00000060 & 0x10) == 0);
  return param_1;
}
