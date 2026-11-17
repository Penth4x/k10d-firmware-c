/* @k10d query_object_property_flag @ 0x104991a2
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 203_event_dispatcher (unit names are model-proposed)
 * purpose:
 *   Retrieves a property from an object and returns a specific flag byte if the property is
 *   valid.
 * summary:
 *   Calls compute_struct_array_offset with a pointer from param_1+4 and the constant 2 to
 *   obtain a structure pointer. If the first two fields of the returned structure are non-
 *   zero, it copies a value from the object's vtable-like structure (offset 0x14) into the
 *   result structure and sets several fields (indices 6, 7, 8, 10, and 0xd) to specific
 *   values. Finally, it returns the byte at offset 0xd of the result structure.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint8_t query_object_property_flag(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)compute_struct_array_offset(*(int *)(param_1 + 4),2);
  if ((*piVar1 != 0) && (piVar1[1] != 0)) {
    piVar1[6] = *(int *)(**(int **)(param_1 + 4) + 0x14);
    piVar1[7] = 1;
    piVar1[8] = -1;
    piVar1[10] = 1;
    *(uint8_t *)(piVar1 + 0xd) = 1;
  }
  return *(uint8_t *)(piVar1 + 0xd);
}
