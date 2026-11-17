/* @k10d call_three_helpers_on_object_1036ec8a @ 0x1036ec8a
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 026_sr_mode_control (unit names are model-proposed)
 * purpose:
 *   Invokes three helper functions sequentially on the same object pointer.
 * summary:
 *   The function takes a single void pointer argument and passes it to three callees in
 *   order: set_flag_and_call_two_helpers_1037030c, dispatch_event_with_state_check_1036f384
 *   (with a second argument of 0), and empty_stub_1036f304. No local state is modified and
 *   no return value is produced. The specific roles of the callees are unknown, so the
 *   overall behavior is a simple sequential dispatch of the object to three routines.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_three_helpers_on_object_1036ec8a(void *param_1)

{
  set_flag_and_call_two_helpers_1037030c((int)param_1);
  dispatch_event_with_state_check_1036f384(param_1,0);
  empty_stub_1036f304((int)param_1);
  return;
}
