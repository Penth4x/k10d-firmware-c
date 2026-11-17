/* @k10d call_two_helpers_then_third @ 0x104677b6
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 146_firmware_update (unit names are model-proposed)
 * purpose:
 *   Calls two helper functions with param_1, then passes their return values to a third
 *   function.
 * summary:
 *   The function takes a single argument, calls combine_two_lookup_results and
 *   combine_two_byte_values with that argument, and passes the two return values along with
 *   the original argument to pack_two_word_value_10467880. All three callees are unnamed,
 *   so the specific subsystem or behavior cannot be determined from the pseudocode alone.
 *   The module context suggests firmware update, but the code does not reveal specific
 *   update operations.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_two_helpers_then_third(uint32_t param_1)

{
  uint32_t uVar1;
  uint32_t uVar2;
  
  uVar1 = combine_two_lookup_results(param_1);
  uVar2 = combine_two_byte_values(param_1);
  pack_two_word_value_10467880(param_1,uVar1,uVar2);
  return;
}
