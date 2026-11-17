/* @k10d dispatch_mode_change_request_1038b35c @ 0x1038b35c
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Maps a 1-7 mode index to an internal code and invokes a virtual handler to apply the
 *   change.
 * summary:
 *   Retrieves an object pointer via menu_item_register and calls two virtual methods (slots
 *   3 and 1) to prepare state. It translates the input parameter into a specific value
 *   (0-6) and passes it to dispatch_mode_update_request_1038b660. Finally, it calls
 *   free_heap_block_if_flagged_1045bc54 with the local buffer and a constant 2, likely to
 *   finalize or notify the subsystem.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_mode_change_request_1038b35c(int param_1,uint32_t param_2)

{
  int iVar1;
  int iVar2;
  uint32_t uVar3;
  uintptr_t sp;
  uint8_t auStack_18 [16];
  
  iVar1 = menu_item_register(param_1);
  iVar2 = menu_item_register(param_1);
  (**(code **)(*(int *)(iVar1 + 0xc) + 0x1c))
            (auStack_18,*(short *)(*(int *)(iVar1 + 0xc) + 0x18) + iVar1);
  (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(*(short *)(*(int *)(iVar1 + 0xc) + 8) + iVar1,1);
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
    (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(*(short *)(*(int *)(iVar1 + 0xc) + 8) + iVar1,0);
    (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(*(short *)(*(int *)(iVar2 + 0xc) + 8) + iVar2,0);
    goto LAB_1038b42c;
  }
  dispatch_mode_update_request_1038b660(param_1,iVar2,(void *)auStack_18,uVar3);
  (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(*(short *)(*(int *)(iVar2 + 0xc) + 8) + iVar2,1);
LAB_1038b42c:
  free_heap_block_if_flagged_1045bc54(auStack_18,2);
  return;
}
