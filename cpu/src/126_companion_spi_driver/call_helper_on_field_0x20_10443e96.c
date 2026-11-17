/* @k10d call_helper_on_field_0x20_10443e96 @ 0x10443e96
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Reads the pointer at offset 0x20 of param_1 and passes it to clear_flag_with_notify.
 * summary:
 *   The function dereferences param_1 + 0x20 to obtain a pointer and forwards it as the
 *   sole argument to clear_flag_with_notify. It is invoked as virtual method slot 3 of
 *   class cls_105a0f08 and by three other nearby functions. No other side effects or
 *   globals are touched in this function.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_on_field_0x20_10443e96(void *param_1)

{
  clear_flag_with_notify(*(void **)((int)param_1 + 0x20));
  return;
}
