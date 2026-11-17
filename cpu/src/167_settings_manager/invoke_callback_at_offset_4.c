/* @k10d invoke_callback_at_offset_4 @ 0x1047a61a
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls the function pointer stored at offset 4 of the object passed in param_1 and
 *   returns 1.
 * summary:
 *   The function dereferences the pointer at param_1 + 4 and executes it as a code pointer.
 *   It unconditionally returns 1 after the call. No other side effects or memory writes are
 *   visible in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t invoke_callback_at_offset_4(int param_1, uint32_t param_x1)

{
  (*(code *)0x10478d98/*ROM*/)(*(uint32_t *)(param_1 + 4));
  return 1;
}
