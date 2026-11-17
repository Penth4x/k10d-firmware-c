/* @k10d get_offset_from_struct @ 0x10458120
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Returns the value at offset 0x10 of the given structure plus 0x400.
 * summary:
 *   A trivial accessor that reads a 32-bit field at offset 0x10 from the object pointed to
 *   by param_1 and adds the constant 0x400 to it. It has no callees and performs no side
 *   effects. The specific role of the field or the meaning of the 0x400 offset is not
 *   determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int get_offset_from_struct(int param_1)

{
  return *(int *)(param_1 + 0x10) + 0x400;
}
