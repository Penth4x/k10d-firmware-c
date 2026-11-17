/* @k10d compute_and_store_two_word_result @ 0x104c6028
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 233_menu_settings_init (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void compute_and_store_two_word_result(uint32_t param_1,uint32_t param_2,uint32_t *param_3,uint32_t *param_4,
                 int param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint32_t uVar6;
  uint32_t uVar7;
  int iVar8;
  uintptr_t sp;
  uint32_t auStack_1c [5];
  
  uVar1 = return_first_word_1045c514(param_3);
  uVar1 = uVar1 & 0xffff;
  uVar2 = read_struct_field_at_offset_4(param_3);
  uVar3 = negate_signed_integer(uVar1);
  uVar2 = negate_signed_integer(uVar2 & 0xffff);
  auStack_1c[0] = compare_version_fields(uVar2,uVar3);
  do {
    do {
      uVar1 = ((int)uVar1 >> 6) << 5;
      uVar2 = negate_signed_integer(uVar1);
      uVar3 = compute_float_division(uVar2,auStack_1c[0]);
      uVar3 = count_leading_zeros(uVar3);
      uVar4 = return_first_word_1045c514(param_4);
      iVar5 = compute_log2_index(uVar4);
      uVar6 = compare_version_fields(iVar5,uVar2);
      uVar2 = read_struct_field_at_offset_4(param_4);
      iVar5 = compute_log2_index(uVar2);
      uVar2 = negate_signed_integer(uVar3 & 0xfffe);
      uVar7 = compare_version_fields(iVar5,uVar2);
      iVar5 = test_two_mmio_writes(param_2,uVar6);
      iVar8 = test_two_mmio_writes(param_2,uVar7);
    } while (iVar5 == 0);
  } while (iVar8 == 0);
  alloc_two_word_pair_1045c3dc(auStack_1c + 3,uVar1,uVar3 & 0xfffe);
  iVar5 = 8;
  do {
    iVar8 = iVar5 + -4;
    *(uint32_t *)((int)auStack_1c + iVar5) = *(uint32_t *)((int)auStack_1c + iVar5 + 8);
    iVar5 = iVar8;
  } while (iVar8 != 0);
  free_heap_if_flagged_1045c402(auStack_1c + 3,2);
  iVar5 = 8;
  do {
    iVar8 = iVar5 + -4;
    *(uint32_t *)(iVar8 + param_5) = *(uint32_t *)((int)auStack_1c + iVar5);
    iVar5 = iVar8;
  } while (iVar8 != 0);
  return;
}
