/* @k10d allocate_queue_slot @ 0x104e5628
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 252_factory_diagnostic_screen (unit names are model-proposed)
 * purpose:
 *   Increments a queue index and clears the next slot if capacity allows, returning the new
 *   index or -1.
 * summary:
 *   Reads a current index from offset 0x24 of the object and compares it against a capacity
 *   limit stored at offset 0xc of the object pointed to by offset 0x74. If the index is
 *   below the limit, it increments the index, writes zero to the corresponding slot in the
 *   array pointed to by offset 0x40, and returns the new index. Otherwise, it returns
 *   0xffffffff (-1). No callees are invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint allocate_queue_slot(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x24);
  if (uVar1 < *(uint *)(*(int *)(param_1 + 0x74) + 0xc)) {
    *(uint *)(param_1 + 0x24) = uVar1 + 1;
    *(uint32_t *)(*(int *)(param_1 + 0x40) + (uVar1 + 1) * 4) = 0;
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}
