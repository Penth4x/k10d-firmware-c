/* @k10d compute_and_store_two_values @ 0x104bc2ec
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 224_ae_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void compute_and_store_two_values(uint32_t *param_1,uint param_2,uint param_3,uint32_t *param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint32_t uVar4;
  uint uVar5;
  uint32_t uVar6;
  uint uVar7;
  char cVar8;
  
  if ((param_2 != 0) && (param_3 != 0)) {
    iVar1 = return_first_word_1045c514(param_1);
    cVar8 = '\0';
    if (iVar1 != 0) {
      uVar2 = read_struct_field_at_offset_4(param_1);
      iVar1 = compute_log2_index(uVar2);
      uVar2 = return_first_word_1045c514(param_1);
      iVar3 = compute_log2_index(uVar2);
      uVar4 = compare_version_fields(iVar1,iVar3);
      uVar2 = negate_signed_integer(param_3);
      uVar5 = negate_signed_integer(param_2);
      uVar6 = compare_version_fields(uVar2,uVar5);
      pack_lens_fw_update_word(uVar4,uVar6);
      if (cVar8 == '\x01') {
        uVar7 = return_first_word_1045c514(param_1);
        iVar1 = compute_log2_index(uVar7);
        uVar4 = compare_version_fields(iVar1,uVar5);
      }
      else {
        uVar7 = read_struct_field_at_offset_4(param_1);
        iVar1 = compute_log2_index(uVar7);
        uVar4 = compare_version_fields(iVar1,uVar2);
      }
      uVar5 = compute_float_division(uVar4,uVar5);
      iVar1 = count_leading_zeros(uVar5);
      store_value_to_pointer_1045c510(param_4,iVar1);
      uVar2 = compute_float_division(uVar4,uVar2);
      iVar1 = count_leading_zeros(uVar2);
      write_field_at_offset_four_1045c518(param_4,iVar1);
    }
  }
  return;
}
