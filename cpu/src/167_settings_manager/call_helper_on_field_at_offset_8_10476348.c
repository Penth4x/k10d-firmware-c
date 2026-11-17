/* @k10d call_helper_on_field_at_offset_8_10476348 @ 0x10476348
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Passes the 32-bit value at param_1+8 to process_event_with_retry_10475438 and returns.
 * summary:
 *   A one-line wrapper that dereferences the fourth word of the object pointed to by
 *   param_1 and forwards it as the sole argument to process_event_with_retry_10475438. No
 *   other side effects are visible in this function. The role of
 *   process_event_with_retry_10475438 is unknown, so the camera subsystem cannot be
 *   inferred.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_helper_on_field_at_offset_8_10476348(int param_1)

{
  uint32_t uVar1;
  
  uVar1 = process_event_with_retry_10475438(*(uint32_t *)(param_1 + 8));
  return uVar1;
}
