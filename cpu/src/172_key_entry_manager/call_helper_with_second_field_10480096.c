/* @k10d call_helper_with_second_field_10480096 @ 0x10480096
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 172_key_entry_manager (unit names are model-proposed)
 * purpose:
 *   Reads the second int field of the object pointed to by param_1 and passes it as the
 *   second argument to map_error_code_to_index.
 * summary:
 *   This is a thin wrapper that dereferences param_1, extracts the integer at offset +4,
 *   and forwards both the object pointer and that value to map_error_code_to_index. It
 *   returns the callee's result directly. No other side effects or globals are touched.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_helper_with_second_field_10480096(void *param_1)

{
  uint32_t uVar1;
  
  uVar1 = map_error_code_to_index(param_1,*(int *)((int)param_1 + 4));
  return uVar1;
}
