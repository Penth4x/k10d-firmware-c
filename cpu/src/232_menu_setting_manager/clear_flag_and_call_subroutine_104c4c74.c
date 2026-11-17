/* @k10d clear_flag_and_call_subroutine_104c4c74 @ 0x104c4c74
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 232_menu_setting_manager (unit names are model-proposed)
 * purpose:
 *   Clears a byte at offset 0x218 in the object and calls a helper with the value at offset
 *   0x48.
 * summary:
 *   The function writes zero to the byte at param_1 + 0x218, then invokes
 *   clear_byte_at_offset_0x1d passing the 32-bit value stored at param_1 + 0x48. It is
 *   called from eight nearby functions, suggesting it is a common cleanup or state-reset
 *   step. The role of the callee and the specific object fields is not determinable from
 *   the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_flag_and_call_subroutine_104c4c74(int param_1)

{
  *(uint8_t *)(param_1 + 0x218) = 0;
  clear_byte_at_offset_0x1d(*(uint32_t *)(param_1 + 0x48));
  return;
}
