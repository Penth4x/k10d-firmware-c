/* @k10d init_two_word_pair_struct @ 0x10534384
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 292_sr_actuator_control (unit names are model-proposed)
 * purpose:
 *   Initializes a 16-byte heap-allocated struct with two 0xffff words and two zero words.
 * summary:
 *   If param_1 is NULL, allocates 0x10 bytes via heap_alloc. Sets the first and third
 *   32-bit words to 0xffff and the second and fourth to 0. The caller receives the pointer
 *   in r4 (return value), which Ghidra types as void. No camera-specific subsystem is
 *   indicated by the data pattern or callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_two_word_pair_struct(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x10), param_1 != (uint32_t *)0x0)) {
    *param_1 = 0xffff;
    param_1[1] = 0;
    param_1[2] = 0xffff;
  }
  return;
}
