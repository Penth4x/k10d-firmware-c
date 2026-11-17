/* @k10d call_subroutine_on_field_16_104ea70a @ 0x104ea70a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 255_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Dereferences the pointer at offset 0x10 of the input object and passes it to a single
 *   callee.
 * summary:
 *   The function takes a single object pointer, loads the pointer stored at offset 0x10,
 *   and forwards it as the sole argument to set_flag_with_notify. It performs no other
 *   operations and returns void. The role of the callee and the object layout are unknown,
 *   so the behavior is described mechanically.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_subroutine_on_field_16_104ea70a(void *param_1)

{
  set_flag_with_notify(*(void **)((int)param_1 + 0x10));
  return;
}
