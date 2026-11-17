/* @k10d call_helper_with_second_field_104b59ec @ 0x104b59ec
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 217_error_display_handler (unit names are model-proposed)
 * purpose:
 *   Passes the 4-byte value at offset 4 of the object pointed to by param_1 to
 *   call_single_helper_with_arg.
 * summary:
 *   This is a one-line wrapper that dereferences param_1, reads the word at offset +4, and
 *   forwards it as the sole argument to call_single_helper_with_arg. No other state is
 *   touched and no return value is used. The caller is release_object_resources_104b4bdc.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_second_field_104b59ec(int param_1)

{
  call_single_helper_with_arg((void *)(*(uint32_t *)(param_1 + 4)));
  return;
}
