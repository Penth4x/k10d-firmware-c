/* @k10d write_two_config_values @ 0x103a6caa
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 046_menu_display_control (unit names are model-proposed)
 * purpose:
 *   Retrieves a handle twice and writes two distinct parameter-value pairs to it.
 * summary:
 *   The function calls get_or_init_sram_block_1052b6fc to obtain a handle or pointer, then
 *   passes it to dispatch_event_with_two_helpers with arguments 0xfe and 4. It repeats the
 *   handle retrieval and passes the result to call_three_helpers_on_struct_1052b72e with
 *   arguments 1 and 6. The specific roles of the callees and the meaning of the constants
 *   are not determinable from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_two_config_values(uint32_t param_x0)

{
  uint32_t uVar1;
  
  uVar1 = get_or_init_sram_block_1052b6fc();
  dispatch_event_with_two_helpers((void *)uVar1,0xfe,4);
  uVar1 = get_or_init_sram_block_1052b6fc();
  call_three_helpers_on_struct_1052b72e((void *)uVar1,1,6);
  return;
}
