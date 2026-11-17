/* @k10d increment_callee_result_1045c1de @ 0x1045c1de
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 129_settings_pair_manager (unit names are model-proposed)
 * purpose:
 *   Calls read_struct_field_at_offset_4 with param_1+8 and returns the result plus one.
 * summary:
 *   The function passes a pointer offset by 8 bytes from param_1 to
 *   read_struct_field_at_offset_4, takes the returned integer, and returns that value
 *   incremented by 1. No other side effects or globals are touched. The role of
 *   read_struct_field_at_offset_4 is unknown, so the specific subsystem cannot be
 *   determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int increment_callee_result_1045c1de(void *param_1)

{
  int iVar1;
  
  iVar1 = read_struct_field_at_offset_4((void *)((int)param_1 + 8));
  return iVar1 + 1;
}
