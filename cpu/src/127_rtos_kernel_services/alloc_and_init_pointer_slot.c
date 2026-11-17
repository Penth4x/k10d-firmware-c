/* @k10d alloc_and_init_pointer_slot @ 0x10456074
 * name: model (proposed by the local model from the decompile, confidence 0.55)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Allocates a 4-byte heap slot (or reuses a provided one) and stores a 0x4000xxxx value
 *   selected by param_2.
 * summary:
 *   If param_1 is NULL it calls heap_alloc(4); on success it writes 0x40000000, 0x40004000,
 *   or 0x40008000 into the slot based on param_2 (0,1,2), defaulting to 0x40000000
 *   otherwise. The function returns void, so the allocated pointer is not returned to the
 *   caller. The stored values are not tied to any known MMIO region in the brief, so their
 *   semantic role is unclear.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void alloc_and_init_pointer_slot(uint32_t *param_1,int param_2)

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
