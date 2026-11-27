/* @k10d adjust_two_counters_by_delta_104bc96c @ 0x104bc96c
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 224_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Conditionally decrements or increments two integer fields of a struct by a value from a
 *   helper.
 * summary:
 *   The function retrieves a delta value from compute_exposure_time_from_meter and then
 *   conditionally modifies param_1[0xf] and param_1[0xe] based on the return values of
 *   check_field_at_offset_0x44_positive, check_field_at_offset_0x40_positive, and
 *   check_index_less_than_count. It also calls copy_two_word_pair,
 *   read_struct_field_at_offset_4, and free_heap_if_flagged_1045c402 with a local buffer
 *   when the first condition is met. The specific meaning of the struct fields and the
 *   delta value is not clear from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t adjust_two_counters_by_delta_104bc96c(uint32_t *param_1)

{
  int iVar1;
  bool bVar3;
  int iVar2;
  uintptr_t sp;
  uint8_t auStack_18 [16];
  
  iVar1 = compute_exposure_time_from_meter((uint32_t)param_1);
  bVar3 = check_field_at_offset_0x44_positive(param_1);
  if (bVar3) {
    param_1[0xf] = param_1[0xf] - iVar1;
    copy_two_word_pair(auStack_18,param_1);
    iVar2 = read_struct_field_at_offset_4(auStack_18);
    free_heap_if_flagged_1045c402(auStack_18,2);
    if ((int)param_1[0xf] < (iVar2 >> 1) + param_1[0x15]) {
      param_1[0xf] = param_1[0xf] - iVar1;
    }
  }
  bVar3 = check_field_at_offset_0x40_positive((int)param_1);
  if (!bVar3) {
    param_1[0xe] = param_1[0xe] - iVar1;
  }
  iVar2 = check_index_less_than_count(param_1);
  if (iVar2 == 0) {
    param_1[0xe] = param_1[0xe] + iVar1;
  }
  return 1;
}
