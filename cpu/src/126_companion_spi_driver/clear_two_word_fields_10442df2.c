/* @k10d clear_two_word_fields_10442df2 @ 0x10442df2
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Sets two 16-bit fields at offsets 0x10 and 0x14 of the object to zero.
 * summary:
 *   The function takes a single object pointer and writes zero to the 16-bit values at
 *   offsets 0x10 and 0x14. It has no callees and performs no other side effects. It is
 *   called as virtual method slot 3 of cls_105a0df8, but the specific role of these fields
 *   is not determinable from the code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_two_word_fields_10442df2(void *param_1)

{
  **(uint16_t **)((int)param_1 + 0x10) = 0;
  **(uint16_t **)((int)param_1 + 0x14) = 0;
  return;
}
