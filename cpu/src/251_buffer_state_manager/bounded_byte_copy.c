/* @k10d bounded_byte_copy @ 0x104e136e
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 251_buffer_state_manager (unit names are model-proposed)
 * purpose:
 *   Copies param_3 bytes from param_2 to a destination offset within the buffer described
 *   by param_1, returning 1 on success or 0 if the destination range exceeds the buffer
 *   size.
 * summary:
 *   The function checks if the destination offset (param_4) plus length (param_3) fits
 *   within the size stored at *param_1. If it fits, it performs a byte-wise copy from
 *   param_2 to the address calculated as param_1[2] + param_4 + param_3 (iterating
 *   backwards). It returns 1 if the copy was performed, or 0 if the bounds check failed. No
 *   callees are invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t bounded_byte_copy(uint *param_1,void *param_2,int param_3,int param_4)

{
  uint uVar1;
  uint32_t uVar2;
  
  if (*param_1 < (uint)(param_4 + param_3)) {
    uVar2 = 0;
  }
  else {
    uVar1 = param_1[2];
    while (param_3 != 0) {
      param_3 = param_3 + -1;
      *(uint8_t *)(param_3 + uVar1 + param_4) = *(uint8_t *)(param_3 + (int)param_2);
    }
    uVar2 = 1;
  }
  return uVar2;
}
