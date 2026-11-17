/* @k10d dispatch_heap_operation_1045888c @ 0x1045888c
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Dispatches a heap operation to one of four sub-handlers based on the operation code in
 *   param_2.
 * summary:
 *   Acts as a switch dispatcher for heap management routines within the
 *   rtos_wrappers_and_heap module. It checks if param_3 is non-zero and then routes to
 *   write_10_words_to_mmio_block_10458910, write_10_words_to_mmio_block_10458972,
 *   write_10_words_to_mmio_block_104589e4, or write_masked_words_to_mmio_block depending on
 *   whether param_2 is 0, 0x1000, 0x2000, or 0x3000 respectively. The specific heap
 *   operations (e.g., alloc, free, realloc) are not identifiable from the pseudocode alone,
 *   so a generic dispatch name is used.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_heap_operation_1045888c(uint32_t param_1,int param_2,int param_3)

{
  if (param_3 != 0) {
    if (param_2 == 0) {
      write_10_words_to_mmio_block_10458910(param_1,param_3);
    }
    else if (param_2 == 0x1000) {
      write_10_words_to_mmio_block_10458972(param_1,param_3);
    }
    else if (param_2 == 0x2000) {
      write_10_words_to_mmio_block_104589e4(param_1,param_3);
    }
    else if (param_2 == 0x3000) {
      write_masked_words_to_mmio_block(param_1,param_3);
    }
  }
  return;
}
