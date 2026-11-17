/* @k10d write_masked_value_to_object_field_1045790e @ 0x1045790e
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Writes the lower 9 bits of param_2 into a ushort field at offset 2 of a sub-object
 *   pointed to by param_1+0x10.
 * summary:
 *   The function dereferences the pointer stored at param_1+0x10 and writes (param_2 &
 *   0x1ff) to the ushort at offset 2 of that sub-object. It has no callees and performs a
 *   single masked store. The role of the object and field is not determinable from the
 *   pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_masked_value_to_object_field_1045790e(int param_1,ushort param_2)

{
  *(ushort *)(*(int *)(param_1 + 0x10) + 2) = param_2 & 0x1ff;
  return;
}
