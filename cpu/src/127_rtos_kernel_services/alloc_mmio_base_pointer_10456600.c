/* @k10d alloc_mmio_base_pointer_10456600 @ 0x10456600
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Allocates a 4-byte heap slot and stores a base address from the 0x40000000 region
 *   selected by param_2.
 * summary:
 *   Takes an optional pre-allocated pointer or calls heap_alloc(4). Writes one of four
 *   0x4000xxxx addresses into the first word based on param_2 (0,1,2,else). The 0x40000000
 *   region is not listed in the brief's verified MMIO map, so the specific device role is
 *   unknown. Returns void; the pointer is either the input or the newly allocated slot.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void alloc_mmio_base_pointer_10456600(uint32_t *param_1,int param_2)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)4), param_1 != (uint32_t *)0x0)) {
    if (param_2 == 0) {
      *param_1 = 0x40000000;
    }
    else if (param_2 == 1) {
      *param_1 = 0x40004000;
    }
    else if (param_2 == 2) {
      *param_1 = 0x40008000;
    }
    else {
      *param_1 = 0x40000000;
    }
  }
  return;
}
