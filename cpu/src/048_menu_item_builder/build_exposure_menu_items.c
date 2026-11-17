/* @k10d build_exposure_menu_items @ 0x103ad658
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 048_menu_item_builder (unit names are model-proposed)
 * purpose:
 *   Renders the integer and fractional digits of an exposure value by calling a display
 *   widget for each non-zero digit.
 * summary:
 *   The function retrieves two numeric values from param_1+0x28 via
 *   lookup_shutter_speed_value and check_buffer_size_by_type. It iterates through digit
 *   positions, extracting individual digits using modulo 10 and calling
 *   map_mode_index_to_resource_id_103ad9ee to prepare them. For each digit, it obtains a
 *   display object via menu_item_register, allocates a buffer with
 *   alloc_two_word_pair_1045bc2e, and invokes a virtual method to draw the digit, followed
 *   by a second virtual call likely to update the display state.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x103ad936) overlaps instruction at (ram,0x103ad934)
    */

void build_exposure_menu_items(int param_1,uint32_t param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  uint32_t uVar4;
  int iVar5;
  uintptr_t sp;
  int iVar6;
  int iStack_44;
  int iStack_3c;
  uint uStack_38;
  int iStack_14;
  uint32_t auStack_10 [2];
  
  iVar2 = lookup_shutter_speed_value(*(uint32_t *)(param_1 + 0x28),param_2);
  iVar3 = check_buffer_size_by_type(*(uint32_t *)(param_1 + 0x28),param_2);
  iStack_44 = 0;
  iStack_14 = 1;
  iStack_3c = 0;
  uStack_38 = 0x248;
  do {
    iVar6 = iVar2 / *(int *)(iStack_3c + 0x10565760/*ROM*/);
    if (iVar6 != 0) {
      if (iVar3 == 0) {
        map_mode_index_to_table_offset(__frv_reg_unset(4), __frv_reg_unset(5), __frv_reg_unset(6));
      }
      else {
        map_mode_index_to_resource_id_103ad9ee(param_1,iVar6 % 10,iStack_44);
      }
      iVar6 = menu_item_register(param_1 + 8);
      iVar5 = *(int *)(iVar6 + 0xc);
      sVar1 = *(short *)(iVar5 + 0x10);
      uVar4 = alloc_two_word_pair_1045bc2e(auStack_10,uStack_38 & 0xffff,0x18);
      (**(code **)(iVar5 + 0x14))(iVar6 + sVar1,uVar4);
      free_heap_block_if_flagged_1045bc54(auStack_10,2);
      iVar6 = menu_item_register(param_1 + 8);
      (**(code **)(*(int *)(iVar6 + 0xc) + 0xc))(iVar6 + *(short *)(*(int *)(iVar6 + 0xc) + 8),1);
    }
    iVar6 = iVar2 / *(int *)(iStack_3c + 0x10565764/*ROM*/);
    if (iVar6 != 0) {
      if (iVar3 == 0) {
        map_mode_index_to_table_offset(__frv_reg_unset(4), __frv_reg_unset(5), __frv_reg_unset(6));
      }
      else {
        map_mode_index_to_resource_id_103ad9ee(param_1,iVar6 % 10,iStack_44 + 1);
      }
      iVar6 = menu_item_register(param_1 + 8);
      iVar5 = *(int *)(iVar6 + 0xc);
      sVar1 = *(short *)(iVar5 + 0x10);
      uVar4 = alloc_two_word_pair_1045bc2e(auStack_10,uStack_38 - 0x18 & 0xffff,0x18);
      (**(code **)(iVar5 + 0x14))(iVar6 + sVar1,uVar4);
      free_heap_block_if_flagged_1045bc54(auStack_10,2);
      iVar6 = menu_item_register(param_1 + 8);
      (**(code **)(*(int *)(iVar6 + 0xc) + 0xc))(iVar6 + *(short *)(*(int *)(iVar6 + 0xc) + 8),1);
    }
    iStack_44 = iStack_44 + 2;
    uStack_38 = uStack_38 - 0x30;
    iStack_3c = iStack_3c + 8;
    iStack_14 = iStack_14 + -1;
  } while (-1 < iStack_14);
  return;
}
