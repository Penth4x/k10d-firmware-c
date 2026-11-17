/* @k10d register_menu_item_with_split_1038206e @ 0x1038206e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Performs three conditional virtual method calls on an object retrieved via a helper,
 *   passing computed 16-bit values.
 * summary:
 *   The function retrieves an object pointer using menu_item_register and invokes virtual
 *   slots at offsets 0xc, 0x1c, and 0x2c. It then calls four helper functions
 *   (read_first_word_1045bd4c, get_second_word_of_struct, return_first_word_1045c514,
 *   read_struct_field_at_offset_4) to extract values from stack buffers. Based on 16-bit
 *   fields in param_1 (at 0x28 and 0x2c), it conditionally invokes a virtual method at
 *   offset 0xf4 with varying arguments, followed by a call to the method at offset 0xc.
 *   Finally, it calls free_heap_if_flagged_1045c402 and free_heap_block_if_flagged_1045bc54
 *   with the constant 2.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void register_menu_item_with_split_1038206e(int param_1)

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
  compute_window_split_offsets(param_1,iVar6,*(uint16_t *)(param_1 + 0x58),*(uint16_t *)(param_1 + 0x5a));
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
