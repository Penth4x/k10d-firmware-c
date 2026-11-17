/* @k10d zero_four_byte_buffer @ 0x1047e35c
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 170_settings_manager (unit names are model-proposed)
 * purpose:
 *   Zeroes a 4-byte buffer, heap-allocating it first if the input pointer is NULL.
 * summary:
 *   Takes a pointer to a 4-byte region; if it is NULL it calls heap_alloc(4) and uses the
 *   result. It then writes 0 to the first two bytes and 0 to the last two bytes of the
 *   buffer. Called from two class constructors as an initialization step for a small 4-byte
 *   field.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void zero_four_byte_buffer(uint16_t *param_1)

{
  if ((param_1 != (uint16_t *)0x0) ||
     (param_1 = (uint16_t *)heap_alloc((void *)4), param_1 != (uint16_t *)0x0)) {
    *param_1 = 0;
    *(uint8_t *)(param_1 + 1) = 0;
    *(uint8_t *)((int)param_1 + 3) = 0;
  }
  return;
}
