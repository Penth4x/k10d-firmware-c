/* @k10d call_helper_with_field8 @ 0x105362e4
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Passes the integer at offset 8 of the object pointed to by param_1 to
 *   increment_field_and_invoke_virtual and returns its result.
 * summary:
 *   A thin wrapper that dereferences param_1+8 and forwards that value as the first
 *   argument to increment_field_and_invoke_virtual, returning the callee's return value in
 *   r4. The caller is check_and_handle_status in the lens_firmware_update module, but the
 *   callee's role is unknown, so the specific lens-update operation cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_helper_with_field8(int param_1)

{
  uint32_t extraout_r4;
  int r5_in;
  
  increment_field_and_invoke_virtual(*(int *)(param_1 + 8),r5_in);
  return extraout_r4;
}
