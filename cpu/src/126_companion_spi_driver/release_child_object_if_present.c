/* @k10d release_child_object_if_present @ 0x10441994
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Invokes virtual slot 2 on the object pointer stored at offset 4 of param_1, passing 0,
 *   then returns 1.
 * summary:
 *   Checks if the pointer at param_1+4 is non-null. If so, it loads the vtable pointer from
 *   that child object, retrieves the function pointer at vtable offset 0x1c (slot 2), and
 *   calls it with the this-adjusted child object and an argument of 0. This is a standard
 *   Cfront virtual call pattern for releasing or resetting a contained object. No camera-
 *   specific subsystem is identifiable from the code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t release_child_object_if_present(cls_105a0c74 *param_1)

{
  int iVar1;
  
  if (param_1->field_0x4 != 0) {
    iVar1 = *(int *)(param_1->field_0x4 + 4);
    (((vtbl_entry*)(iVar1))[3].fn)(param_1->field_0x4 + ((vtbl_entry*)(iVar1))[3].adj,0);
  }
  return 1;
}
