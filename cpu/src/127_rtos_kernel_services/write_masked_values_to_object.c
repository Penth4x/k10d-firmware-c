/* @k10d write_masked_values_to_object @ 0x10457738
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Writes two masked 16-bit values into a sub-object pointed to by a field at offset 0x10
 *   of param_1.
 * summary:
 *   The function dereferences the pointer stored at param_1+0x10 and writes param_2 masked
 *   with 0x1ff0 to offset 0x1032 and param_3 masked with 0xff0 to offset 0x1036 of that
 *   sub-object. It is a simple setter with no kernel calls or complex logic. The specific
 *   meaning of the masked values and the sub-object structure is not determinable from the
 *   pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_masked_values_to_object(int param_1,ushort param_2,ushort param_3)

{
  *(ushort *)(*(int *)(param_1 + 0x10) + 0x1032) = param_2 & 0x1ff0;
  *(ushort *)(*(int *)(param_1 + 0x10) + 0x1036) = param_3 & 0xff0;
  return;
}
