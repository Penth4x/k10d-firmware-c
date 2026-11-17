/* @k10d set_object_field_and_pointer @ 0x1043fc7c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls two initializers on an object, then stores a masked 5-bit value in a field and a
 *   dereferenced pointer field.
 * summary:
 *   The function takes an object pointer (param_1) and a byte (param_2). It calls
 *   call_subobject_method_1043fff2 and call_subobject_at_offset_0x14_10440082 with the
 *   object pointer. It then writes the lower 5 bits of param_2 to offset 0x40 of the object
 *   and to the memory location pointed to by the pointer stored at offset 0x38. The callees
 *   are not named, so their specific roles are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_object_field_and_pointer(int param_1,byte param_2)

{
  call_subobject_method_1043fff2(param_1);
  call_subobject_at_offset_0x14_10440082(param_1);
  *(byte *)(param_1 + 0x40) = param_2 & 0x1f;
  **(byte **)(param_1 + 0x38) = param_2 & 0x1f;
  return;
}
