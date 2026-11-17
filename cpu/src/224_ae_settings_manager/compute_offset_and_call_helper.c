/* @k10d compute_offset_and_call_helper @ 0x104bd49e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 224_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Computes an offset from param_1 plus a field at 0x8d0 and calls
 *   scan_short_array_for_nonzero with the result.
 * summary:
 *   The function takes param_1, reads an integer at offset 0x8d0, multiplies it by 0xb34,
 *   adds 0x2118, and passes both the original pointer and the computed value as arguments
 *   to scan_short_array_for_nonzero. It returns the result of that call directly. The
 *   specific role of the offset calculation and the callee is not determinable from the
 *   provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t compute_offset_and_call_helper(int param_1)

{
  uint32_t uVar1;
  
  uVar1 = scan_short_array_for_nonzero(param_1, (void *)(param_1 + 0x2118 + *(int *)(param_1 + 0x8d0) * 0xb34));
  return uVar1;
}
