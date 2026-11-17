/* @k10d advance_two_wrapping_counters @ 0x104676bc
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 146_firmware_update (unit names are model-proposed)
 * purpose:
 *   Increments two 32-bit counters at offsets 0x14 and 0x18 of the object, wrapping to zero
 *   when they reach 1.
 * summary:
 *   The function takes a pointer to a structure and modifies two integer fields. It
 *   increments the field at offset 0x14, setting it to 0 if it was already >= 1, otherwise
 *   adding 1. It then copies the value from offset 0x18 to offset 0x1c, and increments the
 *   field at offset 0x18 with the same wrap-to-zero logic. No callees are invoked, and no
 *   specific camera subsystem behavior is evident from the code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void advance_two_wrapping_counters(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x14) < 1) {
    iVar1 = *(int *)(param_1 + 0x14) + 1;
  }
  else {
    iVar1 = 0;
  }
  *(int *)(param_1 + 0x14) = iVar1;
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x18);
  if (*(int *)(param_1 + 0x18) < 1) {
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  }
  else {
    *(uint32_t *)(param_1 + 0x18) = 0;
  }
  return;
}
