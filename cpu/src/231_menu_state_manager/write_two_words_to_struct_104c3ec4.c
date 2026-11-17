/* @k10d write_two_words_to_struct_104c3ec4 @ 0x104c3ec4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 231_menu_state_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_two_words_to_struct_104c3ec4(int param_1,uint32_t *param_2)

{
  uint uVar1;
  
  uVar1 = return_first_word_1045c514(param_2);
  store_value_to_pointer_1045c510((uint32_t *)(param_1 + 0x2c),uVar1 & 0xffff);
  uVar1 = read_struct_field_at_offset_4(param_2);
  write_field_at_offset_four_1045c518((uint32_t *)(param_1 + 0x2c),uVar1 & 0xffff);
  return;
}
