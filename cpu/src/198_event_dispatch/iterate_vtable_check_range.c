/* @k10d iterate_vtable_check_range @ 0x104938e0
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 198_event_dispatch (unit names are model-proposed)
 * purpose:
 *   Iterates a pointer range and calls a virtual method on each element until one returns
 *   non-zero.
 * summary:
 *   Checks a global function call result; if zero, iterates from param_1+0x48 to
 *   param_1+0x4c. For each pointer, it dereferences a vtable-like structure at offset 0xc
 *   and calls a virtual method (slot derived from offset 0xb4) with a this-adjustment.
 *   Returns early if the method returns non-zero.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void iterate_vtable_check_range(cls_105b4dac *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = (*(code *)0x10493dba/*ROM*/)();
  if ((iVar1 == 0) && (piVar2 = *(int **)&param_1->field_0x48, (uint32_t)(piVar2) != param_1->field_0x4c)) {
    do {
      iVar1 = *(int *)(*piVar2 + 0xc);
      iVar1 = (((vtbl_entry*)(iVar1))[22].fn)(*piVar2 + (int)((vtbl_entry*)(iVar1))[22].adj);
      if (iVar1 != 0) {
        return;
      }
      piVar2 = piVar2 + 1;
    } while ((uint32_t)(piVar2) != param_1->field_0x4c);
  }
  return;
}
