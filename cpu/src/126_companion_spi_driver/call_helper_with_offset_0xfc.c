/* @k10d call_helper_with_offset_0xfc @ 0x1044795a
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Reads the integer at offset 0xfc of the object and passes it to a single helper
 *   function.
 * summary:
 *   This is virtual slot 4 of cls_105a1a84. It dereferences the pointer at param_1 + 0xfc
 *   and passes that value as the sole argument to heap_free_2. No other operations or side
 *   effects are visible in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_offset_0xfc(cls_105a1a84 *param_1)

{
  heap_free_2(param_1->field_0xfc);
  return;
}
