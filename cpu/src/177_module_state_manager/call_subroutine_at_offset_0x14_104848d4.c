/* @k10d call_subroutine_at_offset_0x14_104848d4 @ 0x104848d4
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 177_module_state_manager (unit names are model-proposed)
 * purpose:
 *   Calls a function pointer stored at offset 0x14 of the object passed in param_1.
 * summary:
 *   The function takes a single pointer argument, adds 0x14 to it, and invokes the code
 *   located at that address. It acts as a simple trampoline or indirect call wrapper. No
 *   other operations or side effects are visible in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_subroutine_at_offset_0x14_104848d4(int param_1)

{
  (*(code *)0x104282e2/*ROM*/)(param_1 + 0x14);
  return;
}
