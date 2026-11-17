/* @k10d dispatch_heap_operation_1045857a @ 0x1045857a
 * name: model (proposed by the local model from the decompile, confidence 0.55)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Dispatches a heap operation to one of four sub-handlers based on a type code in
 *   param_2.
 * summary:
 *   Checks that param_3 is non-zero, then branches on param_2 (0, 0x1000, 0x2000, 0x3000)
 *   to call one of four neighboring functions, passing param_1 and param_3. The source
 *   module is identified as rtos_wrappers_and_heap, and the four-way dispatch pattern is
 *   consistent with routing different heap or kernel object operations. The specific roles
 *   of the four callees are not yet named, so the exact heap operation type cannot be
 *   determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_heap_operation_1045857a(uint32_t param_1,int param_2,int param_3)

{
  if (param_3 != 0) {
    if (param_2 == 0) {
      write_twelve_words_to_mmio_block_104585fe(param_1,param_3);
    }
    else if (param_2 == 0x1000) {
      write_16_10bit_words_to_mmio_10458650(param_1,param_3);
    }
    else if (param_2 == 0x2000) {
      write_16_10bit_words_to_mmio_104586ac(param_1,param_3);
    }
    else if (param_2 == 0x3000) {
      write_16_sampled_words_to_mmio_10458708(param_1,param_3);
    }
  }
  return;
}
