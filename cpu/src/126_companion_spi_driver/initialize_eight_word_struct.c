/* @k10d initialize_eight_word_struct @ 0x1043d8b4
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Zeroes an 8-word (0x20 byte) structure, allocating it from the heap if the input
 *   pointer is NULL.
 * summary:
 *   Accepts a pointer to an 8-word block; if NULL, allocates 0x20 bytes via heap_alloc.
 *   Zeroes all 8 words of the block. The return value (r4) holds the valid pointer to the
 *   zeroed block, though the function is typed void. Called as virtual slot 2 of
 *   cls_105a08e0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void initialize_eight_word_struct(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x20), param_1 != (uint32_t *)0x0)) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
  }
  return;
}
