/* @k10d store_big_endian_word_104638f0 @ 0x104638f0
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 139_cpucom_dispatch (unit names are model-proposed)
 * purpose:
 *   Writes a 16-bit value from param_2 into param_1 in big-endian byte order.
 * summary:
 *   The function takes a pointer and a 32-bit integer, extracting the upper and lower bytes
 *   of the integer's low 16 bits. It stores the upper byte (param_2 >> 8) at the first
 *   address and the lower byte (param_2) at the second address. This is a standard big-
 *   endian 16-bit store operation, consistent with the FR60Lite architecture.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_big_endian_word_104638f0(uint8_t *param_1,uint32_t param_2)

{
  *param_1 = (char)((uint)param_2 >> 8);
  param_1[1] = (char)param_2;
  return;
}
