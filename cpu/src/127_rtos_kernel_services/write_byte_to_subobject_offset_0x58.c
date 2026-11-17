/* @k10d write_byte_to_subobject_offset_0x58 @ 0x104580c6
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Writes the low byte of param_2 to offset 0x58 of a sub-object pointed to by the field
 *   at offset 0x10 of param_1.
 * summary:
 *   The function dereferences the pointer stored at param_1 + 0x10 and writes the lower 8
 *   bits of param_2 to offset 0x58 of that sub-object. It is a simple pointer-indirect
 *   store with no other side effects or kernel calls. The role of the sub-object and the
 *   specific field at 0x58 cannot be determined from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_byte_to_subobject_offset_0x58(int param_1,ushort param_2)

{
  *(ushort *)(*(int *)(param_1 + 0x10) + 0x58) = param_2 & 0xff;
  return;
}
