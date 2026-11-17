/* @k10d forward_field_5c_to_helper_104b4faa @ 0x104b4faa
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 217_error_display_handler (unit names are model-proposed)
 * purpose:
 *   Reads the 4-byte field at offset 0x5c of the object in param_1 and passes it to
 *   check_condition_then_evaluate.
 * summary:
 *   This is a thin wrapper that extracts a single 32-bit value from offset 0x5c of the
 *   structure pointed to by param_1 and forwards it as the first argument to
 *   check_condition_then_evaluate. It also passes the value in r5 (in_r5) as the second
 *   argument to the callee. No other side effects or global accesses are visible in this
 *   function.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void forward_field_5c_to_helper_104b4faa(int param_1)

{
  uint32_t r5_in;
  
  check_condition_then_evaluate(*(uint32_t *)(param_1 + 0x5c),r5_in);
  return;
}
