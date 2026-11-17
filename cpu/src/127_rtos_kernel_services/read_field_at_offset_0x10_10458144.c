/* @k10d read_field_at_offset_0x10_10458144 @ 0x10458144
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Returns the value stored at offset 0x10 of the object pointed to by param_1.
 * summary:
 *   A one-line accessor that dereferences param_1 + 0x10 and returns the 32-bit integer
 *   found there. No side effects, no callees, and no camera-specific behavior is evident
 *   from the code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int read_field_at_offset_0x10_10458144(int param_1)

{
  return *(int *)(param_1 + 0x10) + 0x700;
}
