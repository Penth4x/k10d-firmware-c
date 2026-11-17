/* @k10d alloc_and_zero_small_object @ 0x104ad27e
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 213_settings_manager (unit names are model-proposed)
 * purpose:
 *   Heap-allocates a 0x14-byte object (or uses the provided pointer) and zero-initialises
 *   its first 20 bytes.
 * summary:
 *   If param_1 is NULL it calls heap_alloc(0x14); on success (or if a non-NULL pointer was
 *   passed) it writes zeros to the first four words and the fifth byte of the block.
 *   Returns the pointer in r4. Used by several 0x14-byte class constructors as their
 *   allocation+initialisation step.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * alloc_and_zero_small_object(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x14), param_1 != (uint32_t *)0x0)) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *(uint8_t *)(param_1 + 4) = 0;
  }
  return param_1;
}
