/* @k10d wait_flg_obj @ 0x1045968e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Waits for event-flag bits on the flag object with no timeout (infinite wait) via the
 *   kernel.
 * summary:
 *   One-call wrapper that forwards param_1 and param_2 to alloc_or_acquire_heap_block with
 *   a timeout of 0. Given the module context (rtos_wrappers_and_heap) and the neighboring
 *   verified twai_flg_obj (timeout-based wait), this function likely performs an indefinite
 *   wait for the specified flag bits. It returns the result of the underlying kernel call.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t wait_flg_obj(void *flg_obj, uint32_t flg_mask)

{
  uint32_t ret_val;

  ret_val = alloc_or_acquire_heap_block(flg_obj, 0, flg_mask);
  return ret_val;
}
