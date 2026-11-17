/* @k10d call_subroutine_103b7608 @ 0x103b766c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 051_console_uart_driver (unit names are model-proposed)
 * purpose:
 *   Invokes the single callee uart_init and returns.
 * summary:
 *   This function is a one-line wrapper that calls uart_init with no arguments and returns
 *   void. It is invoked as virtual method slot 2 of class cls_105a020c. No other side
 *   effects or state changes are visible in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_subroutine_103b7608(void)

{
  uart_init();
  return;
}
