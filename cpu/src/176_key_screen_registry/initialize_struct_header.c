/* @k10d initialize_struct_header @ 0x10482f54
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 176_key_screen_registry (unit names are model-proposed)
 * purpose:
 *   Sets the first word of a structure to 1 and zeroes the next 17 bytes.
 * summary:
 *   The function writes a 32-bit value of 1 to the first element of the memory block
 *   pointed to by param_1. It then explicitly zeroes the subsequent three 32-bit words and
 *   the following byte, clearing a total of 17 bytes after the initial flag. No other side
 *   effects or memory accesses are performed.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void initialize_struct_header(uint32_t *param_1)

{
  *param_1 = 1;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(uint8_t *)(param_1 + 4) = 0;
  return;
}
