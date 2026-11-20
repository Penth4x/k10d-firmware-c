/* @k10d compute_weighted_virtual_sum @ 0x10527dfc
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 284_event_display_buffer (unit names are model-proposed)
 * purpose:
 *   Iterates over a count of object pointers, calls a virtual method on each, sums the
 *   results, and scales by a factor.
 * summary:
 *   The function reads a count from offset 0x20c of the input structure. It loops through
 *   an array of pointers starting at offset 0x214. For each pointer, it performs a virtual
 *   call (slot 12) passing the object and the first field of the input structure. It
 *   accumulates the return values into a sum. Finally, it multiplies the sum by the value
 *   at offset 0x210 and right-shifts by 8 bits to return the result.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint compute_weighted_virtual_sum(cls_105f9250 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = 0;
  iVar4 = 0;
  if (0 < (int)param_1->field_0x20c) {
    iVar2 = 0;
    do {
      iVar1 = *(int *)((int)&param_1[1].field_0x0 + iVar2);
      iVar5 = *(int *)(iVar1 + 0x208);
      iVar1 = (((vtbl_entry*)(iVar5))[12].fn)(iVar1 + ((vtbl_entry*)(iVar5))[12].adj,param_1->field_0x0);
      iVar2 = iVar2 + 4;
      iVar4 = iVar1 + iVar4;
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)param_1->field_0x20c);
  }
  return (uint)(iVar4 * param_1->field_0x210) >> 8;
}
