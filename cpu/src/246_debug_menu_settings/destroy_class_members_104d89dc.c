/* @k10d destroy_class_members_104d89dc @ 0x104d89dc
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 246_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Destroys member objects at fixed offsets and optionally frees the object heap block.
 * summary:
 *   Guards on a non-NULL object pointer, then calls six member-destructor helpers at
 *   offsets 0x8a4, 0x888, 0x86c, 0xd0, 0xa4, and 0x0 with a constant second argument of 2.
 *   If the low bit of param_2 is set, it calls heap_free on the object. The caller is a
 *   verified deleting destructor for class cls_105ba0cc, consistent with this being the
 *   member-cleanup portion of that class's teardown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void destroy_class_members_104d89dc(int param_1,uint param_2)

{
  if (param_1 != 0) {
    free_heap_if_flagged_104d5d26(param_1 + 0x8a4,2);
    free_heap_if_flagged_104d5298(param_1 + 0x888,2);
    free_heap_if_flagged_104d5ac0(param_1 + 0x86c,2);
    free_heap_if_flagged_104d60a6(param_1 + 0xd0,2);
    free_heap_if_flagged_104d58a6(param_1 + 0xa4,2);
    free_heap_if_flag_set_104d561e(param_1,2);
    if ((param_2 & 1) != 0) {
      heap_free(param_1);
    }
  }
  return;
}
