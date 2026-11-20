/* @k10d init_object_with_offset_and_call @ 0x1049b7ee
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 204_settings_manager (unit names are model-proposed)
 * purpose:
 *   Checks a pointer field, sets a derived offset field, and calls a helper with the
 *   pointer and 1.
 * summary:
 *   Reads the int at offset 4 of the object. If non-zero, writes that value plus 0xf4 to
 *   offset 0x10, calls compute_struct_array_offset with the value and 1, and stores the
 *   result at offset 0x14. Returns whether the offset-4 field was non-zero. The callee
 *   compute_struct_array_offset is not named, so the subsystem role is not determinable.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool init_object_with_offset_and_call(cls_105b5834 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1->field_0x4;
  if (iVar1 != 0) {
    param_1->field_0x10 = iVar1 + 0xf4;
    iVar2 = compute_struct_array_offset(iVar1,1);
    param_1->field_0x14 = iVar2;
  }
  return iVar1 != 0;
}
