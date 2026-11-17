/* @k10d call_helper_with_shifted_byte_1043d65e @ 0x1043d65e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Extracts a 4-bit field from an object and calls a helper with it shifted left.
 * summary:
 *   Reads a byte at offset 0x120 of the object pointed to by param_1, masks it with 0xf,
 *   and shifts the result left by that value. It then calls update_flag_bits_in_object with
 *   the object, the shifted value, and a 16-bit value at offset 0x124. The specific role of
 *   the helper and the object fields is not determinable from the available information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_shifted_byte_1043d65e(void *param_1)

{
  update_flag_bits_in_object(param_1,(ushort)(1 << ((byte)*(uint32_t *)((int)param_1 + 0x120) & 0xf)),
               *(ushort *)((int)param_1 + 0x124));
  return;
}
