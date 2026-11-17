/* @k10d call_helper_with_two_offsets_104b50d2 @ 0x104b50d2
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 217_error_display_handler (unit names are model-proposed)
 * purpose:
 *   Reads two 32-bit values from offsets 0x54 and 0x58 of a struct and passes them to a
 *   helper, returning 1.
 * summary:
 *   The function takes a pointer in param_1, dereferences two consecutive 32-bit fields at
 *   offsets 0x54 and 0x58, and forwards them as arguments to copy_and_decode_status_flags.
 *   It unconditionally returns 1. The role of the struct and the callee is not determinable
 *   from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_helper_with_two_offsets_104b50d2(int param_1)

{
  copy_and_decode_status_flags(*(uint32_t *)(param_1 + 0x58),*(uint32_t *)(param_1 + 0x54));
  return 1;
}
