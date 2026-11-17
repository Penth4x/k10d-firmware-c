/* @k10d call_subroutine_on_field @ 0x104e361e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 252_factory_diagnostic_screen (unit names are model-proposed)
 * purpose:
 *   Calls a single subroutine with the value at offset 4 of the input pointer and returns
 *   1.
 * summary:
 *   The function dereferences param_1 + 4 and passes that 32-bit value as the sole argument
 *   to append_char_to_buffer. It then unconditionally returns the constant 1 in r4. No
 *   other memory is read or written, and no camera-specific MMIO or subsystem behavior is
 *   visible in this function itself.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_subroutine_on_field(int param_1)

{
  append_char_to_buffer(*(uint32_t *)(param_1 + 4),(char *)__frv_reg_unset(5));
  return 1;
}
