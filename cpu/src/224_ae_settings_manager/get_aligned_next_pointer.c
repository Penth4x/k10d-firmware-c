/* @k10d get_aligned_next_pointer @ 0x104bcd44
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 224_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Returns the value at offset 4 of the input pointer, aligned down to a 16-byte boundary.
 * summary:
 *   The function reads an integer from the memory location at param_1 + 4. It adds 0xf to
 *   this value and then masks the result with 0xfffffff0. This operation effectively rounds
 *   the retrieved value up to the next multiple of 16 (or aligns it to a 16-byte boundary).
 *   There are no callees or side effects.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint get_aligned_next_pointer(int param_1)

{
  return *(int *)(param_1 + 4) + 0xfU & 0xfffffff0;
}
