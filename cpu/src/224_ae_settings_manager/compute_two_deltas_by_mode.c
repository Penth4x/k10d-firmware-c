/* @k10d compute_two_deltas_by_mode @ 0x104bbf32
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 224_ae_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void compute_two_deltas_by_mode(uint32_t *param_1,uint32_t *param_2)

{
  int iVar1;
  uint32_t uVar2;
  int iVar3;
  
  iVar1 = param_1[0xb];
  if (iVar1 == 0) {
    uVar2 = read_first_word_1045bd4c(param_2);
    param_1[0xe] = uVar2;
    uVar2 = get_second_word_of_struct(param_2);
    param_1[0xf] = uVar2;
  }
  else if (iVar1 == 1) {
    iVar1 = return_first_word_1045c514(param_1);
    iVar3 = get_second_word_of_struct(param_2);
    param_1[0xe] = iVar1 - iVar3;
    uVar2 = read_first_word_1045bd4c(param_2);
    param_1[0xf] = uVar2;
  }
  else if (iVar1 == 2) {
    iVar1 = return_first_word_1045c514(param_1);
    iVar3 = read_first_word_1045bd4c(param_2);
    param_1[0xe] = iVar1 - iVar3;
    iVar1 = read_struct_field_at_offset_4(param_1);
    iVar3 = get_second_word_of_struct(param_2);
    param_1[0xf] = iVar1 - iVar3;
  }
  else if (iVar1 == 3) {
    uVar2 = get_second_word_of_struct(param_2);
    param_1[0xe] = uVar2;
    iVar1 = read_struct_field_at_offset_4(param_1);
    iVar3 = read_first_word_1045bd4c(param_2);
    param_1[0xf] = iVar1 - iVar3;
  }
  return;
}
