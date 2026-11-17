/* @k10d register_menu_item_if_enabled_103b69aa @ 0x103b69aa
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 051_console_uart_driver (unit names are model-proposed)
 * purpose:
 *   Returns a value from read_byte_at_offset_8 if a byte at offset 4 of the input struct is
 *   non-zero, otherwise returns 0.
 * summary:
 *   Checks the byte at param_1 + 4. If it is non-zero, it calls menu_item_register with
 *   param_1 + 8 as an argument, then calls read_byte_at_offset_8 and returns its result. If
 *   the byte is zero, it returns 0 without calling the other functions. The specific roles
 *   of the callees are unknown, so the function acts as a conditional gate for retrieving a
 *   value.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t register_menu_item_if_enabled_103b69aa(int param_1)

{
  uint32_t uVar1;
  
  uVar1 = 0;
  if (*(char *)(param_1 + 4) != '\0') {
    menu_item_register(param_1 + 8);
    uVar1 = read_byte_at_offset_8(__frv_reg_unset(4));
  }
  return uVar1;
}
