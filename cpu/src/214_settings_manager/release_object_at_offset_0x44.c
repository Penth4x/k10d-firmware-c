/* @k10d release_object_at_offset_0x44 @ 0x104b33c4
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 214_settings_manager (unit names are model-proposed)
 * purpose:
 *   Releases the object pointer stored at offset 0x44 by calling a helper and a virtual
 *   method.
 * summary:
 *   Checks if the pointer at param_1+0x44 is non-null. If so, calls eventflag_clr_flg with
 *   that pointer and -1. Then, if the pointer is still non-null, invokes virtual slot 1 of
 *   the object at that pointer with argument 3. This appears to be a cleanup or release
 *   operation for a sub-object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_object_at_offset_0x44(cls_105b7f68 *param_1)

{
  void *pvVar1;
  
  if (param_1->field_0x44 != 0) {
    eventflag_clr_flg((uint32_t *)(param_1->field_0x44),(uint)(0xffffffff));
    pvVar1 = (void *)(param_1->field_0x44);
    if (pvVar1 != 0) {
      (((vtbl_entry*)(*(int *)((int)pvVar1 + 4)))[1].fn)
                ((int)*(short *)(*(int *)((int)pvVar1 + 4) + 8) + (int)pvVar1,3);
    }
  }
  return;
}
