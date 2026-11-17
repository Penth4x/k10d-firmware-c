/* @k10d init_or_alloc_zeroed_block @ 0x104e63dc
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 253_factory_screen_manager (unit names are model-proposed)
 * purpose:
 *   Zero-initializes a 0x10-byte block, heap-allocating it first if the input pointer is
 *   NULL.
 * summary:
 *   Takes a pointer to a 16-byte (4-word) structure. If the pointer is NULL, it calls
 *   heap_alloc(0x10) to obtain memory. It then writes zero to all four 32-bit words of the
 *   block. The caller cls_105bf53c_new uses this to initialize a newly allocated 0x3c-byte
 *   object, likely as part of its constructor logic.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_or_alloc_zeroed_block(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x10), param_1 != (uint32_t *)0x0)) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return;
}
