/* @k10d clear_byte_at_offset_0x4d_1039420e @ 0x1039420e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls an unknown helper then writes zero to byte offset 0x4d of the object pointed to
 *   by param_1.
 * summary:
 *   The function first invokes call_single_helper_103942d8 with no arguments, then stores 0
 *   into the byte at param_1 + 0x4d. The role of the callee and the meaning of the 0x4d
 *   field are not determinable from the provided pseudocode or brief.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_byte_at_offset_0x4d_1039420e(int param_1)

{
  call_single_helper_103942d8();
  *(uint8_t *)(param_1 + 0x4d) = 0;
  return;
}
