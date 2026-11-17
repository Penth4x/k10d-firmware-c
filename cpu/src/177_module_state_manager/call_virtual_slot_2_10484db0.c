/* @k10d call_virtual_slot_2_10484db0 @ 0x10484db0
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 177_module_state_manager (unit names are model-proposed)
 * purpose:
 *   Invokes virtual slot 2 of an object by passing a pointer offset by 0x14 to a fixed code
 *   address.
 * summary:
 *   The function takes a single parameter and passes param_1 + 0x14 to the function at
 *   0x1042844c. This matches the Cfront virtual call idiom where the offset 0x14
 *   corresponds to virtual slot 2. No other operations or side effects are visible in the
 *   pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_virtual_slot_2_10484db0(int param_1)

{
  uint32_t uVar1;
  
  uVar1 = (*(code *)0x1042844c/*ROM*/)(param_1 + 0x14);
  return uVar1;
}
