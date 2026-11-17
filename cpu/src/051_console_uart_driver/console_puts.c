/* @k10d console_puts @ 0x103b7674
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed print_string_with_crlf)
 * unit: 051_console_uart_driver (unit names are model-proposed)
 * purpose:
 *   Prints a null-terminated string character-by-character, expanding CR to CRLF.
 * summary:
 *   Iterates over the input string until a null terminator. For each character, it calls
 *   console_putchar to output the byte; if the byte is a carriage return (0x0d), it also
 *   outputs a line feed (0x0a) immediately after. This is a standard console/UART string
 *   output routine with CRLF translation.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void console_puts(char *param_1)

{
  char cVar1;
  
  cVar1 = *param_1;
  while (cVar1 != '\0') {
    if ((cVar1 == '\r') || (cVar1 == '\n')) {
      console_putchar(0xd);
      console_putchar(10);
      cVar1 = param_1[1];
    }
    else {
      console_putchar(cVar1);
      cVar1 = param_1[1];
    }
    param_1 = param_1 + 1;
  }
  return;
}
