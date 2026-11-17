/* @k10d call_subroutine_with_offset_field_104b4e98 @ 0x104b4e98
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 217_error_display_handler (unit names are model-proposed)
 * purpose:
 *   Passes the value at offset 0x5c of param_1 and param_2 to a callee, then returns 1.
 * summary:
 *   The function dereferences param_1 at offset 0x5c and passes that value along with
 *   param_2 to decrement_or_init_counter. It unconditionally returns 1 after the call. The
 *   specific role of the callee and the data structure is not determinable from the
 *   provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_subroutine_with_offset_field_104b4e98(int param_1,void *param_2)

{
  decrement_or_init_counter(*(int *)(param_1 + 0x5c),param_2);
  return 1;
}
