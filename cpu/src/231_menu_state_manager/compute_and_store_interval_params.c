/* @k10d compute_and_store_interval_params @ 0x104c3f7c
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 231_menu_state_manager (unit names are model-proposed)
 * purpose:
 *   Computes a base offset and two derived interval values from param_2, storing them into
 *   a struct at param_1.
 * summary:
 *   Checks if param_1+4 is zero; if so returns 0. Otherwise calls get_aligned_next_pointer
 *   to get a base value and return_first_word_1045c514/read_struct_field_at_offset_4 to get
 *   multipliers. It calculates a primary offset (mult1 * mult2 + base) and a secondary
 *   offset (mult1 * (mult2/2) + primary), with an optional shift of mult1 by 1 bit if
 *   param_3 is not 1. Stores param_3, base, primary, and secondary offsets at offsets 0x1c,
 *   0x20, 0x24, and 0x28 of param_1. Finally, writes two 16-bit values from param_2 into a
 *   sub-struct at param_1+0x2c using store_value_to_pointer_1045c510 and
 *   write_field_at_offset_four_1045c518.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t compute_and_store_interval_params(int param_1,uint32_t *param_2,int param_3)

{
  uint32_t uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  if (*(int *)(param_1 + 4) == 0) {
    uVar1 = 0;
  }
  else {
    if (param_3 == 1) {
      uVar2 = get_aligned_next_pointer(param_1);
      iVar3 = return_first_word_1045c514(param_2);
      iVar4 = read_struct_field_at_offset_4(param_2);
      iVar3 = iVar3 * iVar4 + uVar2;
      uVar5 = return_first_word_1045c514(param_2);
    }
    else {
      uVar2 = get_aligned_next_pointer(param_1);
      iVar3 = return_first_word_1045c514(param_2);
      iVar4 = read_struct_field_at_offset_4(param_2);
      iVar3 = iVar3 * iVar4 + uVar2;
      uVar5 = return_first_word_1045c514(param_2);
      uVar5 = uVar5 >> 1;
    }
    uVar6 = read_struct_field_at_offset_4(param_2);
    *(int *)(param_1 + 0x1c) = param_3;
    *(uint *)(param_1 + 0x20) = uVar2;
    *(int *)(param_1 + 0x24) = iVar3;
    *(uint *)(param_1 + 0x28) = uVar5 * (uVar6 >> 1) + iVar3;
    uVar2 = return_first_word_1045c514(param_2);
    store_value_to_pointer_1045c510((uint32_t *)(param_1 + 0x2c),uVar2 & 0xffff);
    uVar2 = read_struct_field_at_offset_4(param_2);
    write_field_at_offset_four_1045c518((uint32_t *)(param_1 + 0x2c),uVar2 & 0xffff);
    uVar1 = 1;
  }
  return uVar1;
}
