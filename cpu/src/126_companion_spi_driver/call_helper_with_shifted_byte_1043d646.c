/* @k10d call_helper_with_shifted_byte_1043d646 @ 0x1043d646
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Extracts a 4-bit field from a struct, shifts it, and passes it with a 16-bit value to a
 *   helper.
 * summary:
 *   The function reads a 32-bit word at offset 0x120 of the object pointed to by param_1,
 *   masks the low nibble, and uses it as a shift amount for zero. It then calls
 *   update_flag_bits_in_object with the object, the resulting zero value, and a 16-bit
 *   value read from offset 0x124. The specific role of the helper and the struct fields is
 *   not determinable from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_shifted_byte_1043d646(cls_105a0828 *param_1)

{
  update_flag_bits_in_object(param_1,(ushort)(0 << ((byte)param_1->field_0x120 & 0xf)),param_1->field_0x124);
  return;
}
