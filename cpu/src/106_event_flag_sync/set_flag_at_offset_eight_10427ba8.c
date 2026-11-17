/* @k10d set_flag_at_offset_eight_10427ba8 @ 0x10427ba8
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 106_event_flag_sync (unit names are model-proposed)
 * purpose:
 *   Sets a flag on the object pointed to by param_1 at offset 8.
 * summary:
 *   The function takes a single pointer argument and calls set_flg_obj on the memory
 *   location at offset 8 from that pointer. No other operations or side effects are visible
 *   in the pseudocode. The specific role of the flag or the object type is not determinable
 *   from the provided code.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_flag_at_offset_eight_10427ba8(void *param_1)

{
  set_flg_obj((uint32_t *)((int)param_1 + 8));
  return;
}
