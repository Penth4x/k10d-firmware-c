/* @k10d call_subroutine_with_offset_c_104766e4 @ 0x104766e4
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Passes the 4-byte value at offset 0xc of the object pointed to by param_1 to
 *   process_object_event_10476c66.
 * summary:
 *   This is a one-line wrapper that dereferences param_1 + 0xc and forwards that value as
 *   the sole argument to process_object_event_10476c66. No other operations, side effects,
 *   or state changes are visible in the pseudocode. The caller is
 *   process_event_with_callback_10474134.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_subroutine_with_offset_c_104766e4(int param_1, uint32_t param_x1, uint32_t param_x2)
{
  process_object_event_10476c66(*(uint32_t *)(param_1 + 0xc), (uint32_t)param_x1, (uint32_t)param_x2);
  return;
}
