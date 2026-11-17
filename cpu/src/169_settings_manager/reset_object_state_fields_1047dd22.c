/* @k10d reset_object_state_fields_1047dd22 @ 0x1047dd22
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 169_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls an unknown function and zeroes three fields at offsets 0x120, 0x12c, and 0x12e of
 *   the object.
 * summary:
 *   The function invokes an external routine at 0x1047dfc8 with no arguments. It then
 *   writes zero to a 4-byte field at offset 0x120, a 2-byte field at offset 0x12c (decimal
 *   300), and a 2-byte field at offset 0x12e of the object passed in param_1. The object
 *   size is 0x130 bytes, so these are the last 8 bytes of the structure. No camera-specific
 *   subsystem behavior is evident from the code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void reset_object_state_fields_1047dd22(int param_1)

{
  (*(code *)0x1047dfc8/*ROM*/)();
  *(uint32_t *)(param_1 + 0x120) = 0;
  *(uint16_t *)(param_1 + 300) = 0;
  *(uint16_t *)(param_1 + 0x12e) = 0;
  return;
}
