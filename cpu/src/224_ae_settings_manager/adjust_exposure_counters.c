/* @k10d adjust_exposure_counters @ 0x104bcb20
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 224_ae_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t adjust_exposure_counters(uint32_t *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  uintptr_t sp;
  uint32_t auStack_18 [4];
  
  iVar1 = compute_exposure_time_from_meter((uint32_t)param_1);
  iVar2 = check_index_less_than_count(param_1);
  if (iVar2 != 0) {
    param_1[0xe] = param_1[0xe] + iVar1;
    iVar2 = return_first_word_1045c514(param_1);
    copy_two_word_pair(auStack_18,param_1);
    iVar3 = return_first_word_1045c514(auStack_18);
    free_heap_if_flagged_1045c402(auStack_18,2);
    if (iVar2 < (iVar3 >> 1) + param_1[0x15] + param_1[0xe]) {
      param_1[0xe] = param_1[0xe] + iVar1;
    }
  }
  bVar4 = check_field_at_offset_0x44_positive(param_1);
  if (!bVar4) {
    param_1[0xf] = param_1[0xf] - iVar1;
  }
  bVar4 = compare_offset_to_helper_result(param_1);
  if (!bVar4) {
    param_1[0xf] = param_1[0xf] + iVar1;
  }
  return 1;
}
