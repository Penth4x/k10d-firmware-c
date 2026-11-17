/* @k10d destroy_object_and_free_heap_1051c1ba @ 0x1051c1ba
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 275_settings_manager (unit names are model-proposed)
 * purpose:
 *   Destroys an object by calling a destructor routine on its members and optionally
 *   freeing its heap block.
 * summary:
 *   The function takes a pointer to an object and a flags word. It calls
 *   release_object_and_members with argument 3 on four pointers stored in the object's
 *   first member (offsets 0, 4, 8, 12), then calls heap_free_2 on that first member. It
 *   zeroes the first two words of the object. If bit 0 of the flags word is set, it calls
 *   heap_free on the object pointer. This pattern is consistent with a C++ destructor or
 *   cleanup routine for a class with four sub-objects or pointers.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void destroy_object_and_free_heap_1051c1ba(uint16_t *param_1,uint param_2)

{
  if (param_1 != (uint16_t *)0x0) {
    release_object_and_members(**(uint32_t **)(param_1 + 2),3);
    release_object_and_members(*(uint32_t *)(*(int *)(param_1 + 2) + 4),3);
    release_object_and_members(*(uint32_t *)(*(int *)(param_1 + 2) + 8),3);
    release_object_and_members(*(uint32_t *)(*(int *)(param_1 + 2) + 0xc),3);
    heap_free_2(*(int *)(param_1 + 2));
    param_1[1] = 0;
    *param_1 = 0;
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
