/* @k10d call_helper_on_field_0x18_10491fde @ 0x10491fde
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 194_event_queue_manager (unit names are model-proposed)
 * purpose:
 *   Reads the 4-byte field at offset 0x18 of the object in param_1 and passes it to
 *   read_byte_at_offset_0x20_10492b76, returning the result.
 * summary:
 *   This is a one-line wrapper that dereferences param_1 + 0x18 and forwards that value as
 *   the sole argument to read_byte_at_offset_0x20_10492b76. The return value of
 *   read_byte_at_offset_0x20_10492b76 is returned directly to the caller. No other side
 *   effects or globals are touched in this function.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_helper_on_field_0x18_10491fde(int param_1)

{
  uint32_t uVar1;
  
  uVar1 = read_byte_at_offset_0x20_10492b76(*(uint32_t *)(param_1 + 0x18));
  return uVar1;
}
