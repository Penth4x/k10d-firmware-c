/* @k10d get_offset_from_object @ 0x10458138
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Returns the value stored at offset 0x10 of the given object pointer plus 0x600.
 * summary:
 *   The function takes a single pointer argument, reads the 32-bit integer located at
 *   offset 0x10 within that structure, and adds the constant 0x600 to it before returning
 *   the result. It has no callees and performs no side effects. The specific role of the
 *   object or the meaning of the 0x600 offset is not determinable from the provided
 *   context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int get_offset_from_object(int param_1)

{
  return *(int *)(param_1 + 0x10) + 0x600;
}
