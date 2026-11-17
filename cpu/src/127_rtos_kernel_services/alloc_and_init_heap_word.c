/* @k10d alloc_and_init_heap_word @ 0x1045557e
 * name: model (proposed by the local model from the decompile, confidence 0.70)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Allocates a 4-byte heap word (or reuses a provided pointer) and stores a
 *   0x40000000-based value selected by param_2.
 * summary:
 *   If param_1 is NULL it calls heap_alloc(4); on success it writes 0x40000000, 0x40004000,
 *   or 0x40008000 into the first word depending on param_2 (0,1,2), defaulting to
 *   0x40000000 otherwise. The function is in the rtos_wrappers_and_heap module and only
 *   uses heap_alloc. The meaning of the stored 0x4000xxxx values is not determinable from
 *   the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void alloc_and_init_heap_word(uint32_t *param_1,int param_2)

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
