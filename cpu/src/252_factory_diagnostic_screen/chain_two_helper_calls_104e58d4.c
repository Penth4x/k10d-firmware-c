/* @k10d chain_two_helper_calls_104e58d4 @ 0x104e58d4
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 252_factory_diagnostic_screen (unit names are model-proposed)
 * purpose:
 *   Calls a helper to get a value, then passes it with two pointers to a second helper and
 *   returns the result.
 * summary:
 *   The function calls get_or_init_sram_buffer_10478858 with no arguments to obtain an
 *   initial value. It then calls parse_three_digit_ascii_value, passing the initial value
 *   along with param_2 and param_3. The return value of the second call is returned
 *   directly. The specific roles of the callees and parameters are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t chain_two_helper_calls_104e58d4(uint32_t param_1,void *param_2,void *param_3)

{
  uint32_t uVar1;
  
  uVar1 = get_or_init_sram_buffer_10478858();
  uVar1 = parse_three_digit_ascii_value(uVar1,param_2,param_3);
  return uVar1;
}
