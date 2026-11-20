/* @k10d delete_object_with_flag_104b740c @ 0x104b740c
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 220_shutter_trigger (unit names are model-proposed)
 * purpose:
 *   Calls a delete routine on an object and frees its heap block if the flag bit is set.
 * summary:
 *   Checks that param_1 is non-NULL, then calls cls_105a8a1c_delete with a second argument
 *   of 2. If bit 0 of param_2 is set, it calls heap_free on param_1. This follows the C++
 *   operator delete pattern where the destructor is invoked before freeing memory.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void delete_object_with_flag_104b740c(uint32_t *param_1,uint param_2)

{
  if ((param_1 != (uint32_t *)0x0) &&
     (cls_105a8a1c_delete((cls_105a8a1c *)param_1,2), (param_2 & 1) != 0)) {
    heap_free((int)param_1);
  }
  return;
}
