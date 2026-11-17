/* @k10d release_two_pointers_at_offsets_0x44_0x48 @ 0x104b7a16
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 221_settings_manager (unit names are model-proposed)
 * purpose:
 *   Releases the pointers stored at offsets 0x44 and 0x48 of the object via heap_free_2 and
 *   nulls them.
 * summary:
 *   Checks the 32-bit values at param_1+0x44 and param_1+0x48. If non-zero, calls
 *   heap_free_2 on each and then writes zero to the corresponding field. This is a typical
 *   cleanup/destructor pattern for two owned resources. The callee heap_free_2 is not yet
 *   named, so the specific resource type is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_two_pointers_at_offsets_0x44_0x48(int param_1)

{
  if (*(int *)(param_1 + 0x44) != 0) {
    heap_free_2(*(int *)(param_1 + 0x44));
  }
  *(uint32_t *)(param_1 + 0x44) = 0;
  if (*(int *)(param_1 + 0x48) != 0) {
    heap_free_2(*(int *)(param_1 + 0x48));
  }
  *(uint32_t *)(param_1 + 0x48) = 0;
  return;
}
