/* @k10d call_function_on_offset_field_10484f14 @ 0x10484f14
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 177_module_state_manager (unit names are model-proposed)
 * purpose:
 *   Invokes a function pointer stored at offset 0x14 of the object passed in param_1.
 * summary:
 *   The function takes a single pointer argument and dereferences a code pointer located at
 *   offset 0x14 within that object. It then calls that function, passing the address of the
 *   field at offset 0x14 as the argument. No other operations or side effects are visible
 *   in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_function_on_offset_field_10484f14(int param_1)

{
  (*(code *)0x10428d0e/*ROM*/)(param_1 + 0x14);
  return;
}
