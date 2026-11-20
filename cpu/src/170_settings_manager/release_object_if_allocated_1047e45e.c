/* @k10d release_object_if_allocated_1047e45e @ 0x1047e45e
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 170_settings_manager (unit names are model-proposed)
 * purpose:
 *   Checks if the first field of the object is non-null and calls fill_byte_array to
 *   release it, returning whether it was set.
 * summary:
 *   Reads the pointer at offset 0 of the object (param_1). If non-null, it invokes
 *   fill_byte_array with that pointer, 0, and the value at offset 4 (param_1[1]). Returns
 *   true if the pointer was non-null. The callee fill_byte_array is not named, so the
 *   specific resource being released is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool release_object_if_allocated_1047e45e(cls_105aaebc *param_1)

{
  void *pvVar1;
  
  pvVar1 = (char*)(param_1) ->field_0x0;
  if (pvVar1 != 0) {
    fill_byte_array(pvVar1,0,param_1->field_0x4);
  }
  return pvVar1 != 0;
}
