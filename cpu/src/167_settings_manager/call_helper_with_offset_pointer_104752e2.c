/* @k10d call_helper_with_offset_pointer_104752e2 @ 0x104752e2
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Passes a pointer to the field at offset 0xc of param_1 to get_bounded_array_element and
 *   returns its result.
 * summary:
 *   This is a thin wrapper that extracts the pointer at param_1 + 0xc and forwards it as
 *   the sole argument to get_bounded_array_element. It returns the callee's return value
 *   unchanged. No other side effects or globals are touched.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_helper_with_offset_pointer_104752e2(int param_1)

{
  uint32_t uVar1;
  
  uVar1 = get_bounded_array_element((int *)(param_1 + 0xc));
  return uVar1;
}
