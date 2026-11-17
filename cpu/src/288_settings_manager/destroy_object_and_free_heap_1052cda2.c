/* @k10d destroy_object_and_free_heap_1052cda2 @ 0x1052cda2
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 288_settings_manager (unit names are model-proposed)
 * purpose:
 *   Destroys two nested class members at fixed offsets and frees the object if the flag bit
 *   is set.
 * summary:
 *   Takes a non-null object pointer and a flags word. Calls cls_105b934c_delete on the
 *   member at offset 0x1dc and cls_105b9400_delete on the object itself, both with a mode
 *   argument of 2. If bit 0 of param_2 is set, calls heap_free on the object pointer. This
 *   is a standard C++ deleting destructor pattern that cleans up members before releasing
 *   the heap block.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void destroy_object_and_free_heap_1052cda2(void *param_1,uint param_2)

{
  if (param_1 != (void *)0x0) {
    cls_105b934c_delete((void *)((int)param_1 + 0x1dc),2);
    cls_105b9400_delete(param_1,2);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
