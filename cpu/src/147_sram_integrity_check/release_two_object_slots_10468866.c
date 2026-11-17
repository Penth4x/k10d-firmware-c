/* @k10d release_two_object_slots_10468866 @ 0x10468866
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 147_sram_integrity_check (unit names are model-proposed)
 * purpose:
 *   Calls two helper functions on the objects stored at offsets 0x240 and 0x244 of the
 *   given structure.
 * summary:
 *   The function takes a single pointer argument and dereferences two fields at offsets
 *   0x240 and 0x244. It passes each dereferenced pointer to a separate callee
 *   (destroy_class_105a7d14_members and release_transaction_context_members). The pattern
 *   suggests releasing, stopping, or deinitializing two sub-objects or resources held by
 *   the parent structure. The specific subsystem is not identifiable from the available
 *   information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_two_object_slots_10468866(void *param_1)

{
  destroy_class_105a7d14_members(*(void **)((int)param_1 + 0x240));
  release_transaction_context_members(*(void **)((int)param_1 + 0x244));
  return;
}
