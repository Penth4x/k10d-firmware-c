/* @k10d store_query_result_as_bool @ 0x10532514
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 291_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls a helper with param_2 and 0, then stores whether the result equals 1 into a bool
 *   field of an object.
 * summary:
 *   Invokes read_u16_from_struct_array(param_2, 0) and compares the returned short to 1.
 *   The boolean outcome is written to offset 0x4e6 within the object pointed to by
 *   *(param_1 + 0x14). The role of the helper and the object field is not determinable from
 *   the available information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_query_result_as_bool(int param_1,int param_2)

{
  short sVar1;
  
  sVar1 = read_u16_from_struct_array(param_2,0);
  *(bool *)(*(int *)(param_1 + 0x14) + 0x4e6) = sVar1 == 1;
  return;
}
