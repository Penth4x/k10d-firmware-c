/* @k10d call_four_initializers_104435e8 @ 0x104435e8
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Invokes four consecutive helper functions, passing the same pointer argument to each.
 * summary:
 *   The function takes a single void pointer and forwards it to four callees (0x10443e3c,
 *   0x10443e72, 0x10443e96, 0x10443eba) in sequence. No local state is modified and no
 *   return value is produced. The specific roles of the callees are unknown, so the overall
 *   subsystem cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_four_initializers_104435e8(void *param_1)

{
  call_helper_on_field_2c_10443e3c(param_1);
  call_helper_on_object_field_10443e72(param_1);
  call_helper_on_field_0x20_10443e96(param_1);
  call_subobject_method_at_offset_0x20(param_1);
  return;
}
