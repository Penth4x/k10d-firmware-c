/* @k10d destroy_class_members_104d64de @ 0x104d64de
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 245_param_table_access (unit names are model-proposed)
 * purpose:
 *   Destroys the member objects of a class instance by calling their destructors in reverse
 *   offset order.
 * summary:
 *   The function takes a class instance pointer and a flags word. It calls a series of
 *   member destructors at fixed offsets (0x10c, 0xf4, 0xd8, 0xc0, 0x1c, 0x0) with a
 *   constant argument of 2. If the lowest bit of the flags word is set, it frees the
 *   instance memory via heap_free. This pattern is characteristic of a C++ non-deleting
 *   destructor or a helper called by a deleting destructor to clean up members before
 *   freeing the object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void destroy_class_members_104d64de(int param_1,uint param_2)

{
  if (param_1 != 0) {
    free_heap_if_flagged_104d60a6(param_1 + 0x10c,2);
    free_heap_if_flagged_104d5d26(param_1 + 0xf4,2);
    free_heap_if_flagged_104d5ac0(param_1 + 0xd8,2);
    free_heap_if_flagged_104d58a6(param_1 + 0xc0,2);
    free_heap_if_flag_set_104d561e(param_1 + 0x1c,2);
    free_heap_if_flagged_104d5298(param_1,2);
    if ((param_2 & 1) != 0) {
      heap_free(param_1);
    }
  }
  return;
}
