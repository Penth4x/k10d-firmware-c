/* @k10d invoke_object_method_at_offset_0x10_104406b8 @ 0x104406b8
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Dereferences the pointer at offset 0x10 of param_1 and calls the function stored there.
 * summary:
 *   The function takes a single pointer argument, loads the pointer located at offset 0x10
 *   within that structure, and passes it as the sole argument to set_flag_with_notify. It
 *   acts as a thin wrapper or thunk around set_flag_with_notify, likely used to dispatch a
 *   specific operation on an object whose method table or function pointer is stored at
 *   that offset. No other side effects or state modifications are visible in the
 *   pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_object_method_at_offset_0x10_104406b8(void *param_1)

{
  set_flag_with_notify(*(void **)((int)param_1 + 0x10));
  return;
}
