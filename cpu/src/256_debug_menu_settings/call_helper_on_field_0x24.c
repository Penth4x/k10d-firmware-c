/* @k10d call_helper_on_field_0x24 @ 0x104f1c74
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 256_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Reads the 4-byte field at offset 0x24 of the object in param_1 and passes it to
 *   dispatch_class_state_two_or_three, returning the result.
 * summary:
 *   This is a one-line wrapper that dereferences param_1 + 0x24 and forwards that value as
 *   the sole argument to dispatch_class_state_two_or_three. The return value of
 *   dispatch_class_state_two_or_three is returned directly to the caller. No other side
 *   effects, globals, or camera-specific operations are visible in the pseudocode, and the
 *   callee's role is unknown, so no subsystem can be inferred.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_helper_on_field_0x24(int param_1)

{
  uint32_t uVar1;
  
  uVar1 = dispatch_class_state_two_or_three(*(uint32_t *)(param_1 + 0x24));
  return uVar1;
}
