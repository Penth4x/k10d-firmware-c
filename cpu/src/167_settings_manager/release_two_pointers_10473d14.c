/* @k10d release_two_pointers_10473d14 @ 0x10473d14
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls a helper with argument 3 on the two pointers stored at offsets 0x10 and 0x14 of
 *   the object.
 * summary:
 *   This is virtual slot 4 of cls_105aa34c. It dereferences the object at param_1, loads
 *   the pointers at offsets 0x10 and 0x14, and passes each to
 *   free_heap_if_flag_set_1047740c along with the constant 3. The helper's role is unknown,
 *   but the pattern suggests releasing or invalidating two sub-objects or resources. No
 *   camera-specific subsystem is identifiable from the code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_two_pointers_10473d14(int param_1)

{
  free_heap_if_flag_set_1047740c(*(void **)(param_1 + 0x10),3);
  free_heap_if_flag_set_1047740c(*(void **)(param_1 + 0x14),3);
  return;
}
