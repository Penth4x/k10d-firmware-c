/* @k10d copy_object_fields_to_target @ 0x10511a36
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 272_telemetry_cluster_d (unit names are model-proposed)
 * purpose:
 *   Copies four 32-bit fields and one byte from the source object to a target object, then
 *   invokes a virtual method on a sub-object.
 * summary:
 *   The function performs a virtual call on an object pointer stored at offset 0x8d4 of
 *   param_1, passing arguments 1, 1, and 0. It then copies four 32-bit values from offsets
 *   0xa0, 0xa4, 0x98, and 0x9c of param_1 to offsets 0x70, 0x74, 0x78, and 0x7c of an
 *   object pointed to by the pointer at offset 0x7f8. Finally, it writes a zero byte to
 *   offset 0x38 of that target object. No camera-specific subsystem is identifiable from
 *   the mechanical operations.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_object_fields_to_target(int param_1)

{
  (((vtbl_entry*)(*(int *)(param_1 + 0x8d4)))[24].fn)
            (((vtbl_entry*)(*(int *)(param_1 + 0x8d4)))[24].adj + param_1,1,1,0);
  *(uint32_t *)(*(int *)(param_1 + 0x7f8) + 0x70) = *(uint32_t *)(param_1 + 0xa0);
  *(uint32_t *)(*(int *)(param_1 + 0x7f8) + 0x74) = *(uint32_t *)(param_1 + 0xa4);
  *(uint32_t *)(*(int *)(param_1 + 0x7f8) + 0x78) = *(uint32_t *)(param_1 + 0x98);
  *(uint32_t *)(*(int *)(param_1 + 0x7f8) + 0x7c) = *(uint32_t *)(param_1 + 0x9c);
  *(uint8_t *)(*(int *)(param_1 + 0x7f8) + 0x38) = 0;
  return;
}
