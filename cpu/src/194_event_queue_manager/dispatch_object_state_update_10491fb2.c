/* @k10d dispatch_object_state_update_10491fb2 @ 0x10491fb2
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 194_event_queue_manager (unit names are model-proposed)
 * purpose:
 *   Calls an initialization helper, conditionally updates a parameter, and forwards a
 *   struct field to a second helper.
 * summary:
 *   The function first calls empty_stub_104928e0 unconditionally. If param_2 is non-zero,
 *   it calls call_subroutine_on_field_0x18_104924d4 with param_1. Finally, it reads the
 *   4-byte value at offset 0x18 of the object pointed to by param_1 and passes it along
 *   with param_2 to signal_or_wait_on_semaphore. The specific roles of the callees and the
 *   object structure are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_object_state_update_10491fb2(int param_1,int param_2)

{
  empty_stub_104928e0();
  if (param_2 != 0) {
    call_subroutine_on_field_0x18_104924d4(param_1);
  }
  signal_or_wait_on_semaphore(*(uint32_t *)(param_1 + 0x18),param_2);
  return;
}
