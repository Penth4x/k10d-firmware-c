/* @k10d call_subroutine_on_field_0x18_104924d4 @ 0x104924d4
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 195_capture_event_handler (unit names are model-proposed)
 * purpose:
 *   Reads the 32-bit value at offset 0x18 of the object in param_1 and passes it to
 *   destroy_twai_sem_object.
 * summary:
 *   A one-line wrapper that dereferences param_1 + 0x18 and forwards that value as the sole
 *   argument to destroy_twai_sem_object. No other side effects or state changes are visible
 *   in this function. The role of the callee and the meaning of the 0x18 field are not
 *   established by the available information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_subroutine_on_field_0x18_104924d4(int param_1)

{
  destroy_twai_sem_object(*(uint32_t *)(param_1 + 0x18));
  return;
}
