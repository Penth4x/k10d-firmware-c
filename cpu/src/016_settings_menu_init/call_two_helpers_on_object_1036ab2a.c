/* @k10d call_two_helpers_on_object_1036ab2a @ 0x1036ab2a
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 016_settings_menu_init (unit names are model-proposed)
 * purpose:
 *   Invokes two helper functions sequentially on the same object pointer.
 * summary:
 *   The function takes a single void pointer argument and passes it to
 *   write_second_field_of_struct with a second argument of 1, then passes it to
 *   empty_stub_1036ae00. No other operations are performed. The specific roles of the
 *   callees are unknown, so the mechanical behavior is simply two sequential calls on the
 *   same object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_two_helpers_on_object_1036ab2a(void *param_1)

{
  write_second_field_of_struct(param_1,1);
  empty_stub_1036ae00((int)param_1);
  return;
}
