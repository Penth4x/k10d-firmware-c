/* @k10d read_little_endian_word_1047f216 @ 0x1047f216
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 170_settings_manager (unit names are model-proposed)
 * purpose:
 *   Reads a 16-bit little-endian value from a byte array.
 * summary:
 *   The function takes a pointer to a byte array and constructs a 16-bit integer by
 *   combining the first two bytes in little-endian order (param_2[0] as LSB, param_2[1] as
 *   MSB). It ignores the first parameter and the upper bytes of the array. No callees are
 *   invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t read_little_endian_word_1047f216(void *param_1,uint8_t *param_2)

{
  return CONCAT13(param_2[3],CONCAT12(param_2[2],CONCAT11(param_2[1],*param_2)));
}
