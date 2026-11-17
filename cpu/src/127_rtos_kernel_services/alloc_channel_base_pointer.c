/* @k10d alloc_channel_base_pointer @ 0x1045506e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Allocates a 4-byte object and initializes it with a base address selected by a channel
 *   index.
 * summary:
 *   The function allocates 4 bytes from the heap if param_1 is null, otherwise uses the
 *   provided pointer. It writes a base address into the allocated memory based on param_2:
 *   0x40000000 for index 0 or default, 0x40004000 for index 1, and 0x40008000 for index 2.
 *   These addresses likely correspond to different hardware channels or memory-mapped
 *   regions within the 0x40000000 block.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void alloc_channel_base_pointer(uint32_t *param_1,int param_2)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)4), param_1 != (uint32_t *)0x0)) {
    *param_1 = 0;
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
