/* @k10d update_three_ui_elements @ 0x103b0bc2
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 049_settings_menu_init (unit names are model-proposed)
 * purpose:
 *   Updates three UI components by calculating offsets based on a global state and invoking
 *   virtual methods.
 * summary:
 *   The function performs three nearly identical sequences of operations. In each sequence,
 *   it calculates a 16-bit offset by adjusting a base value (0x22e - (uRam10568dc8 >> 1))
 *   based on a state value returned by a specific getter
 *   (get_setting_by_mode_flag_104f2180, get_setting_by_mode_flag_104f21dc, or
 *   get_setting_by_mode_flag_104f2238). It then allocates or prepares a structure via
 *   alloc_two_word_pair_1045bc2e, calls a virtual method at offset 0x14 on an object
 *   retrieved via menu_item_register, and finally calls two other virtual methods at
 *   offsets 0xec and 0xc. The specific offsets and state getters suggest updating three
 *   distinct UI elements or indicators.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_three_ui_elements(void *param_1)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint32_t uVar5;
  int iVar6;
  uintptr_t sp;
  uint32_t uStack_1c;
  uint32_t uStack_18;
  uint32_t uStack_14;
  uint32_t auStack_10 [2];
  
  uStack_14 = 6;
  uVar2 = 0x22eU - ((int)(uint)uRam10568dc8 >> 1) & 0xffff;
  iVar3 = (int)param_1 + 8;
  iVar4 = menu_item_register(iVar3);
  uVar5 = get_setting_by_mode_flag_104f2180(*(int *)((int)param_1 + 0x28));
  switch(uVar5) {
  case 0:
    uVar2 = uVar2 - 0x24 & 0xffff;
    break;
  case 1:
    uVar2 = uVar2 - 0x18 & 0xffff;
    break;
  case 2:
    uVar2 = uVar2 - 0xc;
    goto LAB_103b0c4e;
  case 3:
    uStack_14 = 2;
    break;
  case 4:
    uVar2 = uVar2 + 0xc;
    goto LAB_103b0c4e;
  case 5:
    uVar2 = uVar2 + 0x18;
    goto LAB_103b0c4e;
  case 6:
    uVar2 = uVar2 + 0x24;
LAB_103b0c4e:
    uVar2 = uVar2 & 0xffff;
  }
  iVar6 = *(int *)(iVar4 + 0xc);
  sVar1 = *(short *)(iVar6 + 0x10);
  uVar5 = (uintptr_t)(alloc_two_word_pair_1045bc2e(auStack_10,uVar2,0x108));
  (((vtbl_entry*)(iVar6))[2].fn)(sVar1 + iVar4,uVar5);
  free_heap_block_if_flagged_1045bc54(auStack_10,2);
  (((vtbl_entry*)(*(int *)(iVar4 + 0xc)))[29].fn)
            (((vtbl_entry*)(*(int *)(iVar4 + 0xc)))[29].adj + iVar4,uStack_14);
  (((vtbl_entry*)(*(int *)(iVar4 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar4 + 0xc) + 8) + iVar4,1);
  uStack_18 = 6;
  uVar2 = 0x22eU - ((int)(uint)uRam10568dc8 >> 1) & 0xffff;
  iVar4 = menu_item_register(iVar3);
  uVar5 = get_setting_by_mode_flag_104f21dc(*(int *)((int)param_1 + 0x28));
  switch(uVar5) {
  case 0:
    uVar2 = uVar2 - 0x24 & 0xffff;
    break;
  case 1:
    uVar2 = uVar2 - 0x18 & 0xffff;
    break;
  case 2:
    uVar2 = uVar2 - 0xc;
    goto LAB_103b0d30;
  case 3:
    uStack_18 = 2;
    break;
  case 4:
    uVar2 = uVar2 + 0xc;
    goto LAB_103b0d30;
  case 5:
    uVar2 = uVar2 + 0x18;
    goto LAB_103b0d30;
  case 6:
    uVar2 = uVar2 + 0x24;
LAB_103b0d30:
    uVar2 = uVar2 & 0xffff;
  }
  iVar6 = *(int *)(iVar4 + 0xc);
  sVar1 = *(short *)(iVar6 + 0x10);
  uVar5 = (uintptr_t)(alloc_two_word_pair_1045bc2e(auStack_10,uVar2,0x138));
  (((vtbl_entry*)(iVar6))[2].fn)(sVar1 + iVar4,uVar5);
  free_heap_block_if_flagged_1045bc54(auStack_10,2);
  (((vtbl_entry*)(*(int *)(iVar4 + 0xc)))[29].fn)
            (((vtbl_entry*)(*(int *)(iVar4 + 0xc)))[29].adj + iVar4,uStack_18);
  (((vtbl_entry*)(*(int *)(iVar4 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar4 + 0xc) + 8) + iVar4,1);
  uStack_1c = 6;
  uVar2 = 0x22eU - ((int)(uint)uRam10568dc8 >> 1) & 0xffff;
  iVar3 = menu_item_register(iVar3);
  uVar5 = get_setting_by_mode_flag_104f2238(*(int *)((int)param_1 + 0x28));
  switch(uVar5) {
  case 0:
    uVar2 = uVar2 - 0x24 & 0xffff;
    goto switchD_103b0dd8_default;
  case 1:
    uVar2 = uVar2 - 0x18 & 0xffff;
    goto switchD_103b0dd8_default;
  case 2:
    uVar2 = uVar2 - 0xc;
    break;
  case 3:
    uStack_1c = 2;
    goto switchD_103b0dd8_default;
  case 4:
    uVar2 = uVar2 + 0xc;
    break;
  case 5:
    uVar2 = uVar2 + 0x18;
    break;
  case 6:
    uVar2 = uVar2 + 0x24;
    break;
  default:
    goto switchD_103b0dd8_default;
  }
  uVar2 = uVar2 & 0xffff;
switchD_103b0dd8_default:
  iVar4 = *(int *)(iVar3 + 0xc);
  sVar1 = *(short *)(iVar4 + 0x10);
  uVar5 = (uintptr_t)(alloc_two_word_pair_1045bc2e(auStack_10,uVar2,0x168));
  (((vtbl_entry*)(iVar4))[2].fn)(sVar1 + iVar3,uVar5);
  free_heap_block_if_flagged_1045bc54(auStack_10,2);
  (((vtbl_entry*)(*(int *)(iVar3 + 0xc)))[29].fn)
            (((vtbl_entry*)(*(int *)(iVar3 + 0xc)))[29].adj + iVar3,uStack_1c);
  (((vtbl_entry*)(*(int *)(iVar3 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar3 + 0xc) + 8) + iVar3,1);
  return;
}
