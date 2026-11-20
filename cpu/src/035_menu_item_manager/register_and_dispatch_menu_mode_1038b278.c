/* @k10d register_and_dispatch_menu_mode_1038b278 @ 0x1038b278
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Maps a 1-7 mode index to an internal code and invokes a virtual handler to apply the
 *   change.
 * summary:
 *   Retrieves an object pointer twice via menu_item_register, calls two virtual methods on
 *   it (likely lock/prepare), then switches on param_2 to map the input mode to an internal
 *   value (1->1, 2->3, 3->5, 4->2, 5->4, 6->0, 7->6). It calls
 *   dispatch_mode_update_request_1038b660 with the mapped value, unlocks the object, and
 *   finally calls free_heap_block_if_flagged_1045bc54 to clean up the stack buffer. The
 *   mapping and virtual dispatch pattern suggest a state machine or mode selector, but the
 *   specific camera subsystem (AE, AF, etc.) is not identifiable from the provided callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void register_and_dispatch_menu_mode_1038b278(int param_1,uint32_t param_2)

{
  int iVar1;
  int iVar2;
  uint32_t uVar3;
  uintptr_t sp;
  uint8_t auStack_18 [16];
  
  iVar1 = menu_item_register(param_1);
  iVar2 = menu_item_register(param_1);
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[3].fn)
            (auStack_18,((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[3].adj + iVar1);
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar1 + 0xc) + 8) + iVar1,1);
  switch(param_2) {
  case 1:
    uVar3 = 1;
    break;
  case 2:
    uVar3 = 3;
    break;
  case 3:
    uVar3 = 5;
    break;
  case 4:
    uVar3 = 2;
    break;
  case 5:
    uVar3 = 4;
    break;
  case 6:
    uVar3 = 0;
    break;
  case 7:
    uVar3 = 6;
    break;
  default:
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar1 + 0xc) + 8) + iVar1,0);
    (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar2 + 0xc) + 8) + iVar2,0);
    goto LAB_1038b348;
  }
  dispatch_mode_update_request_1038b660(param_1,iVar2,auStack_18,uVar3);
  (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar2 + 0xc) + 8) + iVar2,1);
LAB_1038b348:
  free_heap_block_if_flagged_1045bc54(auStack_18,2);
  return;
}
