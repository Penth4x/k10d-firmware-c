/* @k10d write_masked_word_to_object_field_10457996 @ 0x10457996
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Stores the lower 12 bits of param_2 into a ushort field at offset 10 of a sub-object
 *   pointed to by a pointer at offset 0x10 of param_1.
 * summary:
 *   The function dereferences param_1 + 0x10 to get a base pointer, then writes (param_2 &
 *   0xfff) to offset 10 of that structure. It is a simple setter with no kernel calls or
 *   other side effects. The specific role of the object and field is not determinable from
 *   the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_masked_word_to_object_field_10457996(int param_1,ushort param_2)

{
  *(ushort *)(*(int *)(param_1 + 0x10) + 10) = param_2 & 0xfff;
  return;
}
