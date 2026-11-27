/* @k10d adjust_two_counters_by_delta_104bc9f8 @ 0x104bc9f8
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 224_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Conditionally increments or decrements two integer fields of a struct by a value from a
 *   helper.
 * summary:
 *   The function retrieves a delta value from compute_exposure_time_from_meter. It then
 *   uses three boolean/int helper functions (compare_offset_to_helper_result,
 *   check_field_at_offset_0x40_positive, check_index_less_than_count) to decide whether to
 *   add or subtract this delta from fields at offsets 0xf and 0xe of the input struct. It
 *   also performs a comparison involving values from read_struct_field_at_offset_4 and
 *   copy_two_word_pair to potentially apply an additional increment to the 0xf field. The
 *   function always returns 1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t adjust_two_counters_by_delta_104bc9f8(uint32_t *param_1)

{
  int iVar1;
  bool bVar4;
  int iVar2;
  int iVar3;
  uintptr_t sp;
  uint8_t auStack_18 [16];
  
  iVar1 = compute_exposure_time_from_meter((uint32_t)param_1);
  bVar4 = compare_offset_to_helper_result(param_1);
  if (bVar4) {
    param_1[0xf] = param_1[0xf] + iVar1;
    iVar2 = read_struct_field_at_offset_4(param_1);
    copy_two_word_pair(auStack_18,param_1);
    iVar3 = read_struct_field_at_offset_4(auStack_18);
    free_heap_if_flagged_1045c402(auStack_18,2);
    if (iVar2 < (iVar3 >> 1) + param_1[0x15] + param_1[0xf]) {
      param_1[0xf] = param_1[0xf] + iVar1;
    }
  }
  bVar4 = check_field_at_offset_0x40_positive((int)param_1);
  if (!bVar4) {
    param_1[0xe] = param_1[0xe] - iVar1;
  }
  iVar2 = check_index_less_than_count(param_1);
  if (iVar2 == 0) {
    param_1[0xe] = param_1[0xe] + iVar1;
  }
  return 1;
}
