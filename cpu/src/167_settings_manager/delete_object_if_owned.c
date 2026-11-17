/* @k10d delete_object_if_owned @ 0x104757ce
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Destroys an object via a class delete routine and frees its heap block when the
 *   ownership flag is set.
 * summary:
 *   Takes a pointer and a flags word. If the pointer is non-NULL it calls
 *   cls_105a5c2c_delete with a second argument of 2, then checks bit 0 of param_2 and calls
 *   heap_free on the pointer when set. This mirrors the C++ deleting-destructor idiom where
 *   the heap block is only released when the object was heap-allocated.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void delete_object_if_owned(void *param_1,uint param_2)

{
  if ((param_1 != (void *)0x0) && (cls_105a5c2c_delete(param_1,2), (param_2 & 1) != 0)) {
    heap_free((int)param_1);
  }
  return;
}
