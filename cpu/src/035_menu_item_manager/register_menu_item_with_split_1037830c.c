/* @k10d register_menu_item_with_split_1037830c @ 0x1037830c
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Retrieves an object via menu_item_register and issues three conditional virtual calls
 *   based on 16-bit fields in param_1.
 * summary:
 *   The function calls menu_item_register to obtain a base pointer, then performs a virtual
 *   call at offset 0xc with argument 1. It extracts two 16-bit values from param_1 (at
 *   offsets 0x28 and 0x2c) and, if non-zero, invokes a virtual method at offset 0xf4 with
 *   specific parameters derived from read_first_word_1045bd4c/56 and
 *   return_first_word_1045c514/1e. A third virtual call is made if the sum of the two
 *   fields does not equal the result of read_struct_field_at_offset_4. Finally, it calls
 *   free_heap_if_flagged_1045c402 and free_heap_block_if_flagged_1045bc54 with argument 2.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void register_menu_item_with_split_1037830c(int param_1)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  uint16_t uVar4;
  code *pcVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint32_t uVar9;
  int iVar10;
  uintptr_t sp;
  uint8_t *puVar11;
  uint8_t auStack_60 [8];
  uint32_t auStack_28 [2];
  uint32_t auStack_20 [6];
  
  puVar11 = auStack_60;
  iVar6 = menu_item_register(param_1);
  (**(code **)(*(int *)(iVar6 + 0xc) + 0xc))(*(short *)(*(int *)(iVar6 + 0xc) + 8) + iVar6,1);
  (**(code **)(*(int *)(iVar6 + 0xc) + 0x1c))
            (auStack_28,*(short *)(*(int *)(iVar6 + 0xc) + 0x18) + iVar6);
  (**(code **)(*(int *)(iVar6 + 0xc) + 0x2c))
            (auStack_20,iVar6 + *(short *)(*(int *)(iVar6 + 0xc) + 0x28));
  uVar7 = read_first_word_1045bd4c(auStack_28);
  uVar8 = get_second_word_of_struct(auStack_28);
  uVar9 = return_first_word_1045c514(auStack_20);
  iVar6 = read_struct_field_at_offset_4(auStack_20);
  compute_window_split_offsets(param_1,iVar6,*(uint16_t *)(param_1 + 0x38),*(uint16_t *)(param_1 + 0x3a));
  uVar2 = *(uint *)(param_1 + 0x28);
  uVar3 = *(uint *)(param_1 + 0x2c);
  iVar10 = menu_item_register(param_1);
  uVar7 = uVar7 & 0xffff;
  uVar4 = (uint16_t)uVar9;
  if ((uVar2 & 0xffff) != 0) {
    pcVar5 = *(code **)(*(int *)(iVar10 + 0xc) + 0xf4);
    sVar1 = *(short *)(*(int *)(iVar10 + 0xc) + 0xf0);
    *(uint16_t *)(puVar11 + 2) = uVar4;
    *(short *)(puVar11 + 6) = (short)uVar2;
    (*pcVar5)(sVar1 + iVar10,0,uVar7,uVar8 & 0xffff);
    (**(code **)(*(int *)(iVar10 + 0xc) + 0xc))(*(short *)(*(int *)(iVar10 + 0xc) + 8) + iVar10,1);
  }
  iVar10 = menu_item_register(param_1);
  uVar8 = (uVar8 & 0xffff) + (uVar2 & 0xffff) & 0xffff;
  if ((uVar3 & 0xffff) != 0) {
    pcVar5 = *(code **)(*(int *)(iVar10 + 0xc) + 0xf4);
    sVar1 = *(short *)(*(int *)(iVar10 + 0xc) + 0xf0);
    *(uint16_t *)(puVar11 + 2) = uVar4;
    *(short *)(puVar11 + 6) = (short)uVar3;
    (*pcVar5)(sVar1 + iVar10,0x19,uVar7,uVar8);
    (**(code **)(*(int *)(iVar10 + 0xc) + 0xc))(*(short *)(*(int *)(iVar10 + 0xc) + 8) + iVar10,1);
  }
  iVar10 = menu_item_register(param_1);
  uVar2 = iVar6 - (uVar2 + uVar3);
  if ((uVar2 & 0xffff) != 0) {
    sVar1 = *(short *)(*(int *)(iVar10 + 0xc) + 0xf0);
    pcVar5 = *(code **)(*(int *)(iVar10 + 0xc) + 0xf4);
    *(uint16_t *)(puVar11 + 2) = uVar4;
    *(short *)(puVar11 + 6) = (short)uVar2;
    (*pcVar5)(sVar1 + iVar10,0,uVar7,uVar8 + (uVar3 & 0xffff) & 0xffff);
    (**(code **)(*(int *)(iVar10 + 0xc) + 0xc))(*(short *)(*(int *)(iVar10 + 0xc) + 8) + iVar10,1);
  }
  free_heap_if_flagged_1045c402(auStack_20,2);
  free_heap_block_if_flagged_1045bc54(auStack_28,2);
  return;
}
