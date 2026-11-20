/* @k10d call_two_helpers_on_object_10367a3c @ 0x10367a3c
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 009_mode_settings_manager (unit names are model-proposed)
 * purpose:
 *   Invokes two helper functions sequentially on the same object pointer.
 * summary:
 *   The function takes a single void pointer argument and passes it to
 *   write_second_field_of_struct with a second argument of 1, then passes it to
 *   empty_stub_10367bdc. No other operations are performed. The specific roles of the
 *   callees are unknown, so the mechanical behavior is simply two sequential calls on the
 *   same object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_two_helpers_on_object_10367a3c(cls_105579a8 *param_1)

{
  write_second_field_of_struct(param_1,1);
  empty_stub_10367bdc((int)param_1);
  return;
}
