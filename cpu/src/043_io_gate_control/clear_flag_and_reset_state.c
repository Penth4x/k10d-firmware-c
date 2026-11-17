/* @k10d clear_flag_and_reset_state @ 0x1039f3da
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 043_io_gate_control (unit names are model-proposed)
 * purpose:
 *   If a flag at offset 0x34 is set, clears it and calls a helper to reset related state
 *   fields.
 * summary:
 *   Checks if the byte at param_1 + 0x34 is non-zero. If so, it sets the byte at param_1 +
 *   0x35 to 0, calls set_flag_and_copy_field with param_1, then zeroes the dword at param_1
 *   + 0x44 and the byte at param_1 + 0xd7. This appears to be a cleanup or reset routine
 *   for an object state.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_flag_and_reset_state(int param_1)

{
  if (*(char *)(param_1 + 0x34) != '\0') {
    *(uint8_t *)(param_1 + 0x35) = 0;
    set_flag_and_copy_field(param_1);
    *(uint32_t *)(param_1 + 0x44) = 0;
    *(uint8_t *)(param_1 + 0xd7) = 0;
  }
  return;
}
