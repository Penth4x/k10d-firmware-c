/* @k10d invoke_object_method_at_offset_0x10_104ea71c @ 0x104ea71c
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 255_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Dereferences the pointer at offset 0x10 of param_1 and calls the function stored there.
 * summary:
 *   The function takes a single object pointer, loads the function pointer located at
 *   offset 0x10 within that object, and invokes it. It acts as a thin wrapper or thunk
 *   around clear_flag_with_notify. No other side effects or state modifications are visible
 *   in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_object_method_at_offset_0x10_104ea71c(void *param_1)

{
  clear_flag_with_notify(*(void **)((int)param_1 + 0x10));
  return;
}
