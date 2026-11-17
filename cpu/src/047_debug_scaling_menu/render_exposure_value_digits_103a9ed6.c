/* @k10d render_exposure_value_digits_103a9ed6 @ 0x103a9ed6
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 047_debug_scaling_menu (unit names are model-proposed)
 * purpose:
 *   Renders the integer and fractional digits of an exposure value by calling a display
 *   widget for each non-zero digit.
 * summary:
 *   The function retrieves two values from param_1+0x28 via lookup_shutter_speed_value and
 *   check_buffer_size_by_type. It iterates through digit positions, dividing the values by
 *   constants at 0x10565458 to extract digits. For each non-zero digit, it calls
 *   map_mode_index_to_id_103aa26c to prepare the digit and then uses a virtual call (slot
 *   2) on an object obtained from menu_item_register to render it, passing a position
 *   calculated from uStack_38. The loop runs 4 times, decrementing the position offset by
 *   0x30 each iteration.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x103aa1b4) overlaps instruction at (ram,0x103aa1b2)
    */

void render_exposure_value_digits_103a9ed6(int param_1,uint32_t param_2)

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
    iVar6 = iVar2 / *(int *)(iStack_3c + 0x10565458/*ROM*/);
    if (iVar6 != 0) {
      if (iVar3 == 0) {
        map_mode_index_to_id_103aa1be(__frv_reg_unset(4), __frv_reg_unset(5), __frv_reg_unset(6));
      }
      else {
        map_mode_index_to_id_103aa26c(param_1,iVar6 % 10,iStack_44);
      }
      iVar6 = menu_item_register(param_1 + 8);
      iVar5 = *(int *)(iVar6 + 0xc);
      sVar1 = *(short *)(iVar5 + 0x10);
      uVar4 = alloc_two_word_pair_1045bc2e(auStack_10,uStack_38 & 0xffff,0xd8);
      (**(code **)(iVar5 + 0x14))(iVar6 + sVar1,uVar4);
      free_heap_block_if_flagged_1045bc54(auStack_10,2);
      iVar6 = menu_item_register(param_1 + 8);
      (**(code **)(*(int *)(iVar6 + 0xc) + 0xc))(iVar6 + *(short *)(*(int *)(iVar6 + 0xc) + 8),1);
    }
    iVar6 = iVar2 / *(int *)(iStack_3c + 0x1056545c/*ROM*/);
    if (iVar6 != 0) {
      if (iVar3 == 0) {
        map_mode_index_to_id_103aa1be(__frv_reg_unset(4), __frv_reg_unset(5), __frv_reg_unset(6));
      }
      else {
        map_mode_index_to_id_103aa26c(param_1,iVar6 % 10,iStack_44 + 1);
      }
      iVar6 = menu_item_register(param_1 + 8);
      iVar5 = *(int *)(iVar6 + 0xc);
      sVar1 = *(short *)(iVar5 + 0x10);
      uVar4 = alloc_two_word_pair_1045bc2e(auStack_10,uStack_38 - 0x18 & 0xffff,0xd8);
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
