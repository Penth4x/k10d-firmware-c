/* @k10d call_subroutine_with_offset_arg_10394262 @ 0x10394262
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls a single function pointer at a fixed address, passing the first argument plus 4.
 * summary:
 *   The function takes one integer argument and immediately invokes the code located at
 *   0x1039a45e, passing param_1 + 4 as the sole argument. It performs no other operations
 *   and returns void. The target of the call is a fixed address in the firmware image,
 *   likely a function pointer or a direct call to a helper routine.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_subroutine_with_offset_arg_10394262(int param_1)

{
  (*(code *)0x1039a45e/*ROM*/)(param_1 + 4);
  return;
}
