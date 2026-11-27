/* @k10d render_exposure_value_digits_103b27c6 @ 0x103b27c6
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 050_debug_settings_menu (unit names are model-proposed)
 * purpose:
 *   Extracts integer and fractional digits from an exposure value and dispatches them to a
 *   UI rendering routine.
 * summary:
 *   The function divides the input value (param_2) by two global divisors (likely 10 and 1)
 *   to isolate the integer and first decimal digit. It selects one of three rendering paths
 *   based on param_5 (0, 1, or 2) and the sign/zero status from check_buffer_size_by_type.
 *   It then constructs a UI object via alloc_two_word_pair_1045bc2e and invokes a virtual
 *   method to draw the digit, followed by a cleanup call. The loop structure suggests it
 *   may handle multiple digits or repeated updates, though the counter logic is slightly
 *   opaque.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x103b29f6) overlaps instruction at (ram,0x103b29f4)
    */

void render_exposure_value_digits_103b27c6(int param_1,uint32_t param_2,int param_3,uint32_t param_4,char param_5)

{
  short sVar1;
  int iVar2;
  int iVar3;
  uint32_t uVar4;
  int iVar5;
  int iVar6;
  uintptr_t sp;
  int iVar7;
  int iStack_50;
  uint uStack_4c;
  int iStack_18;
  uint32_t auStack_10 [2];
  
  iVar2 = lookup_shutter_speed_value(*(uint32_t *)(param_1 + 0x28),param_2);
  iVar3 = check_buffer_size_by_type(*(uint32_t *)(param_1 + 0x28),param_2);
  iVar5 = 0;
  iStack_18 = 1;
  iStack_50 = 0;
  uStack_4c = param_3 + 0x48;
  do {
    iVar7 = iVar2 / *(int *)(iStack_50 + 0x10565cf8/*ROM*/);
    if (iVar7 != 0) {
      iVar7 = iVar7 % 10;
      if (param_5 == '\0') {
        if (iVar3 == 0) {
          map_mode_index_to_constant_103b2b3a((uint32_t)param_1, (uint32_t)param_2, (uint32_t)param_3);
        }
        else {
          map_mode_index_to_constant_103b2be2(param_1,iVar7,iVar5);
        }
      }
      else if (param_5 == '\x01') {
        if (iVar3 == 0) {
          map_mode_index_to_constant_103b2d38((uint32_t)param_1, (uint32_t)param_2, (uint32_t)param_3);
        }
        else {
          lookup_table_address_by_index(param_1,iVar7,iVar5);
        }
      }
      else if (param_5 == '\x02') {
        if (iVar3 == 0) {
          select_static_data_by_index((uint32_t)param_1, (uint32_t)param_2, (uint32_t)param_3);
        }
        else {
          select_static_address_by_index(param_1,iVar7,iVar5);
        }
      }
      iVar7 = menu_item_register(param_1 + 8);
      iVar6 = *(int *)(iVar7 + 0xc);
      sVar1 = *(short *)(iVar6 + 0x10);
      uVar4 = (uintptr_t)(alloc_two_word_pair_1045bc2e(auStack_10,uStack_4c & 0xffff,param_4));
      (((vtbl_entry*)(iVar6))[2].fn)(iVar7 + sVar1,uVar4);
      free_heap_block_if_flagged_1045bc54(auStack_10,2);
      iVar7 = menu_item_register(param_1 + 8);
      (((vtbl_entry*)(*(int *)(iVar7 + 0xc)))[1].fn)(iVar7 + *(short *)(*(int *)(iVar7 + 0xc) + 8),1);
    }
    iVar7 = iVar2 / *(int *)(iStack_50 + 0x10565cfc/*ROM*/);
    if (iVar7 != 0) {
      iVar6 = iVar5 + 1;
      iVar7 = iVar7 % 10;
      if (param_5 == '\0') {
        if (iVar3 == 0) {
          map_mode_index_to_constant_103b2b3a((uint32_t)param_1, (uint32_t)param_2, (uint32_t)param_3);
        }
        else {
          map_mode_index_to_constant_103b2be2(param_1,iVar7,iVar6);
        }
      }
      else if (param_5 == '\x01') {
        if (iVar3 == 0) {
          map_mode_index_to_constant_103b2d38((uint32_t)param_1, (uint32_t)param_2, (uint32_t)param_3);
        }
        else {
          lookup_table_address_by_index(param_1,iVar7,iVar6);
        }
      }
      else if (param_5 == '\x02') {
        if (iVar3 == 0) {
          select_static_data_by_index((uint32_t)param_1, (uint32_t)param_2, (uint32_t)param_3);
        }
        else {
          select_static_address_by_index(param_1,iVar7,iVar6);
        }
      }
      iVar7 = menu_item_register(param_1 + 8);
      iVar6 = *(int *)(iVar7 + 0xc);
      sVar1 = *(short *)(iVar6 + 0x10);
      uVar4 = (uintptr_t)(alloc_two_word_pair_1045bc2e(auStack_10,uStack_4c - 0x18 & 0xffff,param_4));
      (((vtbl_entry*)(iVar6))[2].fn)(iVar7 + sVar1,uVar4);
      free_heap_block_if_flagged_1045bc54(auStack_10,2);
      iVar7 = menu_item_register(param_1 + 8);
      (((vtbl_entry*)(*(int *)(iVar7 + 0xc)))[1].fn)(iVar7 + *(short *)(*(int *)(iVar7 + 0xc) + 8),1);
    }
    iVar5 = iVar5 + 2;
    uStack_4c = uStack_4c - 0x30;
    iStack_50 = iStack_50 + 8;
    iStack_18 = iStack_18 + -1;
  } while (-1 < iStack_18);
  return;
}
