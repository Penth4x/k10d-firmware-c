/* @k10d enable_flag_at_offset_16 @ 0x10443458
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Sets bit 0x1f in the 32-bit word at offset 0x10 of the object.
 * summary:
 *   Calls forward_three_args_to_helper_10459d64 with a pointer to the object's field at
 *   offset 0x10, a value of 1, and a mask of 0x1f. This operation sets the bit
 *   corresponding to 0x1f (bit 5) in that field. Returns 1 unconditionally. The specific
 *   role of the field at offset 0x10 is not determinable from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t enable_flag_at_offset_16(cls_105a0f08 *param_1)

{
  forward_three_args_to_helper_10459d64(&((uint32_t *)&(param_1->field_0x8))[2],1,0x1f);
  return 1;
}
