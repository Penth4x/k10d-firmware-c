/* @k10d call_subroutine_with_offset_arg_104a78b0 @ 0x104a78b0
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Calls an unnamed helper then forwards two parameters to another helper using a value at
 *   offset 8 of the first argument.
 * summary:
 *   The function first calls ensure_subobject_initialized with no arguments, then calls
 *   allocate_and_init_event_struct_104a2de4 passing the 4-byte value at param_1+8 as its
 *   first argument along with param_2 and param_3. It is virtual slot 5 of cls_105b6938. No
 *   camera-specific behavior is evident from the pseudocode or callee names.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_subroutine_with_offset_arg_104a78b0(int param_1,uint32_t param_2,uint32_t param_3)

{
  ensure_subobject_initialized(__frv_reg_unset(4));
  allocate_and_init_event_struct_104a2de4(*(uint32_t *)(param_1 + 8),param_2,param_3);
  return;
}
