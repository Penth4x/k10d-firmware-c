/* @k10d release_two_object_refs_104748b2 @ 0x104748b2
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls a helper with argument 3 on the two pointers stored at offsets 0x10 and 0x14 of
 *   the object.
 * summary:
 *   This is virtual slot 4 of cls_105aa39c. It dereferences the object pointer (param_1) to
 *   read two sub-object pointers at offsets 0x10 and 0x14, then calls
 *   free_heap_if_flag_set_1047740c on each with a constant argument of 3. The helper's role
 *   is unknown, but the pattern suggests releasing or resetting two contained resources. No
 *   camera-specific subsystem is identifiable from the code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_two_object_refs_104748b2(int param_1)

{
  free_heap_if_flag_set_1047740c(*(void **)(param_1 + 0x10),3);
  free_heap_if_flag_set_1047740c(*(void **)(param_1 + 0x14),3);
  return;
}
