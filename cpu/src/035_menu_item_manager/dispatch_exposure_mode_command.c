/* @k10d dispatch_exposure_mode_command @ 0x1038a9de
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Sends a mode-specific command to a companion chip via a virtual interface based on
 *   exposure parameters.
 * summary:
 *   Retrieves four object pointers from param_1 using menu_item_register. Calls virtual
 *   slot 2 on the first object, then calls virtual slot 1 on all four objects with argument
 *   0. Depending on param_4 and param_2 (which maps to values 0-10 or special codes), it
 *   calls virtual slot 1 with argument 1 on specific objects and invokes
 *   compute_indexed_pair_offsets with a mapped index. Finally, calls
 *   free_heap_block_if_flagged_1045bc54 to clean up the stack buffer.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_exposure_mode_command(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint32_t uVar5;
  uintptr_t sp;
  uint32_t *puVar6;
  uint8_t auStack_3c [4];
  uint32_t auStack_18 [4];
  
  puVar6 = (uint32_t *)auStack_3c;
  iVar1 = menu_item_register(param_1);
  iVar2 = menu_item_register(param_1);
  iVar3 = menu_item_register(param_1);
  iVar4 = menu_item_register(param_1);
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[3].fn)
            (auStack_18,((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[3].adj + iVar1);
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar1 + 0xc) + 8) + iVar1,0);
  (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar2 + 0xc) + 8) + iVar2,0);
  (((vtbl_entry*)(*(int *)(iVar3 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar3 + 0xc) + 8) + iVar3,0);
  (((vtbl_entry*)(*(int *)(iVar4 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar4 + 0xc) + 8) + iVar4,0);
  if (param_4 == 1) {
    if (((param_3 == 3) || (param_3 == 2)) || (param_3 == 1)) {
      (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar1 + 0xc) + 8) + iVar1,1);
      (((vtbl_entry*)(*(int *)(iVar3 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar3 + 0xc) + 8) + iVar3,1);
      *puVar6 = 7;
      compute_indexed_pair_offsets(param_1,iVar4,auStack_18,5,*puVar6);
      (((vtbl_entry*)(*(int *)(iVar4 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar4 + 0xc) + 8) + iVar4,1);
    }
    else if (param_2 == 0xfffe) {
      (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar1 + 0xc) + 8) + iVar1,1);
      (((vtbl_entry*)(*(int *)(iVar3 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar3 + 0xc) + 8) + iVar3,1);
      *puVar6 = 7;
      compute_indexed_pair_offsets(param_1,iVar4,auStack_18,5,*puVar6);
      (((vtbl_entry*)(*(int *)(iVar4 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar4 + 0xc) + 8) + iVar4,1);
    }
    else if (param_2 == 0xffff) {
      (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar1 + 0xc) + 8) + iVar1,1);
      (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar2 + 0xc) + 8) + iVar2,1);
    }
    else if ((0 < param_2) && (param_2 < 0xc)) {
      uVar5 = 5;
      if (param_2 == 1) {
        uVar5 = 0;
      }
      else if (param_2 == 2) {
        uVar5 = 1;
      }
      else if (param_2 == 3) {
        uVar5 = 2;
      }
      else if (param_2 == 4) {
        uVar5 = 3;
      }
      else if (param_2 == 5) {
        uVar5 = 4;
      }
      else if (param_2 == 6) {
        uVar5 = 5;
      }
      else if (param_2 == 7) {
        uVar5 = 6;
      }
      else if (param_2 == 8) {
        uVar5 = 7;
      }
      else if (param_2 == 9) {
        uVar5 = 8;
      }
      else if (param_2 == 10) {
        uVar5 = 9;
      }
      else if (param_2 == 0xb) {
        uVar5 = 10;
      }
      (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar1 + 0xc) + 8) + iVar1,1);
      (((vtbl_entry*)(*(int *)(iVar3 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar3 + 0xc) + 8) + iVar3,1);
      *puVar6 = 4;
      compute_indexed_pair_offsets(param_1,iVar4,auStack_18,uVar5,*puVar6);
      (((vtbl_entry*)(*(int *)(iVar4 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar4 + 0xc) + 8) + iVar4,1);
    }
  }
  free_heap_block_if_flagged_1045bc54(auStack_18,2);
  return;
}
