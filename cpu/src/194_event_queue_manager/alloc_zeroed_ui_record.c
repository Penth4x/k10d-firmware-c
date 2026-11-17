/* @k10d alloc_zeroed_ui_record @ 0x10491e6a
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 194_event_queue_manager (unit names are model-proposed)
 * purpose:
 *   Allocates a 12-byte zero-initialized record on the heap, reusing the caller's pointer
 *   if non-NULL.
 * summary:
 *   If param_1 is non-NULL it is used directly; otherwise heap_alloc(0xc) is called and the
 *   result checked. In either case the first three 32-bit words of the record are set to 0.
 *   Called by ui_post_input and ui_request_sync, suggesting it prepares a small UI
 *   message/state structure before posting to the UI task queue. No other side effects are
 *   visible.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void alloc_zeroed_ui_record(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0xc), param_1 != (uint32_t *)0x0)) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}
