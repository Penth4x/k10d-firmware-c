/* @k10d loop_until_flag_then_lookup @ 0x1045b626
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 129_settings_pair_manager (unit names are model-proposed)
 * purpose:
 *   Iterates a state machine until a flag condition is met, then performs a table lookup
 *   and final update.
 * summary:
 *   The function enters a loop calling pack_lens_fw_update_word with a constant 0x42c80000,
 *   checking CF/ZF flags. Inside the loop, it updates two local variables via
 *   multiply_fixed_point_values_10544412 and compute_float_division with specific
 *   constants. After the loop exits, it calls count_leading_zeros to get an index, masks it
 *   to 16 bits, uses it to index a table at 0x105a2ce0, and passes the result to
 *   multiply_fixed_point_values_10544412. The specific subsystem is not identifiable from
 *   the provided callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void loop_until_flag_then_lookup(void)

{
  uint uVar1;
  uint32_t uVar2;
  byte in_CF;
  byte in_ZF;
  uint in_stack_00000000;
  
  uVar2 = 0;
  while (pack_lens_fw_update_word(in_stack_00000000,0x42c80000), (in_CF | in_ZF) != 1) {
    uVar2 = multiply_fixed_point_values_10544412(uVar2,0x40549fe5);
    in_stack_00000000 = compute_float_division(in_stack_00000000,0x3dcccccd);
  }
  uVar1 = count_leading_zeros(in_stack_00000000);
  multiply_fixed_point_values_10544412(uVar2,*(uint32_t *)((uVar1 & 0xffff) * 4 + 0x105a2ce0/*ROM*/));
  return;
}
