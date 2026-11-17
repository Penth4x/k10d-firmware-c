/* @k10d forward_call_via_offset_0x20 @ 0x1039c514
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Dereferences a pointer at offset 0x20 of param_1 and forwards all four arguments to the
 *   target function.
 * summary:
 *   This is a thin wrapper that loads a function pointer or object pointer from the 0x20
 *   byte offset of the first argument. It then calls iterate_range_and_call_match with that
 *   dereferenced value as the first argument, passing param_2, param_3, and param_4
 *   unchanged. The role of the target function at 0x1049577e is unknown, so the specific
 *   subsystem cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void forward_call_via_offset_0x20(void *param_1,uint *param_2,void *param_3,void *param_4)

{
  iterate_range_and_call_match(*(void **)((int)param_1 + 0x20),param_2,param_3,param_4);
  return;
}
