/* @k10d init_object_with_heap_alloc_10390566 @ 0x10390566
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Initializes an object by allocating a sub-buffer and zeroing/setting fields at specific
 *   offsets.
 * summary:
 *   Calls an unknown function, then allocates a 0x1000-byte buffer (4 units) into the field
 *   at offset 0x1c. Subsequent calls initialize or zero fields at offsets 0x4c, 0x68, and
 *   0x44. Returns 1 on success. The specific subsystem is not identifiable from the
 *   provided callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t init_object_with_heap_alloc_10390566(int param_1)

{
  init_state_and_notify_zero();
  alloc_pool_and_init_task((int *)(param_1 + 0x1c),0x10,0x1000,4);
  wait_flg_obj((void *)(param_1 + 0x4c),0);
  call_helper_on_offset_field_10390e1e(param_1 + 0x68);
  create_kernel_object((void *)(param_1 + 0x44));
  return 1;
}
