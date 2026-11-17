/* @k10d iterate_and_process_range_items @ 0x10476bda
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Loops over a range of indices, retrieves an item, checks a condition, invokes a virtual
 *   method, and removes the item.
 * summary:
 *   The function reads a start and end index from offsets 0x10 and 0x12 of the object
 *   passed in param_1. It iterates from start to end, calling
 *   read_bounded_array_element_10477358 to get a pointer for each index. If the pointer is
 *   valid and invoke_virtual_slot_4_10477064 returns 0, it calls virtual slot 1 (offset
 *   0xc) on the object with argument 3, then calls decrement_index_and_update_bounds to
 *   remove or update the entry at that index. The specific subsystem is not identifiable
 *   from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void iterate_and_process_range_items(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = (uint)*(ushort *)(param_1 + 0x10);
  if (uVar3 <= *(ushort *)(param_1 + 0x12)) {
    do {
      piVar1 = (int *)read_bounded_array_element_10477358(param_1 + 0xc,uVar3 & 0xffff);
      if ((piVar1 != (int *)0x0) && (iVar2 = invoke_virtual_slot_4_10477064(piVar1), iVar2 == 0)) {
        (**(code **)(*piVar1 + 0xc))((int)*(short *)(*piVar1 + 8) + (int)piVar1,3);
        decrement_index_and_update_bounds((int *)(param_1 + 0xc),uVar3 & 0xffff);
      }
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 <= (int)(uint)*(ushort *)(param_1 + 0x12));
  }
  return;
}
