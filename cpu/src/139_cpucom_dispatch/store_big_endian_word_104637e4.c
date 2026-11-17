/* @k10d store_big_endian_word_104637e4 @ 0x104637e4
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 139_cpucom_dispatch (unit names are model-proposed)
 * purpose:
 *   Writes a 16-bit value to memory in big-endian byte order.
 * summary:
 *   The function takes a pointer and a 32-bit value, extracting the upper and lower bytes
 *   of the value's lower 16 bits. It stores the upper byte at the pointer location and the
 *   lower byte at the next location, effectively writing a big-endian 16-bit integer. No
 *   callees are involved.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_big_endian_word_104637e4(uint8_t *param_1,uint32_t param_2)

{
  *param_1 = (char)((uint)param_2 >> 8);
  param_1[1] = (char)param_2;
  return;
}
