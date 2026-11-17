/* @k10d read_two_shorts_from_param2_103674ca @ 0x103674ca
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 008_mode_settings_manager (unit names are model-proposed)
 * purpose:
 *   Extracts two 16-bit values from param_2 via helper calls and stores them into param_1.
 * summary:
 *   The function copies three 32-bit words from param_2+0x20 to the stack. It then calls
 *   copy_two_words_from_param2 and return_first_word_1045c514 to obtain a value, truncates
 *   it to a short, and calls free_heap_if_flagged_1045c402. It repeats this process with
 *   read_struct_field_at_offset_4 to get a second short. Finally, it calls
 *   register_menu_item_with_data_1037dab4 with param_1+0x20, the constant 1, and a pointer
 *   to the stack data containing the copied words and the two extracted shorts.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void read_two_shorts_from_param2_103674ca(void *param_1,void *param_2)

{
  uint32_t uVar1;
  uintptr_t sp;
  uint32_t auStack_28 [2];
  uint32_t uStack_20;
  uint32_t uStack_1c;
  uint32_t uStack_18;
  uint16_t uStack_14;
  uint16_t uStack_12;
  
  uStack_20 = *(uint32_t *)((int)param_2 + 0x20);
  uStack_1c = *(uint32_t *)((int)param_2 + 0x24);
  uStack_18 = *(uint32_t *)((int)param_2 + 0x28);
  copy_two_words_from_param2((int)auStack_28,(int)param_2);
  uVar1 = return_first_word_1045c514(auStack_28);
  uStack_14 = (short)uVar1;
  free_heap_if_flagged_1045c402(auStack_28,2);
  copy_two_words_from_param2((int)auStack_28,(int)param_2);
  uVar1 = read_struct_field_at_offset_4(auStack_28);
  uStack_12 = (short)uVar1;
  free_heap_if_flagged_1045c402(auStack_28,2);
  register_menu_item_with_data_1037dab4((int)param_1 + 0x20,1,&uStack_20);
  return;
}
