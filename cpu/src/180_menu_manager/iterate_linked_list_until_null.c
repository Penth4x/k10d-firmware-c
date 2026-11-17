/* @k10d iterate_linked_list_until_null @ 0x104863c2
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 180_menu_manager (unit names are model-proposed)
 * purpose:
 *   Traverses a linked list starting at param_1+0x54, calling virtual methods on each node
 *   until the list is exhausted or null.
 * summary:
 *   The function reads a pointer from offset 0x54 of the input object. If non-null, it
 *   enters a loop calling virtual slot 2 (offset 0x14) to get the next node, then virtual
 *   slot 3 (offset 0x24) on the current node. It updates the list head in param_1+0x54 with
 *   the next pointer. If the list becomes null, it calls call_helper_with_0x50000 with 0.
 *   It also checks a condition via check_and_clear_event_flag on param_1+8 and calls
 *   call_helper_with_0x50000 if that returns 0. Returns 1 if the list was non-empty
 *   initially, 0 otherwise.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t iterate_linked_list_until_null(int param_1, uint32_t param_x1, uint32_t param_x2)

{
  int iVar1;
  int iVar2;
  uint32_t uVar3;
  
  iVar2 = *(int *)(param_1 + 0x54);
  uVar3 = 1;
  if (iVar2 != 0) {
    iVar1 = (**(code **)(*(int *)(iVar2 + 0x48) + 0x14))
                      (*(short *)(*(int *)(iVar2 + 0x48) + 0x10) + iVar2);
    while (*(int *)(param_1 + 0x54) = iVar1, iVar1 != iVar2) {
      (**(code **)(*(int *)(iVar2 + 0x48) + 0x24))
                (*(short *)(*(int *)(iVar2 + 0x48) + 0x20) + iVar2);
      iVar2 = *(int *)(param_1 + 0x54);
      if (iVar2 == 0) break;
      iVar1 = (**(code **)(*(int *)(iVar2 + 0x48) + 0x1c))
                        (*(short *)(*(int *)(iVar2 + 0x48) + 0x18) + iVar2);
    }
    if (*(int *)(param_1 + 0x54) == 0) {
      uVar3 = 0;
      call_helper_with_0x50000(param_1,0);
    }
  }
  if ((*(int *)(param_1 + 0x54) == 0) && (iVar2 = check_and_clear_event_flag((void *)(param_1 + 8)), iVar2 == 0))
  {
    uVar3 = 0;
    call_helper_with_0x50000(param_1,0);
  }
  return uVar3;
}
