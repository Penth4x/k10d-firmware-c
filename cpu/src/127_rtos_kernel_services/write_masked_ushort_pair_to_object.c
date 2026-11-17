/* @k10d write_masked_ushort_pair_to_object @ 0x104576ee
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Writes two masked 16-bit values into a fixed offset within an object pointed to by
 *   param_1.
 * summary:
 *   The function dereferences the pointer at offset 0x10 of param_1 to get a base address,
 *   then writes param_2 masked with 0x7ff0 to offset 0x1030 and param_3 masked with 0xff0
 *   to offset 0x1034 of that base. It performs no kernel calls or heap operations,
 *   consistent with a simple data update routine in the rtos_wrappers_and_heap module. The
 *   specific meaning of the masked values and the target object is not determinable from
 *   the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_masked_ushort_pair_to_object(int param_1,ushort param_2,ushort param_3)

{
  *(ushort *)(*(int *)(param_1 + 0x10) + 0x1030) = param_2 & 0x7ff0;
  *(ushort *)(*(int *)(param_1 + 0x10) + 0x1034) = param_3 & 0xff0;
  return;
}
