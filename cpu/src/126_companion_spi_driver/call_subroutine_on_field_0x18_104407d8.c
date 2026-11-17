/* @k10d call_subroutine_on_field_0x18_104407d8 @ 0x104407d8
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Dereferences the pointer at offset 0x18 of the input object and passes it to a single
 *   callee.
 * summary:
 *   The function takes a single object pointer, loads the pointer stored at offset 0x18,
 *   and passes that value as the sole argument to clear_flag3_with_notify. It performs no
 *   other operations and returns void. The role of the callee and the object layout are not
 *   known from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_subroutine_on_field_0x18_104407d8(void *param_1)

{
  clear_flag3_with_notify(*(void **)((int)param_1 + 0x18));
  return;
}
