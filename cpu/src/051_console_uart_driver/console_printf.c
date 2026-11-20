/* @k10d console_printf @ 0x103b76a6
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed print_formatted_message)
 * unit: 051_console_uart_driver (unit names are model-proposed)
 * purpose:
 *   Formats up to four arguments into a 256-byte stack buffer and prints the result if the
 *   length is between 1 and 255.
 * summary:
 *   Calls format_string_to_buffer_1054542a to format param_1 (format string) with
 *   param_2..param_4 into auStack_118. If the returned length is in (0, 0x100), it null-
 *   terminates the buffer and passes it to console_puts for output. The callees' specific
 *   roles (e.g., vsprintf, console_puts) are not independently verified, so the function is
 *   described mechanically as a formatted-output helper.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void console_printf(void *param_1,void *param_2,void *param_3,void *param_4)

{
  struct {
    void * pvStack_c;
    void * pvStack_8;
    void * pvStack_4;
  } _cfg_c;
  int iVar1;
  uintptr_t sp;
  uint8_t auStack_118 [256];
  _cfg_c.pvStack_c = param_2;
  _cfg_c.pvStack_8 = param_3;
  _cfg_c.pvStack_4 = param_4;
  iVar1 = format_string_to_buffer_1054542a(auStack_118,param_1,&_cfg_c.pvStack_c);
  if ((0 < iVar1) && (iVar1 < 0x100)) {
    auStack_118[iVar1] = 0;
    console_puts(auStack_118);
  }
  return;
}
