/* @k10d call_helper_on_five_slots @ 0x10516966
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * purpose:
 *   Calls release_heap_block_and_null on five consecutive 0x3c-byte slots within the buffer
 *   at param_1.
 * summary:
 *   Iterates once (loop counter starts at 1 and decrements to 0), invoking
 *   release_heap_block_and_null at offsets 0x00, 0x0c, 0x18, 0x24, and 0x30 from param_1.
 *   The callee's role is unknown, so the operation is described mechanically as applying a
 *   helper to five sub-objects or fields within a 0x3c-byte structure.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_on_five_slots(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 1;
  iVar1 = 0;
  do {
    release_heap_block_and_null((void *)(param_1 + iVar1));
    release_heap_block_and_null((void *)(param_1 + iVar1 + 0xc));
    release_heap_block_and_null((void *)(param_1 + iVar1 + 0x18));
    release_heap_block_and_null((void *)(param_1 + iVar1 + 0x24));
    release_heap_block_and_null((void *)(param_1 + iVar1 + 0x30));
    iVar2 = iVar2 + -1;
    iVar1 = iVar1 + 0x3c;
  } while (-1 < iVar2);
  return;
}
