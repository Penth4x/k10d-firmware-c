/* @k10d register_and_configure_menu_item_103ffe78 @ 0x103ffe78
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 090_sr_fl_menu (unit names are model-proposed)
 * purpose:
 *   Invokes a virtual method on an object, then conditionally calls another virtual method
 *   with index-specific arguments based on param_2.
 * summary:
 *   The function first calls a virtual method (slot 1) on an object obtained via
 *   menu_item_register. It then branches on param_2 (0, 1, or 2) to call a different
 *   virtual method (slot 19) with specific arguments (6, 0x14a, 0x168 / 2, 0x178, 0x168 /
 *   6, 0x1a6, 0x168) and finally calls the first virtual method again with argument 1. The
 *   specific camera subsystem role is not determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void register_and_configure_menu_item_103ffe78(int *param_1,int param_2)

{
  short sVar1;
  code *pcVar2;
  int iVar3;
  uintptr_t sp;
  uint8_t *puVar4;
  uint8_t auStack_14 [8];
  
  puVar4 = auStack_14;
  iVar3 = menu_item_register(*param_1);
  (((vtbl_entry*)(*(int *)(iVar3 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar3 + 0xc) + 8) + iVar3,0);
  if (param_2 == 0) {
    pcVar2 = *(code **)(*(int *)(iVar3 + 0xc) + 0xf4);
    sVar1 = *(short *)(*(int *)(iVar3 + 0xc) + 0xf0);
    *(uint16_t *)(puVar4 + 2) = 8;
    *(uint16_t *)(puVar4 + 6) = 0x10;
    (*pcVar2)(sVar1 + iVar3,6,0x14a,0x168);
    (((vtbl_entry*)(*(int *)(iVar3 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar3 + 0xc) + 8) + iVar3,1);
  }
  else if (param_2 == 1) {
    pcVar2 = *(code **)(*(int *)(iVar3 + 0xc) + 0xf4);
    sVar1 = *(short *)(*(int *)(iVar3 + 0xc) + 0xf0);
    *(uint16_t *)(puVar4 + 2) = 8;
    *(uint16_t *)(puVar4 + 6) = 0x10;
    (*pcVar2)(sVar1 + iVar3,2,0x178,0x168);
    (((vtbl_entry*)(*(int *)(iVar3 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar3 + 0xc) + 8) + iVar3,1);
  }
  else if (param_2 == 2) {
    pcVar2 = *(code **)(*(int *)(iVar3 + 0xc) + 0xf4);
    sVar1 = *(short *)(*(int *)(iVar3 + 0xc) + 0xf0);
    *(uint16_t *)(puVar4 + 2) = 8;
    *(uint16_t *)(puVar4 + 6) = 0x10;
    (*pcVar2)(sVar1 + iVar3,6,0x1a6,0x168);
    (((vtbl_entry*)(*(int *)(iVar3 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar3 + 0xc) + 8) + iVar3,1);
  }
  return;
}
