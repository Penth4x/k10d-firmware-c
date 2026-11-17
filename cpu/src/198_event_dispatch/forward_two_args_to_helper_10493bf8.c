/* @k10d forward_two_args_to_helper_10493bf8 @ 0x10493bf8
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 198_event_dispatch (unit names are model-proposed)
 * purpose:
 *   Passes the first argument's dereferenced value and the second argument to
 *   set_byte_at_offset_0x19.
 * summary:
 *   A one-line wrapper that dereferences param_1 and forwards both values to
 *   set_byte_at_offset_0x19. No local state is modified and no return value is used. The
 *   role of set_byte_at_offset_0x19 is unknown, so the subsystem cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void forward_two_args_to_helper_10493bf8(int *param_1,uint8_t param_2)

{
  set_byte_at_offset_0x19(*param_1,param_2);
  return;
}
