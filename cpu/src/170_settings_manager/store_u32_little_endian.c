/* @k10d store_u32_little_endian @ 0x1047f1fa
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 170_settings_manager (unit names are model-proposed)
 * purpose:
 *   Writes a 32-bit integer into a byte buffer in little-endian order.
 * summary:
 *   The function takes a pointer to a byte array (param_2) and a 32-bit value (param_3),
 *   then stores the value's bytes into the array starting at offset 0. The least
 *   significant byte is stored first at param_2[0], followed by the next bytes in ascending
 *   order up to the most significant byte at param_2[3]. This is a standard little-endian
 *   serialization routine. No other side effects or memory accesses are present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_u32_little_endian(void *param_1,uint8_t *param_2,uint32_t param_3)

{
  param_2[3] = (char)((uint)param_3 >> 0x18);
  param_2[2] = (char)((uint)param_3 >> 0x10);
  param_2[1] = (char)((uint)param_3 >> 8);
  *param_2 = (char)param_3;
  return;
}
