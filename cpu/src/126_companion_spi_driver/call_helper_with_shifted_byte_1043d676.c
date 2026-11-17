/* @k10d call_helper_with_shifted_byte_1043d676 @ 0x1043d676
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Reads a byte from param_1+0x120, shifts it left by 2, and passes it with a ushort from
 *   param_1+0x124 to update_flag_bits_in_object.
 * summary:
 *   The function extracts a byte at offset 0x120 of the object pointed to by param_1, masks
 *   it to 4 bits, shifts it left by 2, and casts to ushort. It also reads a ushort at
 *   offset 0x124. Both values are passed as the second and third arguments to
 *   update_flag_bits_in_object along with param_1. No other side effects are visible.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_shifted_byte_1043d676(void *param_1)

{
  update_flag_bits_in_object(param_1,(ushort)(2 << ((byte)*(uint32_t *)((int)param_1 + 0x120) & 0xf)),
               *(ushort *)((int)param_1 + 0x124));
  return;
}
