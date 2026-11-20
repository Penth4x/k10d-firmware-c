/* @k10d invoke_object_method_if_enabled @ 0x104ea474
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 255_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Checks an enable flag via a helper and, if set, invokes virtual slot 3 on a sub-object,
 *   returning the success status.
 * summary:
 *   The function reads a field at offset 8 of the input object and passes it to
 *   release_object_member_and_flag. If the helper returns non-zero, it clears the field at
 *   offset 12 and retrieves a pointer from offset 4. It then performs a virtual call to
 *   slot 3 (offset 0x1c) on that sub-object with a this-adjustment and a zero argument. The
 *   function returns 0 if the sub-object is null or the virtual call returns 0, otherwise
 *   it returns 1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t invoke_object_method_if_enabled(cls_105c20d0 *param_1)

{
  int *piVar1;
  int iVar2;
  uint32_t uVar3;
  
  iVar2 = release_object_member_and_flag(param_1->field_0x8);
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    param_1->field_0xc = 0;
    piVar1 = (int *)param_1->field_0x4;
    if ((piVar1 != (int *)0x0) &&
       (iVar2 = (((vtbl_entry*)(*piVar1))[3].fn)((int)((vtbl_entry*)(*piVar1))[3].adj + (int)piVar1,0),
       iVar2 == 0)) {
      return 0;
    }
    uVar3 = 1;
  }
  return uVar3;
}
