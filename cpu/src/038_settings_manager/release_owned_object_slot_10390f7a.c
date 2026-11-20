/* @k10d release_owned_object_slot_10390f7a @ 0x10390f7a
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 038_settings_manager (unit names are model-proposed)
 * purpose:
 *   Releases the object pointer stored at offset 4 of the given structure by invoking its
 *   virtual cleanup methods.
 * summary:
 *   The function reads a pointer from param_1 + 4. If non-null, it calls virtual slot 3
 *   (offset 0x24) and then virtual slot 1 (offset 0xc) on that object, passing the constant
 *   3 to the second call. Finally, it nulls out the pointer at param_1 + 4. This is a
 *   standard C++ destructor or release pattern for a member object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_owned_object_slot_10390f7a(cls_1055a4d4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1->field_0x4;
  if (piVar1 != (int *)0x0) {
    (((vtbl_entry*)(*piVar1))[4].fn)((int)((vtbl_entry*)(*piVar1))[4].adj + (int)piVar1);
    piVar1 = (int *)param_1->field_0x4;
    if (piVar1 != (int *)0x0) {
      (((vtbl_entry*)(*piVar1))[1].fn)((int)*(short *)(*piVar1 + 8) + (int)piVar1,3);
    }
  }
  param_1->field_0x4 = 0;
  return;
}
