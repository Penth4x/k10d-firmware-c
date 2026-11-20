/* @k10d iterate_and_dispatch_object_list @ 0x104935cc
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 198_event_dispatch (unit names are model-proposed)
 * purpose:
 *   Iterates over a linked list of objects and invokes a virtual method on each if a
 *   condition is met.
 * summary:
 *   The function reads a start pointer from offset 0x48 and an end pointer from offset 0x4c
 *   of the input object. It loops through the array of pointers, calling
 *   read_byte_at_offset_8 on each element. If that call returns non-zero, it performs a
 *   virtual call on the element using the vtable pointer at offset 0xc. Finally, it calls
 *   invoke_virtual_destroy_on_range on the input object. The specific role of the objects
 *   and the virtual method is not determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void iterate_and_dispatch_object_list(cls_105b44b4 *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)((uintptr_t)(param_1->field47_0x48));
  if ((uint32_t)(piVar2) != param_1->field_0x4c) {
    do {
      iVar1 = read_byte_at_offset_8(*piVar2);
      if (iVar1 != 0) {
        iVar1 = *(int *)(*piVar2 + 0xc);
        (((vtbl_entry*)(iVar1))[8].fn)(*piVar2 + (int)((vtbl_entry*)(iVar1))[8].adj);
      }
      piVar2 = piVar2 + 1;
    } while ((uint32_t)(piVar2) != param_1->field_0x4c);
  }
  invoke_virtual_destroy_on_range((cls_105b48dc *)param_1);
  return;
}
