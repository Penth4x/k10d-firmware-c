/* @k10d invoke_virtual_on_range_items_10493990 @ 0x10493990
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 198_event_dispatch (unit names are model-proposed)
 * purpose:
 *   Iterates a pointer range and calls a virtual method on each item with param_2.
 * summary:
 *   Calls notify_range_end_to_observers (virtual slot 1 of base class cls_105b48dc) first.
 *   Then reads a start pointer from param_1+0x48 and an end pointer from param_1+0x4c. If
 *   they differ, it loops over the array of pointers, dereferencing each to get an object,
 *   reading a vtable pointer at offset 0xc, and invoking virtual slot 1 (offset 0xc) with a
 *   this-adjustment from offset 8 and param_2 as the second argument. This is a standard
 *   Cfront virtual call idiom dispatching to slot 1 of each element in the range.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_on_range_items_10493990(int param_1,uint32_t param_2)

{
  int *piVar1;
  int iVar2;
  
  notify_range_end_to_observers((uint32_t)param_1, (uint32_t)param_2);
  piVar1 = *(int **)(param_1 + 0x48);
  if (piVar1 != *(int **)(param_1 + 0x4c)) {
    do {
      iVar2 = *(int *)(*piVar1 + 0xc);
      (((vtbl_entry*)(iVar2))[1].fn)(*piVar1 + (int)*(short *)(iVar2 + 8),param_2);
      piVar1 = piVar1 + 1;
    } while (piVar1 != *(int **)(param_1 + 0x4c));
  }
  return;
}
