/* @k10d store_query_result_as_enum @ 0x1049c23c
 * name: model (proposed by the local model from the decompile, confidence 0.55)
 * unit: 205_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls read_u16_from_struct_array with param_2 and 0, maps the short result to 0/1/2,
 *   and stores it at offset 4 of the object pointed to by *(param_1+0x10).
 * summary:
 *   The function invokes read_u16_from_struct_array(param_2, 0) and interprets the returned
 *   short as a small enum: 0 maps to 1, 1 maps to 2, and any other value maps to 0. The
 *   resulting 32-bit value is written to *(int *)(param_1 + 0x10) + 4. No other side
 *   effects or camera-specific registers are touched in this snippet.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_query_result_as_enum(int param_1,int param_2)

{
  short sVar1;
  uint32_t uVar2;
  
  sVar1 = read_u16_from_struct_array(param_2,0);
  uVar2 = 0;
  if (sVar1 == 0) {
    uVar2 = 1;
  }
  else if (sVar1 == 1) {
    uVar2 = 2;
  }
  *(uint32_t *)(*(int *)(param_1 + 0x10) + 4) = uVar2;
  return;
}
