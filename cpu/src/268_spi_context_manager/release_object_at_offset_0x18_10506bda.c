/* @k10d release_object_at_offset_0x18_10506bda @ 0x10506bda
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 268_spi_context_manager (unit names are model-proposed)
 * purpose:
 *   Calls three helper functions in sequence on the pointer stored at offset 0x18 of the
 *   input object.
 * summary:
 *   The function dereferences param_1 + 0x18 to obtain a sub-object pointer and passes it
 *   to three callees: dispatch_object_virtual_command (with an additional argument of 2),
 *   release_three_sub_objects, and release_context_two_fields. The sequence suggests a
 *   cleanup or deinitialization routine for a component embedded within a larger structure.
 *   No camera-specific subsystem is identifiable from the available information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_object_at_offset_0x18_10506bda(int param_1)

{
  dispatch_object_virtual_command(*(uint32_t *)(param_1 + 0x18),2);
  release_three_sub_objects(*(uint32_t *)(param_1 + 0x18));
  release_context_two_fields(*(void **)(param_1 + 0x18));
  return;
}
