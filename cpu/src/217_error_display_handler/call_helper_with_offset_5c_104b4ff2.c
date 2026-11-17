/* @k10d call_helper_with_offset_5c_104b4ff2 @ 0x104b4ff2
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 217_error_display_handler (unit names are model-proposed)
 * purpose:
 *   Passes the 4-byte value at param_1+0x5c to process_two_stage_operation_104b6674.
 * summary:
 *   The function reads a 32-bit value from offset 0x5c of the object pointed to by param_1
 *   and passes it as the first argument to process_two_stage_operation_104b6674. It also
 *   passes the value in register r5 as the second argument. No other operations or side
 *   effects are visible in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_offset_5c_104b4ff2(int param_1)

{
  byte *r5_in;
  
  process_two_stage_operation_104b6674(*(uint32_t **)(param_1 + 0x5c),r5_in);
  return;
}
