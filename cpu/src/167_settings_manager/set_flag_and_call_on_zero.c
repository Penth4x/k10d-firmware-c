/* @k10d set_flag_and_call_on_zero @ 0x104756f0
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Writes param_2 to byte offset 0xd of the object in param_1 and calls
 *   clear_struct_field_at_offset_4 when param_2 is zero.
 * summary:
 *   Stores a single byte into the structure pointed to by param_1 at offset 0xd. If the
 *   stored value is 0, it invokes the uncharacterized callee
 *   clear_struct_field_at_offset_4. No other side effects or MMIO accesses are visible in
 *   the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_flag_and_call_on_zero(int param_1,int param_2)

{
  *(char *)(param_1 + 0xd) = (char)param_2;
  if (param_2 == 0) {
    clear_struct_field_at_offset_4(__frv_reg_unset(4));
  }
  return;
}
