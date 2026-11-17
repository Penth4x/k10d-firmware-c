/* @k10d release_two_object_refs_10478b92 @ 0x10478b92
 * name: model (proposed by the local model from the decompile, confidence 0.70)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls a helper on the two pointers stored at offsets 8 and 12 of the object.
 * summary:
 *   The function dereferences the integer pointers at param_1+8 and param_1+0xc and passes
 *   each to heap_free_2. It is virtual slot 4 of cls_105aa5ec. The callee's role is
 *   unknown, so the operation is described mechanically as invoking a helper on two member
 *   pointers.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_two_object_refs_10478b92(int param_1)

{
  heap_free_2(*(int *)(param_1 + 8));
  heap_free_2(*(int *)(param_1 + 0xc));
  return;
}
