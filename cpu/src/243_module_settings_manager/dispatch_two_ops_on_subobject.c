/* @k10d dispatch_two_ops_on_subobject @ 0x104d1bda
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 243_module_settings_manager (unit names are model-proposed)
 * purpose:
 *   Checks a condition on param_1 and, if true, calls two helpers on the pointer at
 *   param_1+8 with param_2, returning 0 or 0x82.
 * summary:
 *   Calls check_field_at_offset_0x18(param_1) as a gate. When the gate is true, it
 *   dereferences the field at offset 8 of param_1 and passes that pointer plus param_2 to
 *   call_helper_on_two_object_fields and call_helper_on_two_offsets_10484910 in sequence,
 *   then returns 0. When the gate is false, it skips both helper calls and returns 0x82.
 *   The callee roles are unknown, so the specific subsystem cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_two_ops_on_subobject(int param_1,uint32_t param_2)

{
  bool bVar2;
  uint32_t uVar1;
  
  bVar2 = check_field_at_offset_0x18(param_1);
  if (bVar2) {
    call_helper_on_two_object_fields(*(uint32_t *)(param_1 + 8),param_2);
    call_helper_on_two_offsets_10484910(*(uint32_t *)(param_1 + 8),param_2);
    uVar1 = 0;
  }
  else {
    uVar1 = 0x82;
  }
  return uVar1;
}
