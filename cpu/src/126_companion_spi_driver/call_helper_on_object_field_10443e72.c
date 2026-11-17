/* @k10d call_helper_on_object_field_10443e72 @ 0x10443e72
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Passes the pointer stored at offset 0x1c of the given object to a helper function.
 * summary:
 *   The function dereferences param_1, reads the pointer at offset 0x1c, and passes it as
 *   the sole argument to set_flag2_with_notify. It is called as virtual method slot 3 of
 *   class cls_105a0f08. No other side effects or state modifications are visible in the
 *   pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_on_object_field_10443e72(void *param_1)

{
  set_flag2_with_notify(*(void **)((int)param_1 + 0x1c));
  return;
}
