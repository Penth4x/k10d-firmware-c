/* @k10d release_object_heap_blocks_104713e0 @ 0x104713e0
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 164_sr_calibration (unit names are model-proposed)
 * purpose:
 *   Releases two heap-allocated blocks stored in an object and nulls the pointers.
 * summary:
 *   Takes an object pointer, calls deactivate_display_state on the value at offset 0x54,
 *   then frees the blocks at offsets 0x58 and 0x5c via mempool_release_block on the system
 *   heap. Finally sets both pointers to zero. This is a cleanup/destructor routine for an
 *   object with two heap-allocated members.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_object_heap_blocks_104713e0(int param_1)

{
  void *pvVar1;
  
  deactivate_display_state(*(int *)(param_1 + 0x54));
  pvVar1 = (void *)get_system_heap();
  mempool_release_block(pvVar1,*(void **)(param_1 + 0x58));
  pvVar1 = (void *)get_system_heap();
  mempool_release_block(pvVar1,*(void **)(param_1 + 0x5c));
  *(uint32_t *)(param_1 + 0x58) = 0;
  *(uint32_t *)(param_1 + 0x5c) = 0;
  return;
}
