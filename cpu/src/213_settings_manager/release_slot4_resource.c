/* @k10d release_slot4_resource @ 0x104acec8
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 213_settings_manager (unit names are model-proposed)
 * purpose:
 *   Releases the resource held in the object's second field by calling a helper and nulling
 *   the pointer.
 * summary:
 *   This is virtual slot 4 of cls_105b7418. It passes the 4-byte value at offset 4 of the
 *   object to release_object_slot_references, then sets that field to 0. The pattern is
 *   consistent with releasing or invalidating a handle/pointer stored in the object. The
 *   specific resource type is unknown because release_object_slot_references is not named.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_slot4_resource(int param_1)

{
  release_object_slot_references(*(uint32_t *)(param_1 + 4));
  *(uint32_t *)(param_1 + 4) = 0;
  return;
}
