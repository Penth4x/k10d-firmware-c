/* @k10d call_subroutine_on_field_5c @ 0x104b4fbc
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 217_error_display_handler (unit names are model-proposed)
 * purpose:
 *   Passes the 4-byte value at offset 0x5c of the object pointed to by param_1 to
 *   pop_next_line_from_buffer.
 * summary:
 *   This is a one-line wrapper that dereferences param_1, reads the 32-bit field at offset
 *   0x5c, and forwards it as the sole argument to pop_next_line_from_buffer. No other state
 *   is touched and no return value is used. The role of the field and the callee is
 *   unknown, so no camera-subsystem term is applied.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_subroutine_on_field_5c(int param_1)

{
  pop_next_line_from_buffer(*(uint32_t *)(param_1 + 0x5c));
  return;
}
