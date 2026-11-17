/* @k10d dispatch_heap_operation_10458c40 @ 0x10458c40
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Dispatches a heap operation to one of four sub-handlers based on a type code in
 *   param_2.
 * summary:
 *   Checks that param_3 is non-zero, then branches on param_2 (0, 0x1000, 0x2000, 0x3000)
 *   to call one of four sibling functions in the rtos_wrappers_and_heap module. The callees
 *   are unnamed but reside in the same module as heap_alloc/heap_free and kernel wrappers,
 *   suggesting these are specific heap or memory management operations. No camera-specific
 *   subsystem is indicated by the code or module context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_heap_operation_10458c40(uint32_t param_1,int param_2,int param_3)

{
  if (param_3 != 0) {
    if (param_2 == 0) {
      write_16_sampled_words_to_mmio_10458cc4(param_1,param_3);
    }
    else if (param_2 == 0x1000) {
      write_twelve_words_to_mmio_block_10458d20(param_1,param_3);
    }
    else if (param_2 == 0x2000) {
      write_16_10bit_words_to_mmio_block(param_1,param_3);
    }
    else if (param_2 == 0x3000) {
      write_16_10bit_words_to_mmio_10458dd8(param_1,param_3);
    }
  }
  return;
}
