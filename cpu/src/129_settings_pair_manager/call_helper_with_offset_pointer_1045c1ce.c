/* @k10d call_helper_with_offset_pointer_1045c1ce @ 0x1045c1ce
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 129_settings_pair_manager (unit names are model-proposed)
 * purpose:
 *   Passes a pointer to the 8th byte of param_1 to read_struct_field_at_offset_4 and
 *   returns its result.
 * summary:
 *   This is a one-line wrapper that computes param_1 + 8 and forwards it as a void pointer
 *   to read_struct_field_at_offset_4. The return value of the callee is returned directly
 *   to the caller. No other side effects or globals are touched.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_helper_with_offset_pointer_1045c1ce(int param_1)

{
  uint32_t uVar1;
  
  uVar1 = read_struct_field_at_offset_4((void *)(param_1 + 8));
  return uVar1;
}
