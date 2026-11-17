/* @k10d compute_exposure_timing_params @ 0x103a3558
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 044_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Calculates shutter and aperture timing values based on exposure mode and sensor data.
 * summary:
 *   The function reads exposure mode and sensor parameters from the object at param_1. It
 *   performs arithmetic to derive timing values (likely shutter duration and aperture
 *   steps) using a base value of 0x150 (336) and offsets. It then constructs two data
 *   structures via alloc_two_word_pair_1045bc2e and alloc_two_word_pair_1045c3dc and passes
 *   them to a virtual method and dispatch_two_word_event, likely to configure the exposure
 *   mechanism.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void compute_exposure_timing_params(int param_1)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint32_t uVar5;
  uint uVar6;
  uintptr_t sp;
  int iVar7;
  uint32_t auStack_18 [2];
  uint32_t auStack_10 [2];
  
  iVar4 = menu_item_register(param_1 + 8);
  (**(code **)(*(int *)(iVar4 + 0xc) + 0xc))(*(short *)(*(int *)(iVar4 + 0xc) + 8) + iVar4,0);
  uVar3 = (uint)*(byte *)(param_1 + 0x42);
  if (((uVar3 == 0) || (*(char *)(param_1 + 0x41) == '\x01')) ||
     (*(char *)(param_1 + 0x41) == '\x02')) {
    iVar2 = 0x60;
    if (*(char *)(param_1 + 0x4e) == '\0') {
      iVar2 = 0x90;
    }
    uVar6 = (uint)*(ushort *)(param_1 + 0x4a);
    iVar7 = ((0x150 - iVar2) * 100) / (int)(*(ushort *)(param_1 + 0x48) - uVar6);
    if (uVar3 == 0) {
      uVar3 = (uint)*(ushort *)(param_1 + 0x50 + (uint)*(byte *)(param_1 + 0x45) * 2);
      uVar6 = ((iVar7 * (uVar3 - uVar6)) / 100 + iVar2) - 4 & 0xffff;
      uVar3 = (iVar7 * (*(ushort *)(param_1 + 0x50 + (uint)*(byte *)(param_1 + 0x44) * 2) - uVar3))
              / 100 + 8 & 0xffff;
    }
    else {
      uVar6 = ((iVar7 * (*(ushort *)(param_1 + 0x50 + uVar3 * 2) - uVar6)) / 100 + iVar2) - 8;
      uVar3 = 0x10;
    }
    iVar2 = *(int *)(iVar4 + 0xc);
    sVar1 = *(short *)(iVar2 + 0x10);
    uVar5 = alloc_two_word_pair_1045bc2e(auStack_18,0x248,uVar6);
    (**(code **)(iVar2 + 0x14))(sVar1 + iVar4,uVar5);
    free_heap_block_if_flagged_1045bc54(auStack_18,2);
    uVar5 = alloc_two_word_pair_1045c3dc(auStack_10,0x18,uVar3);
    dispatch_two_word_event(iVar4,uVar5);
    free_heap_if_flagged_1045c402(auStack_10,2);
    (**(code **)(*(int *)(iVar4 + 0xc) + 0xc))(*(short *)(*(int *)(iVar4 + 0xc) + 8) + iVar4,1);
  }
  return;
}
