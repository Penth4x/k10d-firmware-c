/* @k10d set_object_field_at_offset_4_10491ed6 @ 0x10491ed6
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 194_event_queue_manager (unit names are model-proposed)
 * purpose:
 *   Stores the pointer param_2 into the field at offset 4 of the object pointed to by
 *   param_1.
 * summary:
 *   The function performs a single 32-bit store of param_2 to the memory location param_1 +
 *   4. It has no callees and no other side effects. Both callers (ui_post_input and
 *   ui_request_sync) are UI-queue related, but the function itself is a generic pointer
 *   assignment with no camera-specific behavior visible in the code.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_object_field_at_offset_4_10491ed6(int param_1,void *param_2)

{
  *(void **)(param_1 + 4) = param_2;
  return;
}
