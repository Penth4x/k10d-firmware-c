/* @k10d init_object_and_call_helpers @ 0x103b6416
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 051_console_uart_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_and_call_helpers(int param_1)

{
  *(uint8_t *)(param_1 + 0x54) = 0;
  *(uint8_t *)(param_1 + 0x55) = 0;
  call_two_helpers_in_sequence_104920f2(param_1 + 8);
  call_helper_on_fetched_pointer();
  clear_struct_field_at_offset_8(param_1);
  return;
}
