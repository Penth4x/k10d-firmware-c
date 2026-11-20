/* @k10d iterate_and_call_virtual_method @ 0x1049392e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 198_event_dispatch (unit names are model-proposed)
 * purpose:
 *   Iterates over a linked list of objects and calls a virtual method on each with a
 *   parameter.
 * summary:
 *   The function first calls an unknown function at 0x10493dc4. If that returns 0, it calls
 *   iterate_virtual_handlers with the input parameters. If that also returns 0, it iterates
 *   through a list of pointers stored between offsets 0x48 and 0x4c of the object in
 *   param_1. For each object in the list, it retrieves a vtable pointer from offset 0xc,
 *   calculates a virtual slot address using a short offset at vtable+200, and calls that
 *   virtual method with the current object and param_2. The loop terminates early if the
 *   virtual call returns non-zero.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void iterate_and_call_virtual_method(cls_105b4dac *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = (*(code *)0x10493dc4/*ROM*/)();
  if (((iVar1 == 0) && (iVar1 = (uint32_t)(iterate_virtual_handlers((cls_105b48dc *)param_1,param_2)), iVar1 == 0)) &&
     (piVar2 = *(int **)&param_1->field_0x48, (uint32_t)(piVar2) != param_1->field_0x4c)) {
    do {
      iVar1 = *(int *)(*piVar2 + 0xc);
      iVar1 = (((vtbl_entry*)(iVar1))[25].fn)(*piVar2 + (int)*(short *)(iVar1 + 200),param_2);
      if (iVar1 != 0) {
        return;
      }
      piVar2 = piVar2 + 1;
    } while ((uint32_t)(piVar2) != param_1->field_0x4c);
  }
  return;
}
