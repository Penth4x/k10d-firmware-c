/* @k10d clear_pair_array @ 0x1052b2f8
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 285_event_queue_manager (unit names are model-proposed)
 * purpose:
 *   Zeroes an array of 8-byte pairs pointed to by a struct field and resets its count to
 *   zero.
 * summary:
 *   Reads a count from offset 0x224 of the object in param_1. If the count is positive, it
 *   iterates over the array starting at offset 0x228, writing 0xffff to the first word and
 *   0x0 to the second word of each 8-byte entry. Finally, it sets the count field at 0x224
 *   to 0 and returns 1. No callees are invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t clear_pair_array(int param_1)

{
  int iVar1;
  int iVar2;
  uint32_t *puVar3;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x224)) {
    iVar1 = 0;
    do {
      puVar3 = (uint32_t *)(param_1 + 0x228 + iVar1);
      *puVar3 = 0xffff;
      puVar3[1] = 0;
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 8;
    } while (iVar2 < *(int *)(param_1 + 0x224));
  }
  *(uint32_t *)(param_1 + 0x224) = 0;
  return 1;
}
