/* @k10d call_with_offset_0x14 @ 0x1048f980
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 193_sr_state_machine (unit names are model-proposed)
 * purpose:
 *   Reads the 32-bit value at offset 0x14 of param_1 and passes it as the sole argument to
 *   set_three_parameters.
 * summary:
 *   A one-line wrapper that dereferences a field at offset 0x14 of the object pointed to by
 *   param_1 and forwards it to an unknown callee. No other side effects or state changes
 *   are visible in the pseudocode. The role of the callee and the meaning of the offset are
 *   not determinable from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_with_offset_0x14(int param_1)

{
  set_three_parameters(*(uint32_t *)(param_1 + 0x14), __frv_reg_unset(5), __frv_reg_unset(6), __frv_reg_unset(7));
  return;
}
