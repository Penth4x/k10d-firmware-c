/* @k10d call_helper_with_offset_5c_10435244 @ 0x10435244
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 124_ui_state_router (unit names are model-proposed)
 * purpose:
 *   Reads a pointer from offset 0x5c of the input object and passes it to a helper with
 *   argument 2.
 * summary:
 *   The function dereferences the input parameter at offset 0x5c and passes that value
 *   along with the constant 2 to check_flag_array_ready. It returns the result of that call
 *   directly. The specific role of the object or the helper is not determinable from the
 *   provided pseudocode and unknown callee name.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_helper_with_offset_5c_10435244(int param_1)

{
  uint32_t uVar1;
  
  uVar1 = check_flag_array_ready(*(uint32_t *)(param_1 + 0x5c),2);
  return uVar1;
}
