/* @k10d uart_init @ 0x103b7608
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed write_config_bytes_to_ram_0x60)
 * unit: 051_console_uart_driver (unit names are model-proposed)
 * purpose:
 *   Writes a fixed sequence of configuration values to RAM addresses 0x60 through 0x67.
 * summary:
 *   The function sets specific byte values at addresses 0x60-0x67, including 0x10 at 0x64,
 *   0x83 at 0x67, 0x30 at 0x63, and 0x13 at 0x62, while clearing bytes at 0x60, 0x61, and
 *   0x66. No callees are present, and the specific peripheral or subsystem these addresses
 *   control is not identified in the pseudocode or brief.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void uart_init(void)

{
  uRam00000064 = 0x10;
  uRam00000066 = 0;
  uRam00000067 = 0x83;
  uRam00000063 = 0x30;
  uRam00000062 = 0x13;
  DAT_00000060 = 0;
  DAT_00000061 = 0;
  return;
}
