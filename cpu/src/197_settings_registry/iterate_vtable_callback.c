/* @k10d iterate_vtable_callback @ 0x10493484
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 197_settings_registry (unit names are model-proposed)
 * purpose:
 *   Iterates a linked list of objects and invokes a virtual method on each with a single
 *   parameter.
 * summary:
 *   The function first calls an external routine at 0x1049417c. It then accesses a range of
 *   pointers stored at offsets 0x48 and 0x4c in the object pointed to by param_1. For each
 *   pointer in this range, it reads a vtable pointer from offset 0xc of the object,
 *   retrieves a function pointer from offset 0x74 of the vtable, and calls it with a this-
 *   adjusted pointer and param_2. This is a standard Cfront virtual dispatch loop over a
 *   collection of objects.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void iterate_vtable_callback(cls_105b4dac *param_1,uint32_t param_2)

{
  int *piVar1;
  int iVar2;
  
  (*(code *)0x1049417c/*ROM*/)();
  piVar1 = *(int **)&param_1->field_0x48;
  if ((uint32_t)(piVar1) != param_1->field_0x4c) {
    do {
      iVar2 = *(int *)(*piVar1 + 0xc);
      (((vtbl_entry*)(iVar2))[14].fn)(*piVar1 + (int)((vtbl_entry*)(iVar2))[14].adj,param_2);
      piVar1 = piVar1 + 1;
    } while ((uint32_t)(piVar1) != param_1->field_0x4c);
  }
  return;
}
