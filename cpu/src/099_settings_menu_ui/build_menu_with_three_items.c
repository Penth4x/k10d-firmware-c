/* @k10d build_menu_with_three_items @ 0x10423750
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 099_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Executes a sequence of virtual method calls and helper functions on an object derived
 *   from cls_105956e0.
 * summary:
 *   The function retrieves a global pointer via get_or_create_singleton_object_104fb12e and
 *   accesses offset 0x74. It calls menu_item_register repeatedly to resolve an object
 *   pointer, then invokes virtual methods at offsets 0xc and 0xf4 of that object's vtable.
 *   It also calls menu_list_build with varying parameters and writes to local stack
 *   variables and the input parameter's memory. The specific camera subsystem is not
 *   identifiable from the provided callees or code structure.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t build_menu_with_three_items(int *param_1)

{
  short sVar1;
  code *pcVar2;
  int iVar3;
  uint32_t uVar4;
  uint32_t uVar5;
  uintptr_t sp;
  uint8_t *puVar6;
  uint8_t auStack_28 [8];
  short sStack_a;
  
  puVar6 = auStack_28;
  iVar3 = get_or_create_singleton_object_104fb12e();
  iVar3 = *(int *)(iVar3 + 0x74);
  sStack_a = 0;
  uVar4 = menu_item_register(*param_1);
  uVar5 = get_setting_0xa0(iVar3);
  *(char *)(param_1 + 8) = (char)uVar5;
  sStack_a = (short)uVar5;
  menu_list_build((void *)uVar4,&sStack_a,1,0);
  uVar4 = menu_item_register(*param_1);
  iVar3 = query_object_via_temp_buffer_104f2e7a(iVar3);
  sStack_a = (short)iVar3;
  if (iVar3 < 1) {
    if (iVar3 < 0) {
      sStack_a = -sStack_a;
      iVar3 = menu_item_register(*param_1);
      (**(code **)(*(int *)(iVar3 + 0xc) + 0xc))(iVar3 + *(short *)(*(int *)(iVar3 + 0xc) + 8),1);
      iVar3 = menu_item_register(*param_1);
      (**(code **)(*(int *)(iVar3 + 0xc) + 0xc))(iVar3 + *(short *)(*(int *)(iVar3 + 0xc) + 8),0);
    }
    else {
      sStack_a = 0;
      iVar3 = menu_item_register(*param_1);
      (**(code **)(*(int *)(iVar3 + 0xc) + 0xc))(iVar3 + *(short *)(*(int *)(iVar3 + 0xc) + 8),0);
      iVar3 = menu_item_register(*param_1);
      (**(code **)(*(int *)(iVar3 + 0xc) + 0xc))(iVar3 + *(short *)(*(int *)(iVar3 + 0xc) + 8),0);
    }
  }
  else {
    iVar3 = menu_item_register(*param_1);
    (**(code **)(*(int *)(iVar3 + 0xc) + 0xc))(iVar3 + *(short *)(*(int *)(iVar3 + 0xc) + 8),1);
    iVar3 = menu_item_register(*param_1);
    (**(code **)(*(int *)(iVar3 + 0xc) + 0xc))(iVar3 + *(short *)(*(int *)(iVar3 + 0xc) + 8),0);
  }
  menu_list_build((void *)uVar4,&sStack_a,3,0);
  param_1[9] = 0;
  sStack_a = 0;
  iVar3 = menu_item_register(*param_1);
  (**(code **)(*(int *)(iVar3 + 0xc) + 0xc))(iVar3 + *(short *)(*(int *)(iVar3 + 0xc) + 8),0);
  iVar3 = menu_item_register(*param_1);
  (**(code **)(*(int *)(iVar3 + 0xc) + 0xc))(iVar3 + *(short *)(*(int *)(iVar3 + 0xc) + 8),0);
  sStack_a = (short)param_1[9];
  uVar4 = menu_item_register(*param_1);
  menu_list_build((void *)uVar4,&sStack_a,3,1);
  iVar3 = menu_item_register(*param_1);
  pcVar2 = *(code **)(*(int *)(iVar3 + 0xc) + 0xf4);
  sVar1 = *(short *)(*(int *)(iVar3 + 0xc) + 0xf0);
  *(uint16_t *)(puVar6 + 2) = 0x18;
  *(uint16_t *)(puVar6 + 6) = 0x30;
  (*pcVar2)(sVar1 + iVar3,2,0x14c,0x120);
  (**(code **)(*(int *)(iVar3 + 0xc) + 0xc))(iVar3 + *(short *)(*(int *)(iVar3 + 0xc) + 8),1);
  *(uint8_t *)((int)param_1 + 0x2a) = 0;
  return 0x1bf0007;
}
