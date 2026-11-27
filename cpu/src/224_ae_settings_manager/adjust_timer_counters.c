/* @k10d adjust_timer_counters @ 0x104bca94
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 224_ae_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t adjust_timer_counters(void *param_1)

{
  int iVar1;
  bool bVar3;
  int iVar2;
  uintptr_t sp;
  uint32_t auStack_18 [4];
  
  iVar1 = compute_exposure_time_from_meter((uint32_t)param_1);
  bVar3 = check_field_at_offset_0x40_positive((int)param_1);
  if (bVar3) {
    *(int *)((int)param_1 + 0x38) = *(int *)((int)param_1 + 0x38) - iVar1;
    copy_two_word_pair(auStack_18,param_1);
    iVar2 = return_first_word_1045c514(auStack_18);
    free_heap_if_flagged_1045c402(auStack_18,2);
    if (*(int *)((int)param_1 + 0x38) < (iVar2 >> 1) + *(int *)((int)param_1 + 0x54)) {
      *(int *)((int)param_1 + 0x38) = *(int *)((int)param_1 + 0x38) - iVar1;
    }
  }
  bVar3 = check_field_at_offset_0x44_positive(param_1);
  if (!bVar3) {
    *(int *)((int)param_1 + 0x3c) = *(int *)((int)param_1 + 0x3c) - iVar1;
  }
  bVar3 = compare_offset_to_helper_result(param_1);
  if (!bVar3) {
    *(int *)((int)param_1 + 0x3c) = *(int *)((int)param_1 + 0x3c) + iVar1;
  }
  return 1;
}
