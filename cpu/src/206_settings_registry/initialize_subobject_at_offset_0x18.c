/* @k10d initialize_subobject_at_offset_0x18 @ 0x104a3622
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Allocates a new cls_105b6858 object, stores its pointer at param_1+0x18, and invokes
 *   its virtual slot 2 with argument 0.
 * summary:
 *   The function calls cls_105b6858_new(0) to create an instance. It stores the returned
 *   pointer in the field at offset 0x18 of the object pointed to by param_1. It then
 *   performs a virtual call to slot 2 (offset 0x14 in the vtable) of the newly created
 *   object, passing 0 as the second argument. This appears to be a constructor or
 *   initialization routine for a composite object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void initialize_subobject_at_offset_0x18(int param_1)

{
  int iVar1;
  
  iVar1 = (uintptr_t)(cls_105b6858_new((cls_105b6858 *)0x0));
  *(int *)(param_1 + 0x18) = iVar1;
  (((vtbl_entry*)(*(int *)(iVar1 + 0x1c)))[2].fn)(iVar1 + ((vtbl_entry*)(*(int *)(iVar1 + 0x1c)))[2].adj,0);
  return;
}
