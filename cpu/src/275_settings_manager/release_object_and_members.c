/* @k10d release_object_and_members @ 0x1051c112
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 275_settings_manager (unit names are model-proposed)
 * purpose:
 *   Releases two member objects at offsets 4 and 8 of a struct, then frees the struct
 *   itself if the flag bit is set.
 * summary:
 *   Takes a pointer to a struct and a flag word. If the pointer is non-null, it calls
 *   heap_free_2 on the pointers stored at offsets 8 and 4, likely releasing sub-objects. If
 *   bit 0 of param_2 is set, it calls heap_free on the struct pointer. The caller is
 *   destroy_object_and_free_heap_1051c1ba. The specific role of heap_free_2 is unknown, but
 *   the pattern suggests a cleanup/destructor routine for a composite object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_object_and_members(int param_1,uint param_2)

{
  if (param_1 != 0) {
    heap_free_2(*(int *)(param_1 + 8));
    heap_free_2(*(int *)(param_1 + 4));
    if ((param_2 & 1) != 0) {
      heap_free(param_1);
    }
  }
  return;
}
