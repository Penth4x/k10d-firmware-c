/* @k10d console_putchar @ 0x103b764c
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed wait_tx_ready_write_byte)
 * unit: 051_console_uart_driver (unit names are model-proposed)
 * purpose:
 *   Spins until bit 3 of DAT_00000060 is set, then writes param_1 to DAT_00000061.
 * summary:
 *   The function polls DAT_00000060 in a do-while loop until bit 3 (value 8) is set. It
 *   then stores the input byte param_1 into DAT_00000061. The globals DAT_00000060 and
 *   DAT_00000061 are not identified in the project brief, but the pattern of polling a
 *   status bit and writing a data byte is consistent with a UART or serial port transmit
 *   operation. No other callees are present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void console_putchar(uint8_t param_1)

{
  do {
  } while ((DAT_00000060 & 8) == 0);
  DAT_00000061 = param_1;
  return;
}
