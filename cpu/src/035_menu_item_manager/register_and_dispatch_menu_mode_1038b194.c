/* @k10d register_and_dispatch_menu_mode_1038b194 @ 0x1038b194
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Maps a 1-7 mode index to an internal code and dispatches it via a helper, with virtual
 *   object setup/cleanup.
 * summary:
 *   Retrieves two object pointers via menu_item_register. Performs virtual calls on the
 *   first object (slots at offsets 0x1c and 0xc) to prepare state. Switches on param_2 to
 *   map values 1-7 to internal codes (1->1, 2->3, 3->5, 4->2, 5->4, 6->0, 7->6). Calls
 *   dispatch_mode_update_request_1038b660 with the mapped code. Calls
 *   free_heap_block_if_flagged_1045bc54 to finalize/cleanup the stack buffer. The mapping
 *   and dispatch pattern suggest handling a mode selection or state change request.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void register_and_dispatch_menu_mode_1038b194(int param_1,uint32_t param_2)

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
    goto LAB_1038b264;
  }
  dispatch_mode_update_request_1038b660(param_1,iVar2,auStack_18,uVar3);
  (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar2 + 0xc) + 8) + iVar2,1);
LAB_1038b264:
  free_heap_block_if_flagged_1045bc54(auStack_18,2);
  return;
}
