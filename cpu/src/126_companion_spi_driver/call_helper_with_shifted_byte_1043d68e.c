/* @k10d call_helper_with_shifted_byte_1043d68e @ 0x1043d68e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Reads a byte from param_1+0x120, shifts it left by 3, and passes it with a ushort from
 *   param_1+0x124 to update_flag_bits_in_object.
 * summary:
 *   The function extracts a byte at offset 0x120 from the object pointed to by param_1,
 *   masks it to the lower 4 bits, and shifts it left by 3 to form a ushort. It also reads a
 *   ushort from offset 0x124. Both values are passed as arguments to the callee
 *   update_flag_bits_in_object along with the original pointer. The role of the callee is
 *   unknown, so the specific subsystem cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_shifted_byte_1043d68e(void *param_1)

{
  update_flag_bits_in_object(param_1,(ushort)(3 << ((byte)*(uint32_t *)((int)param_1 + 0x120) & 0xf)),
               *(ushort *)((int)param_1 + 0x124));
  return;
}
