/* @k10d delete_object_with_flag_10477248 @ 0x10477248
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Destroys an object's member at offset 8 and frees the heap block if the flag bit is
 *   set.
 * summary:
 *   Checks that param_1 is non-NULL, then calls cls_105a5c2c_delete on the pointer offset
 *   by 8 with argument 2. If bit 0 of param_2 is set, it calls heap_free on param_1. This
 *   follows the standard C++ deleting destructor pattern where the flag indicates whether
 *   to free the memory after destruction.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void delete_object_with_flag_10477248(void *param_1,uint param_2)

{
  if ((param_1 != 0) &&
     (cls_105a5c2c_delete((cls_105a5c2c *)((int)param_1 + 8),2), (param_2 & 1) != 0)) {
    heap_free((int)param_1);
  }
  return;
}
